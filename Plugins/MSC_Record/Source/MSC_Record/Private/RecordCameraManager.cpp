// Copyright 2022 Michel Brito.

#include "RecordCameraManager.h"

#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "IImageWrapper.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneCaptureComponentCube.h"
#include "Engine/TextureRenderTarget.h"
#include "MSC_Library.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine/TextureRenderTargetCube.h"
#include "ImageWriteBlueprintLibrary.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "AudioMixerBlueprintLibrary.h"

ARecordCameraManager::ARecordCameraManager()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UTexture2D>Icon(TEXT("/MSC_Record/Resources/CameraManager.CameraManager"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Plane(TEXT("/Engine/BasicShapes/Plane.Plane"));

	BillboardRoot = CreateDefaultSubobject<UBillboardComponent>("Billboard");
	RootComponent = BillboardRoot;
	if (Icon.Succeeded())
		BillboardRoot->SetSprite(Icon.Object);

	PreviewCam = CreateDefaultSubobject<UCameraComponent>("Preview");
	PreviewCam->SetupAttachment(RootComponent);
	PreviewCam->OrthoWidth = 20.f;
	PreviewCam->AspectRatio = 2.f;

	PlaneViewMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	PlaneViewMesh->SetupAttachment(RootComponent);
	PlaneViewMesh->SetRelativeTransform(FTransform(FRotator(0.f, 90.f, 90.f), FVector(10.f, 0.f, -50.f), FVector(0.2f, 0.1f, 0.1f)));
	PlaneViewMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	PlaneViewMesh->CastShadow = false;
	if (Plane.Succeeded())
		PlaneViewMesh->SetStaticMesh(Plane.Object);

	Capture2DView = CreateDefaultSubobject<USceneCaptureComponent2D>("Capture");
	Capture2DView->SetupAttachment(RootComponent);
	Capture2DView->SetRelativeTransform(FTransform(FRotator(), FVector(0.f, 0.f, -50.f), FVector(0.f, 0.f, 0.f)));
	Capture2DView->ProjectionType = ECameraProjectionMode::Orthographic;
	Capture2DView->CaptureSource = ESceneCaptureSource::SCS_SceneColorSceneDepth;
	Capture2DView->OrthoWidth = 20.f;
	Capture2DView->bCaptureEveryFrame = false;
	Capture2DView->bCaptureOnMovement = false;

}

void ARecordCameraManager::BeginPlay()
{
	Super::BeginPlay();
	bIsPreview = false;
	MergeMode = "ImageSequence";
	PlayerControl = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	SetCameraRecordingSettings(RecordingSettings, Resolution, SelectCam, bAudioByCamera, SequenceRenderMode);
}

void ARecordCameraManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	if (bIsRecording)
	{
		FMscLib::LogText("Finalizing Capture", ELogVerbosity::Display);
		SetupMergeInfo();
		ExecuteMerger();
		AddToRemoveList();
	}
}

void ARecordCameraManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdatePreview();
}

bool ARecordCameraManager::StartCapture()
{
	if (!bIsRecording && !bIsExporting)
	{
		switch (SelectCam)
		{
		case Camera2D:
			RenderTarget2D = NewObject<UTextureRenderTarget2D>(GetWorld());
			RenderTarget2D->RenderTargetFormat = ETextureRenderTargetFormat::RTF_RGBA8_SRGB;
			RenderTarget2D->InitAutoFormat(Resolution.ResX, Resolution.ResY);
			RenderTarget2D->UpdateResourceImmediate(true);
			if (bAudioByCamera)
			//	PlayerControl->SetAudioListenerOverride(GetPreviewCam(), FVector(), FRotator());
			GetCam2DCaptureComp()->TextureTarget = RenderTarget2D;
			break;
		case Camera360:
			RenderTarget2D = NewObject<UTextureRenderTarget2D>(GetWorld());
			RenderTarget2D->RenderTargetFormat = ETextureRenderTargetFormat::RTF_RGBA8_SRGB;
			RenderTarget2D->InitAutoFormat(Resolution.ResY * 2, Resolution.ResY);
			RenderTarget2D->UpdateResourceImmediate(true);
			if (bAudioByCamera)
			//	PlayerControl->SetAudioListenerOverride(GetCam360CaptureComp(), FVector(), FRotator());
			Capture2DView->TextureTarget = RenderTarget2D;
			break;
		}
		ResultTexture = RenderTarget2D;

		UAudioMixerBlueprintLibrary::StartRecordingOutput(GetWorld(), 10.f, SubmixToRecord);

		FileFormat = FileName + GetTimeNowFormatted();
		FileManager.CreateDirectoryTree(*(VideoCapDir + FileFormat + "/"));

		FrameOptions.Format = EDesiredImageFormat::JPG;
		if (bUseCompression)
			FrameOptions.CompressionQuality = CompressionQuality;

		if (bAudioByCamera)
			if (SelectCam == Camera2D)
				PlayerControl->SetAudioListenerOverride(GetPreviewCam(), FVector(), FRotator());
			else
				PlayerControl->SetAudioListenerOverride(GetCam360CaptureComp(), FVector(), FRotator());

		GetWorldTimerManager().SetTimer(FrameHandle, this, &ARecordCameraManager::CaptureFrame, GetTimeByFrameRate(), true, 0);

		bIsRecording = true;
		FMscLib::LogText("Started Capture", ELogVerbosity::Display);
		return true;
	}
	else
	{
		FMscLib::LogText("Unable to Start Capture", ELogVerbosity::Error);
		return false;
	}
}

bool ARecordCameraManager::PauseCapture()
{
	if (bIsRecording && !bIsPaused)
	{
		GetWorldTimerManager().ClearTimer(FrameHandle);
		UAudioMixerBlueprintLibrary::PauseRecordingOutput(GetWorld(), SubmixToRecord);

		bIsPaused = true;
		FMscLib::LogText("Paused Capture", ELogVerbosity::Error);
		return true;
	}
	else
	{
		FMscLib::LogText("Unable to Pause Capture", ELogVerbosity::Error);
		return false;
	}
}

bool ARecordCameraManager::ResumeCapture()
{
	if (bIsRecording && bIsPaused)
	{
		GetWorldTimerManager().SetTimer(FrameHandle, this, &ARecordCameraManager::CaptureFrame, GetTimeByFrameRate(), true, 0);
		UAudioMixerBlueprintLibrary::ResumeRecordingOutput(GetWorld(), SubmixToRecord);

		bIsPaused = false;
		FMscLib::LogText("Started Capture", ELogVerbosity::Error);
		return true;
	}
	else
	{
		FMscLib::LogText("Unable to Start Capture", ELogVerbosity::Error);
		return false;
	}
}

bool ARecordCameraManager::FinishCapture()
{
	if (bIsRecording)
	{
		FMscLib::LogText("Finalizing Capture", ELogVerbosity::Display);

		GetWorldTimerManager().ClearTimer(FrameHandle);
		UAudioMixerBlueprintLibrary::StopRecordingOutput(GetWorld(), EAudioRecordingExportType::WavFile, FileFormat, VideoCapDir, SubmixToRecord);
		if (bAudioByCamera)
		{
			UGameplayStatics::GetPlayerController(GetWorld(), 0)->ClearAudioListenerOverride();
		}
		SetupMergeInfo();
		ExecuteMerger();
		AddToRemoveList();

		bIsExporting = true;
		bIsRecording = false;
		bIsPaused = false;
		FrameCount = 0;

		return true;
	}
	else
	{
		FMscLib::LogText("Unable to Finish Capture", ELogVerbosity::Error);
		return false;
	}
}

void ARecordCameraManager::CaptureFrame()
{
	if (bIsRecording && !bIsPaused)
	{
		switch (SelectCam)
		{
		case Camera2D:
			check(GetCam2DCaptureComp());
			GetCam2DCaptureComp()->CaptureScene(); break;
		case Camera360:
			check(GetCam360CaptureComp());
			if (!SequenceRenderMode)
				GetCam360CaptureComp()->CaptureScene();
			Capture2DView->CaptureScene(); break;
		}

		UImageWriteBlueprintLibrary::ExportToDisk(ResultTexture, VideoCapDir + FileFormat + "/" + FString::FromInt(FrameCount) + ".jpg", FrameOptions);
		FrameCount++;
		TotalFrames = FrameCount;
	}
}

void ARecordCameraManager::AddCamera()
{
	const TSubclassOf<ASceneCapture> SelectedCam = (SelectCam == Camera2D) ? ACamera2D::StaticClass() : ACamera360::StaticClass();
	const FAttachmentTransformRules Rules{ EAttachmentRule::SnapToTarget, false };

	if (SelectCam == Camera2D)
	{
		ACamera2D* NewCam = GetWorld()->SpawnActor<ACamera2D>(SelectedCam, GetTransform());
		NewCam->AttachToActor(Cast<AActor>(this), Rules);
		AllCam2D.Add(NewCam);
	}
	else
	{
		ACamera360* NewCam = GetWorld()->SpawnActor<ACamera360>(SelectedCam, GetTransform());
		NewCam->AttachToActor(Cast<AActor>(this), Rules);
		AllCam360.Add(NewCam);
		if (RenderTarget360)
			NewCam->GetCaptureComponentCube()->TextureTarget = RenderTarget360;
	}
}

void ARecordCameraManager::RemoveCamera()
{
	if (CheckValidCam(Camera2D))
	{
		AllCam2D[CamID]->Destroy();
		AllCam2D.RemoveAt(CamID);
	}
	if (CheckValidCam(Camera360))
	{
		AllCam360[CamID]->Destroy();
		AllCam360.RemoveAt(CamID);
	}
}

void ARecordCameraManager::UpdatePreview()
{
	switch (SelectCam)
	{
	case Camera2D:
		if (SelectCam != LastCamType)
		{
			GetPreviewCam()->ProjectionMode = ECameraProjectionMode::Perspective;
			GetPreviewCam()->bConstrainAspectRatio = false;
			PlaneViewMesh->SetVisibility(false);
			AllCam360[CamID]->GetCaptureComponentCube()->bCaptureEveryFrame = false;
			AllCam360[LastCamID]->GetCaptureComponentCube()->bCaptureEveryFrame = false;

			RenderTarget360 = nullptr;
			for (ACamera360* Cam : AllCam360)
				Cam->GetCaptureComponentCube()->TextureTarget = nullptr;

			LastCamType = SelectCam;
		}
		if (CheckValidCam(Camera2D))
		{
			GetPreviewCam()->SetWorldTransform(AllCam2D[CamID]->GetTransform());

			if (CamID != LastCamID)
			{
				if (GetCam2DCaptureComp()->TextureTarget != RenderTarget2D && RenderTarget2D)
					GetCam2DCaptureComp()->TextureTarget = RenderTarget2D;

				LastCamID = CamID;
			}
		}
		break;
	case Camera360:
		SetupRenderTarget();
		if (SelectCam != LastCamType)
		{
			GetPreviewCam()->SetRelativeLocationAndRotation(FVector(0.f, 0.f, -50.f), FRotator(0.f, 0.f, 0.f));
			GetPreviewCam()->ProjectionMode = ECameraProjectionMode::Orthographic;
			GetPreviewCam()->bConstrainAspectRatio = true;
			PlaneViewMesh->SetVisibility(true);
			if (SequenceRenderMode)
				AllCam360[CamID]->GetCaptureComponentCube()->bCaptureEveryFrame = true;

			LastCamType = SelectCam;
		}
		if (CheckValidCam(Camera360))
		{
			if (GetCam360CaptureComp()->TextureTarget != RenderTarget360 && RenderTarget360)
				GetCam360CaptureComp()->TextureTarget = RenderTarget360;

			if (bAudioByCamera && PlayerControl)
				if (bIsRecording || PlayerControl->GetViewTarget() == this)
					PlayerControl->SetAudioListenerOverride(GetCam360CaptureComp(), FVector(), FRotator());

			if (bIsPreview && RenderTarget360)
				GetCam360CaptureComp()->CaptureScene();

			if (CamID != LastCamID)
			{
				if (AllCam360.IsValidIndex(LastCamID) && IsValid(AllCam360[LastCamID]))
					AllCam360[LastCamID]->GetCaptureComponentCube()->bCaptureEveryFrame = false;
				if (SequenceRenderMode)
					AllCam360[CamID]->GetCaptureComponentCube()->bCaptureEveryFrame = true;

				LastCamID = CamID;
			}
		}
		break;
	default: break;
	}
}

void ARecordCameraManager::SetupRenderTarget()
{
	if (GetWorld() && SelectCam == 1)
	{
		if (!RenderTarget360)
		{
			RenderTarget360 = NewObject<UTextureRenderTargetCube>(GetWorld());
			RenderTarget360->InitAutoFormat(Resolution.ResY);
			RenderTarget360->bHDR = false;
		}
		else if (RenderTarget360->SizeX != Resolution.ResY && Resolution.ResY != 0)
			RenderTarget360->InitAutoFormat(Resolution.ResY);
		if (!PlaneDyMat)
		{
			PlaneDyMat = UMaterialInstanceDynamic::Create(Flat360Material, this);
			PlaneViewMesh->SetMaterial(0, PlaneDyMat);
		}
		PlaneDyMat->SetTextureParameterValue(TEXT("CamView"), RenderTarget360);

	}
}

bool ARecordCameraManager::CheckValidCam(ECameraType CamType)
{
	if (SelectCam == CamType)
	{
		if (SelectCam == 0)
			return AllCam2D.IsValidIndex(CamID) && IsValid(AllCam2D[CamID]);
		else
			return AllCam360.IsValidIndex(CamID) && IsValid(AllCam360[CamID]);
	}
	else
		return false;
}

bool ARecordCameraManager::SetCameraRecordingSettings(
	FRecordingSettings Settings,
	FCaptureResolution InResolution,
	ECameraType InCameraType,
	bool bInAudioByCam,
	bool InSequenceMode)
{
	if (!bIsRecording && !bIsExporting)
	{
		FileName = Settings.FileName;
		FrameRate = Settings.FrameRate;
		OutputDirectory = Settings.OutputDirectory;
		SubmixToRecord = Settings.SubmixToRecord;
		OutputFormat = Settings.OutputFormat;
		CompressionSpeed = Settings.CompressionSpeed;
		CompressionQuality = Settings.CompressionQuality;

		Resolution = InResolution;
		SelectCam = InCameraType;
		bAudioByCamera = bInAudioByCam;
		SequenceRenderMode = InSequenceMode;

		if (SequenceRenderMode && SelectCam == 1)
			AllCam360[CamID]->GetCaptureComponentCube()->bCaptureEveryFrame = true;
		else
			for (ACamera360* Cam : AllCam360)
				Cam->GetCaptureComponentCube()->bCaptureEveryFrame = false;
		return true;
	}
	return false;
}


ACamera2D::ACamera2D()
{
	PreviewCam = CreateDefaultSubobject<UCameraComponent>("Preview");
	PreviewCam->SetupAttachment(RootComponent);

	GetCaptureComponent2D()->CaptureSource = SCS_SceneColorSceneDepth;
	GetCaptureComponent2D()->bCaptureEveryFrame = false;
	GetCaptureComponent2D()->bCaptureOnMovement = false;
}

ACamera360::ACamera360()
{
	PreviewCam = CreateDefaultSubobject<UCameraComponent>("Preview");
	PreviewCam->SetupAttachment(RootComponent);

	GetCaptureComponentCube()->CaptureSource = SCS_SceneColorSceneDepth;
	GetCaptureComponentCube()->bCaptureEveryFrame = false;
	GetCaptureComponentCube()->bCaptureOnMovement = false;
	GetCaptureComponentCube()->bCaptureRotation = true;
}


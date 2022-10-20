// Copyright 2022 Michel Brito.

#pragma once

#include "BaseRecord.h"
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Engine/SceneCapture2D.h"
#include "Engine/SceneCaptureCube.h"
#include "Engine/TextureRenderTargetCube.h"
#include "MovieSceneCaptureSettings.h"
#include "Components/SceneCaptureComponent2D.h"
#include "ImageWriteBlueprintLibrary.h"
#include "GameFramework/Actor.h"
#include "RecordCameraManager.generated.h"

UENUM()
enum ECameraType
{
	Camera2D,
	Camera360
};

UCLASS()
class MSC_RECORD_API ACamera2D : public ASceneCapture2D
{
	GENERATED_BODY()

	ACamera2D();

	UPROPERTY(VisibleAnywhere, Category = "Camera Manager")
		UCameraComponent* PreviewCam;
};

UCLASS()
class MSC_RECORD_API ACamera360 : public ASceneCaptureCube
{
	GENERATED_BODY()

	ACamera360();

	UPROPERTY(VisibleAnywhere, Category = "Camera Manager")
		UCameraComponent* PreviewCam;
};

UCLASS()
class MSC_RECORD_API ARecordCameraManager : public ABaseRecord
{
	GENERATED_BODY()
	
public:	

	ARecordCameraManager();

	UPROPERTY(EditDefaultsOnly, Category = "Camera Manager")
		UBillboardComponent* BillboardRoot;
	UPROPERTY(EditDefaultsOnly, Category = "Camera Manager")
		UCameraComponent* PreviewCam;
	UFUNCTION(BlueprintPure, Category = "Camera Manager")
		FORCEINLINE UCameraComponent* GetPreviewCam() const { return PreviewCam; }
	UPROPERTY(EditDefaultsOnly, Category = "Camera Manager")
		UStaticMeshComponent* PlaneViewMesh;
	UPROPERTY(EditDefaultsOnly, Category = "Camera Manager")
		USceneCaptureComponent2D* Capture2DView;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MSC Recording")
		FCaptureResolution Resolution = FCaptureResolution(1280, 720);
	//Causes the audio to be captured according to the selected camera
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MSC Recording")
		bool bAudioByCamera;


protected:

	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY()
		UTexture* ResultTexture;
	UPROPERTY()
		UTextureRenderTarget2D* RenderTarget2D;
	UPROPERTY()
		UTextureRenderTargetCube* RenderTarget360;
	UPROPERTY()
		UMaterialInstanceDynamic* PlaneDyMat;
	UPROPERTY(EditDefaultsOnly, Category = "Camera Manager")
		UMaterialInstance* Flat360Material;
	UPROPERTY()
		int FrameCount = 0;

	FTimerHandle FrameHandle;
	FImageWriteOptions FrameOptions;

public:	

	virtual void Tick(float DeltaTime) override;

	//Start Capture
	bool StartCapture() override;
	//Pause Capture
	bool PauseCapture() override;
	//Resume Capture
	bool ResumeCapture() override;
	//Finish Capture
	bool FinishCapture() override;
	void CaptureFrame();

	UFUNCTION(CallInEditor, Category = "Camera Manager")
		void AddCamera();
	UFUNCTION(CallInEditor, Category = "Camera Manager")
		void RemoveCamera();
	UFUNCTION(BlueprintCallable, Category = "Camera Manager")
		void UpdatePreview();
	UFUNCTION()
		void SetupRenderTarget();
	UFUNCTION()
		bool CheckValidCam(ECameraType CamType);

	UFUNCTION(BlueprintPure, Category = "Camera Manager")
		FORCEINLINE USceneCaptureComponent2D* GetCam2DCaptureComp() const { return AllCam2D[CamID]->GetCaptureComponent2D(); }
	UFUNCTION(BlueprintPure, Category = "Camera Manager")
		FORCEINLINE USceneCaptureComponentCube* GetCam360CaptureComp() const { return AllCam360[CamID]->GetCaptureComponentCube(); }
	UFUNCTION(BlueprintPure, Category = "Camera Manager")
		FORCEINLINE UTexture* GetCameraViewTexture() const { return ResultTexture; }

	UFUNCTION(BlueprintCallable, Category = "MSC Recording")
		bool SetCameraRecordingSettings(
			FRecordingSettings Settings,
			FCaptureResolution InResolution,
			ECameraType InCameraType,
			bool bInAudioByCam = false,
			bool InSequenceMode = false);

public:
	
	//Camera mode for recording.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Camera Manager")
		TEnumAsByte<ECameraType> SelectCam;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Camera Manager", meta=(EditCondition = "SelectCam == 0"))
		TArray<ACamera2D*> AllCam2D;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Camera Manager", meta=(EditCondition = "SelectCam == 1"))
		TArray<ACamera360*> AllCam360;
	//Index used to select the corresponding camera view.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, Category = "Camera Manager")
		int CamID;
	//Set to true if you want to generate a render by sequence.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Camera Manager", meta = (EditCondition = "SelectCam == 1"))
		bool SequenceRenderMode;
	UPROPERTY()
		int LastCamID;
	UPROPERTY()
		TEnumAsByte<ECameraType> LastCamType;
	UPROPERTY()
		bool bIsPreview = true;

	UPROPERTY()
		class APlayerController* PlayerControl;

};
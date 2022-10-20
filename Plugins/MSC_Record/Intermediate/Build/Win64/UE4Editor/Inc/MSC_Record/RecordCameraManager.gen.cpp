// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MSC_Record/Public/RecordCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecordCameraManager() {}
// Cross Module References
	MSC_RECORD_API UEnum* Z_Construct_UEnum_MSC_Record_ECameraType();
	UPackage* Z_Construct_UPackage__Script_MSC_Record();
	MSC_RECORD_API UClass* Z_Construct_UClass_ACamera2D_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_ACamera2D();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_ACamera360_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_ACamera360();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCaptureCube();
	MSC_RECORD_API UClass* Z_Construct_UClass_ARecordCameraManager_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_ARecordCameraManager();
	MSC_RECORD_API UClass* Z_Construct_UClass_ABaseRecord();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponentCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	MSC_RECORD_API UScriptStruct* Z_Construct_UScriptStruct_FRecordingSettings();
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FCaptureResolution();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	static UEnum* ECameraType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MSC_Record_ECameraType, Z_Construct_UPackage__Script_MSC_Record(), TEXT("ECameraType"));
		}
		return Singleton;
	}
	template<> MSC_RECORD_API UEnum* StaticEnum<ECameraType>()
	{
		return ECameraType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraType(ECameraType_StaticEnum, TEXT("/Script/MSC_Record"), TEXT("ECameraType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MSC_Record_ECameraType_Hash() { return 2449436330U; }
	UEnum* Z_Construct_UEnum_MSC_Record_ECameraType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MSC_Record();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraType"), 0, Get_Z_Construct_UEnum_MSC_Record_ECameraType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Camera2D", (int64)Camera2D },
				{ "Camera360", (int64)Camera360 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Camera2D.Name", "Camera2D" },
				{ "Camera360.Name", "Camera360" },
				{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MSC_Record,
				nullptr,
				"ECameraType",
				"ECameraType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ACamera2D::StaticRegisterNativesACamera2D()
	{
	}
	UClass* Z_Construct_UClass_ACamera2D_NoRegister()
	{
		return ACamera2D::StaticClass();
	}
	struct Z_Construct_UClass_ACamera2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewCam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewCam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACamera2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASceneCapture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_MSC_Record,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera2D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "RecordCameraManager.h" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera2D_Statics::NewProp_PreviewCam_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera2D_Statics::NewProp_PreviewCam = { "PreviewCam", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamera2D, PreviewCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamera2D_Statics::NewProp_PreviewCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamera2D_Statics::NewProp_PreviewCam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACamera2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera2D_Statics::NewProp_PreviewCam,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACamera2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACamera2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACamera2D_Statics::ClassParams = {
		&ACamera2D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACamera2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACamera2D_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACamera2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACamera2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACamera2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACamera2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACamera2D, 1154392220);
	template<> MSC_RECORD_API UClass* StaticClass<ACamera2D>()
	{
		return ACamera2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACamera2D(Z_Construct_UClass_ACamera2D, &ACamera2D::StaticClass, TEXT("/Script/MSC_Record"), TEXT("ACamera2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACamera2D);
	void ACamera360::StaticRegisterNativesACamera360()
	{
	}
	UClass* Z_Construct_UClass_ACamera360_NoRegister()
	{
		return ACamera360::StaticClass();
	}
	struct Z_Construct_UClass_ACamera360_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewCam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewCam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACamera360_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASceneCaptureCube,
		(UObject* (*)())Z_Construct_UPackage__Script_MSC_Record,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera360_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "RecordCameraManager.h" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamera360_Statics::NewProp_PreviewCam_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACamera360_Statics::NewProp_PreviewCam = { "PreviewCam", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamera360, PreviewCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACamera360_Statics::NewProp_PreviewCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamera360_Statics::NewProp_PreviewCam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACamera360_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamera360_Statics::NewProp_PreviewCam,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACamera360_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACamera360>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACamera360_Statics::ClassParams = {
		&ACamera360::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACamera360_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACamera360_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACamera360_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACamera360_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACamera360()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACamera360_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACamera360, 3172193746);
	template<> MSC_RECORD_API UClass* StaticClass<ACamera360>()
	{
		return ACamera360::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACamera360(Z_Construct_UClass_ACamera360, &ACamera360::StaticClass, TEXT("/Script/MSC_Record"), TEXT("ACamera360"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACamera360);
	DEFINE_FUNCTION(ARecordCameraManager::execSetCameraRecordingSettings)
	{
		P_GET_STRUCT(FRecordingSettings,Z_Param_Settings);
		P_GET_STRUCT(FCaptureResolution,Z_Param_InResolution);
		P_GET_PROPERTY(FByteProperty,Z_Param_InCameraType);
		P_GET_UBOOL(Z_Param_bInAudioByCam);
		P_GET_UBOOL(Z_Param_InSequenceMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCameraRecordingSettings(Z_Param_Settings,Z_Param_InResolution,ECameraType(Z_Param_InCameraType),Z_Param_bInAudioByCam,Z_Param_InSequenceMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARecordCameraManager::execGetCameraViewTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GetCameraViewTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARecordCameraManager::execGetCam360CaptureComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneCaptureComponentCube**)Z_Param__Result=P_THIS->GetCam360CaptureComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARecordCameraManager::execGetCam2DCaptureComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneCaptureComponent2D**)Z_Param__Result=P_THIS->GetCam2DCaptureComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARecordCameraManager::execCheckValidCam)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_CamType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckValidCam(ECameraType(Z_Param_CamType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARecordCameraManager::execSetupRenderTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupRenderTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARecordCameraManager::execUpdatePreview)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePreview();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARecordCameraManager::execRemoveCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARecordCameraManager::execAddCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARecordCameraManager::execGetPreviewCam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetPreviewCam();
		P_NATIVE_END;
	}
	void ARecordCameraManager::StaticRegisterNativesARecordCameraManager()
	{
		UClass* Class = ARecordCameraManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCamera", &ARecordCameraManager::execAddCamera },
			{ "CheckValidCam", &ARecordCameraManager::execCheckValidCam },
			{ "GetCam2DCaptureComp", &ARecordCameraManager::execGetCam2DCaptureComp },
			{ "GetCam360CaptureComp", &ARecordCameraManager::execGetCam360CaptureComp },
			{ "GetCameraViewTexture", &ARecordCameraManager::execGetCameraViewTexture },
			{ "GetPreviewCam", &ARecordCameraManager::execGetPreviewCam },
			{ "RemoveCamera", &ARecordCameraManager::execRemoveCamera },
			{ "SetCameraRecordingSettings", &ARecordCameraManager::execSetCameraRecordingSettings },
			{ "SetupRenderTarget", &ARecordCameraManager::execSetupRenderTarget },
			{ "UpdatePreview", &ARecordCameraManager::execUpdatePreview },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARecordCameraManager_AddCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordCameraManager_AddCamera_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Camera Manager" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecordCameraManager_AddCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecordCameraManager, nullptr, "AddCamera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecordCameraManager_AddCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_AddCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecordCameraManager_AddCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARecordCameraManager_AddCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARecordCameraManager_CheckValidCam_Statics
	{
		struct RecordCameraManager_eventCheckValidCam_Parms
		{
			TEnumAsByte<ECameraType> CamType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CamType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARecordCameraManager_CheckValidCam_Statics::NewProp_CamType = { "CamType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordCameraManager_eventCheckValidCam_Parms, CamType), Z_Construct_UEnum_MSC_Record_ECameraType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARecordCameraManager_CheckValidCam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RecordCameraManager_eventCheckValidCam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecordCameraManager_CheckValidCam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RecordCameraManager_eventCheckValidCam_Parms), &Z_Construct_UFunction_ARecordCameraManager_CheckValidCam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARecordCameraManager_CheckValidCam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordCameraManager_CheckValidCam_Statics::NewProp_CamType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordCameraManager_CheckValidCam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordCameraManager_CheckValidCam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecordCameraManager_CheckValidCam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecordCameraManager, nullptr, "CheckValidCam", nullptr, nullptr, sizeof(RecordCameraManager_eventCheckValidCam_Parms), Z_Construct_UFunction_ARecordCameraManager_CheckValidCam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_CheckValidCam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecordCameraManager_CheckValidCam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_CheckValidCam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecordCameraManager_CheckValidCam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARecordCameraManager_CheckValidCam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARecordCameraManager_GetCam2DCaptureComp_Statics
	{
		struct RecordCameraManager_eventGetCam2DCaptureComp_Parms
		{
			USceneCaptureComponent2D* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordCameraManager_GetCam2DCaptureComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARecordCameraManager_GetCam2DCaptureComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordCameraManager_eventGetCam2DCaptureComp_Parms, ReturnValue), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARecordCameraManager_GetCam2DCaptureComp_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_GetCam2DCaptureComp_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARecordCameraManager_GetCam2DCaptureComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordCameraManager_GetCam2DCaptureComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordCameraManager_GetCam2DCaptureComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Manager" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecordCameraManager_GetCam2DCaptureComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecordCameraManager, nullptr, "GetCam2DCaptureComp", nullptr, nullptr, sizeof(RecordCameraManager_eventGetCam2DCaptureComp_Parms), Z_Construct_UFunction_ARecordCameraManager_GetCam2DCaptureComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_GetCam2DCaptureComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecordCameraManager_GetCam2DCaptureComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_GetCam2DCaptureComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecordCameraManager_GetCam2DCaptureComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARecordCameraManager_GetCam2DCaptureComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARecordCameraManager_GetCam360CaptureComp_Statics
	{
		struct RecordCameraManager_eventGetCam360CaptureComp_Parms
		{
			USceneCaptureComponentCube* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordCameraManager_GetCam360CaptureComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARecordCameraManager_GetCam360CaptureComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordCameraManager_eventGetCam360CaptureComp_Parms, ReturnValue), Z_Construct_UClass_USceneCaptureComponentCube_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARecordCameraManager_GetCam360CaptureComp_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_GetCam360CaptureComp_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARecordCameraManager_GetCam360CaptureComp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordCameraManager_GetCam360CaptureComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordCameraManager_GetCam360CaptureComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Manager" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecordCameraManager_GetCam360CaptureComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecordCameraManager, nullptr, "GetCam360CaptureComp", nullptr, nullptr, sizeof(RecordCameraManager_eventGetCam360CaptureComp_Parms), Z_Construct_UFunction_ARecordCameraManager_GetCam360CaptureComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_GetCam360CaptureComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecordCameraManager_GetCam360CaptureComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_GetCam360CaptureComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecordCameraManager_GetCam360CaptureComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARecordCameraManager_GetCam360CaptureComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARecordCameraManager_GetCameraViewTexture_Statics
	{
		struct RecordCameraManager_eventGetCameraViewTexture_Parms
		{
			UTexture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARecordCameraManager_GetCameraViewTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordCameraManager_eventGetCameraViewTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARecordCameraManager_GetCameraViewTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordCameraManager_GetCameraViewTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordCameraManager_GetCameraViewTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Manager" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecordCameraManager_GetCameraViewTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecordCameraManager, nullptr, "GetCameraViewTexture", nullptr, nullptr, sizeof(RecordCameraManager_eventGetCameraViewTexture_Parms), Z_Construct_UFunction_ARecordCameraManager_GetCameraViewTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_GetCameraViewTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecordCameraManager_GetCameraViewTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_GetCameraViewTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecordCameraManager_GetCameraViewTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARecordCameraManager_GetCameraViewTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARecordCameraManager_GetPreviewCam_Statics
	{
		struct RecordCameraManager_eventGetPreviewCam_Parms
		{
			UCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordCameraManager_GetPreviewCam_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARecordCameraManager_GetPreviewCam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordCameraManager_eventGetPreviewCam_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARecordCameraManager_GetPreviewCam_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_GetPreviewCam_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARecordCameraManager_GetPreviewCam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordCameraManager_GetPreviewCam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordCameraManager_GetPreviewCam_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Manager" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecordCameraManager_GetPreviewCam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecordCameraManager, nullptr, "GetPreviewCam", nullptr, nullptr, sizeof(RecordCameraManager_eventGetPreviewCam_Parms), Z_Construct_UFunction_ARecordCameraManager_GetPreviewCam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_GetPreviewCam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecordCameraManager_GetPreviewCam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_GetPreviewCam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecordCameraManager_GetPreviewCam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARecordCameraManager_GetPreviewCam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARecordCameraManager_RemoveCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordCameraManager_RemoveCamera_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Camera Manager" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecordCameraManager_RemoveCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecordCameraManager, nullptr, "RemoveCamera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecordCameraManager_RemoveCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_RemoveCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecordCameraManager_RemoveCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARecordCameraManager_RemoveCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics
	{
		struct RecordCameraManager_eventSetCameraRecordingSettings_Parms
		{
			FRecordingSettings Settings;
			FCaptureResolution InResolution;
			TEnumAsByte<ECameraType> InCameraType;
			bool bInAudioByCam;
			bool InSequenceMode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InResolution;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCameraType;
		static void NewProp_bInAudioByCam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAudioByCam;
		static void NewProp_InSequenceMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InSequenceMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordCameraManager_eventSetCameraRecordingSettings_Parms, Settings), Z_Construct_UScriptStruct_FRecordingSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_InResolution = { "InResolution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordCameraManager_eventSetCameraRecordingSettings_Parms, InResolution), Z_Construct_UScriptStruct_FCaptureResolution, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_InCameraType = { "InCameraType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordCameraManager_eventSetCameraRecordingSettings_Parms, InCameraType), Z_Construct_UEnum_MSC_Record_ECameraType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_bInAudioByCam_SetBit(void* Obj)
	{
		((RecordCameraManager_eventSetCameraRecordingSettings_Parms*)Obj)->bInAudioByCam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_bInAudioByCam = { "bInAudioByCam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RecordCameraManager_eventSetCameraRecordingSettings_Parms), &Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_bInAudioByCam_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_InSequenceMode_SetBit(void* Obj)
	{
		((RecordCameraManager_eventSetCameraRecordingSettings_Parms*)Obj)->InSequenceMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_InSequenceMode = { "InSequenceMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RecordCameraManager_eventSetCameraRecordingSettings_Parms), &Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_InSequenceMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RecordCameraManager_eventSetCameraRecordingSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RecordCameraManager_eventSetCameraRecordingSettings_Parms), &Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_InResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_InCameraType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_bInAudioByCam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_InSequenceMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "CPP_Default_bInAudioByCam", "false" },
		{ "CPP_Default_InSequenceMode", "false" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecordCameraManager, nullptr, "SetCameraRecordingSettings", nullptr, nullptr, sizeof(RecordCameraManager_eventSetCameraRecordingSettings_Parms), Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARecordCameraManager_SetupRenderTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordCameraManager_SetupRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecordCameraManager_SetupRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecordCameraManager, nullptr, "SetupRenderTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecordCameraManager_SetupRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_SetupRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecordCameraManager_SetupRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARecordCameraManager_SetupRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARecordCameraManager_UpdatePreview_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordCameraManager_UpdatePreview_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Manager" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecordCameraManager_UpdatePreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecordCameraManager, nullptr, "UpdatePreview", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecordCameraManager_UpdatePreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordCameraManager_UpdatePreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecordCameraManager_UpdatePreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARecordCameraManager_UpdatePreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARecordCameraManager_NoRegister()
	{
		return ARecordCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ARecordCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BillboardRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewCam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewCam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneViewMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneViewMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capture2DView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Capture2DView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAudioByCamera_MetaData[];
#endif
		static void NewProp_bAudioByCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAudioByCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTarget2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTarget360_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget360;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneDyMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneDyMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flat360Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Flat360Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectCam_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectCam;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllCam2D_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllCam2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllCam2D;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllCam360_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllCam360_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllCam360;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceRenderMode_MetaData[];
#endif
		static void NewProp_SequenceRenderMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SequenceRenderMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastCamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LastCamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastCamType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastCamType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPreview_MetaData[];
#endif
		static void NewProp_bIsPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerControl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARecordCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseRecord,
		(UObject* (*)())Z_Construct_UPackage__Script_MSC_Record,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARecordCameraManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARecordCameraManager_AddCamera, "AddCamera" }, // 767489551
		{ &Z_Construct_UFunction_ARecordCameraManager_CheckValidCam, "CheckValidCam" }, // 922238718
		{ &Z_Construct_UFunction_ARecordCameraManager_GetCam2DCaptureComp, "GetCam2DCaptureComp" }, // 615917143
		{ &Z_Construct_UFunction_ARecordCameraManager_GetCam360CaptureComp, "GetCam360CaptureComp" }, // 3315412153
		{ &Z_Construct_UFunction_ARecordCameraManager_GetCameraViewTexture, "GetCameraViewTexture" }, // 2894012971
		{ &Z_Construct_UFunction_ARecordCameraManager_GetPreviewCam, "GetPreviewCam" }, // 3928783838
		{ &Z_Construct_UFunction_ARecordCameraManager_RemoveCamera, "RemoveCamera" }, // 2777617317
		{ &Z_Construct_UFunction_ARecordCameraManager_SetCameraRecordingSettings, "SetCameraRecordingSettings" }, // 411309436
		{ &Z_Construct_UFunction_ARecordCameraManager_SetupRenderTarget, "SetupRenderTarget" }, // 576442237
		{ &Z_Construct_UFunction_ARecordCameraManager_UpdatePreview, "UpdatePreview" }, // 2404290323
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RecordCameraManager.h" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_BillboardRoot_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_BillboardRoot = { "BillboardRoot", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, BillboardRoot), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_BillboardRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_BillboardRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PreviewCam_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PreviewCam = { "PreviewCam", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, PreviewCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PreviewCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PreviewCam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PlaneViewMesh_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PlaneViewMesh = { "PlaneViewMesh", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, PlaneViewMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PlaneViewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PlaneViewMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_Capture2DView_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_Capture2DView = { "Capture2DView", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, Capture2DView), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_Capture2DView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_Capture2DView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, Resolution), Z_Construct_UScriptStruct_FCaptureResolution, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_bAudioByCamera_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Causes the audio to be captured according to the selected camera\n" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
		{ "ToolTip", "Causes the audio to be captured according to the selected camera" },
	};
#endif
	void Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_bAudioByCamera_SetBit(void* Obj)
	{
		((ARecordCameraManager*)Obj)->bAudioByCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_bAudioByCamera = { "bAudioByCamera", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARecordCameraManager), &Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_bAudioByCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_bAudioByCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_bAudioByCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_ResultTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_ResultTexture = { "ResultTexture", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, ResultTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_ResultTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_ResultTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_RenderTarget2D_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_RenderTarget2D = { "RenderTarget2D", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, RenderTarget2D), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_RenderTarget2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_RenderTarget2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_RenderTarget360_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_RenderTarget360 = { "RenderTarget360", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, RenderTarget360), Z_Construct_UClass_UTextureRenderTargetCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_RenderTarget360_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_RenderTarget360_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PlaneDyMat_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PlaneDyMat = { "PlaneDyMat", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, PlaneDyMat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PlaneDyMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PlaneDyMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_Flat360Material_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_Flat360Material = { "Flat360Material", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, Flat360Material), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_Flat360Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_Flat360Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_FrameCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_FrameCount = { "FrameCount", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, FrameCount), METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_FrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_FrameCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_SelectCam_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "Comment", "//Camera mode for recording.\n" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
		{ "ToolTip", "Camera mode for recording." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_SelectCam = { "SelectCam", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, SelectCam), Z_Construct_UEnum_MSC_Record_ECameraType, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_SelectCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_SelectCam_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_AllCam2D_Inner = { "AllCam2D", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamera2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_AllCam2D_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "EditCondition", "SelectCam == 0" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_AllCam2D = { "AllCam2D", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, AllCam2D), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_AllCam2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_AllCam2D_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_AllCam360_Inner = { "AllCam360", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamera360_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_AllCam360_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "EditCondition", "SelectCam == 1" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_AllCam360 = { "AllCam360", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, AllCam360), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_AllCam360_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_AllCam360_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_CamID_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "Comment", "//Index used to select the corresponding camera view.\n" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
		{ "ToolTip", "Index used to select the corresponding camera view." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_CamID = { "CamID", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, CamID), METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_CamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_CamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_SequenceRenderMode_MetaData[] = {
		{ "Category", "Camera Manager" },
		{ "Comment", "//Set to true if you want to generate a render by sequence.\n" },
		{ "EditCondition", "SelectCam == 1" },
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
		{ "ToolTip", "Set to true if you want to generate a render by sequence." },
	};
#endif
	void Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_SequenceRenderMode_SetBit(void* Obj)
	{
		((ARecordCameraManager*)Obj)->SequenceRenderMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_SequenceRenderMode = { "SequenceRenderMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARecordCameraManager), &Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_SequenceRenderMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_SequenceRenderMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_SequenceRenderMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_LastCamID_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_LastCamID = { "LastCamID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, LastCamID), METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_LastCamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_LastCamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_LastCamType_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_LastCamType = { "LastCamType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, LastCamType), Z_Construct_UEnum_MSC_Record_ECameraType, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_LastCamType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_LastCamType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_bIsPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	void Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_bIsPreview_SetBit(void* Obj)
	{
		((ARecordCameraManager*)Obj)->bIsPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_bIsPreview = { "bIsPreview", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARecordCameraManager), &Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_bIsPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_bIsPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_bIsPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PlayerControl_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PlayerControl = { "PlayerControl", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordCameraManager, PlayerControl), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PlayerControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PlayerControl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARecordCameraManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_BillboardRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PreviewCam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PlaneViewMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_Capture2DView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_Resolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_bAudioByCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_ResultTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_RenderTarget2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_RenderTarget360,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PlaneDyMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_Flat360Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_FrameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_SelectCam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_AllCam2D_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_AllCam2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_AllCam360_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_AllCam360,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_CamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_SequenceRenderMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_LastCamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_LastCamType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_bIsPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordCameraManager_Statics::NewProp_PlayerControl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARecordCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARecordCameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARecordCameraManager_Statics::ClassParams = {
		&ARecordCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARecordCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARecordCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARecordCameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARecordCameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARecordCameraManager, 29181101);
	template<> MSC_RECORD_API UClass* StaticClass<ARecordCameraManager>()
	{
		return ARecordCameraManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARecordCameraManager(Z_Construct_UClass_ARecordCameraManager, &ARecordCameraManager::StaticClass, TEXT("/Script/MSC_Record"), TEXT("ARecordCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARecordCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

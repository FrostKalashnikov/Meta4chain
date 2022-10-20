// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MSC_Record/Public/RecordActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecordActor() {}
// Cross Module References
	MSC_RECORD_API UClass* Z_Construct_UClass_ARecordActor_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_ARecordActor();
	MSC_RECORD_API UClass* Z_Construct_UClass_ABaseRecord();
	UPackage* Z_Construct_UPackage__Script_MSC_Record();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	MSC_RECORD_API UEnum* Z_Construct_UEnum_MSC_Record_EExportFormats();
	MSC_RECORD_API UEnum* Z_Construct_UEnum_MSC_Record_ECompressSpeed();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	MSC_RECORD_API UScriptStruct* Z_Construct_UScriptStruct_FRecordingSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCapture_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_PreviewRecorder_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_AudioCaptureProtocol_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_VideoCaptureProtocol_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARecordActor::execSetScreenRecordingSettings)
	{
		P_GET_STRUCT(FRecordingSettings,Z_Param_Settings);
		P_GET_UBOOL(Z_Param_bInSeparateAudVid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetScreenRecordingSettings(Z_Param_Settings,Z_Param_bInSeparateAudVid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARecordActor::execSetRecordingSettings)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileName);
		P_GET_STRUCT(FFrameRate,Z_Param_InFrameRate);
		P_GET_STRUCT(FDirectoryPath,Z_Param_InOutputPath);
		P_GET_UBOOL(Z_Param_InUseCompression);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InCompressionQuality);
		P_GET_UBOOL(Z_Param_InSeparateAudioVideo);
		P_GET_PROPERTY(FByteProperty,Z_Param_InOutputFormat);
		P_GET_PROPERTY(FByteProperty,Z_Param_InCompressSpeedPreset);
		P_GET_OBJECT(USoundSubmix,Z_Param_InSubmixToRecord);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRecordingSettings(Z_Param_InFileName,Z_Param_InFrameRate,Z_Param_InOutputPath,Z_Param_InUseCompression,Z_Param_InCompressionQuality,Z_Param_InSeparateAudioVideo,EExportFormats(Z_Param_InOutputFormat),ECompressSpeed(Z_Param_InCompressSpeedPreset),Z_Param_InSubmixToRecord);
		P_NATIVE_END;
	}
	void ARecordActor::StaticRegisterNativesARecordActor()
	{
		UClass* Class = ARecordActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetRecordingSettings", &ARecordActor::execSetRecordingSettings },
			{ "SetScreenRecordingSettings", &ARecordActor::execSetScreenRecordingSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct RecordActor_eventSetRecordingSettings_Parms
		{
			FString InFileName;
			FFrameRate InFrameRate;
			FDirectoryPath InOutputPath;
			bool InUseCompression;
			float InCompressionQuality;
			bool InSeparateAudioVideo;
			TEnumAsByte<EExportFormats> InOutputFormat;
			TEnumAsByte<ECompressSpeed> InCompressSpeedPreset;
			USoundSubmix* InSubmixToRecord;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFileName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFrameRate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOutputPath;
		static void NewProp_InUseCompression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InUseCompression;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InCompressionQuality;
		static void NewProp_InSeparateAudioVideo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InSeparateAudioVideo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InOutputFormat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCompressSpeedPreset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSubmixToRecord;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InFileName = { "InFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordActor_eventSetRecordingSettings_Parms, InFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InFrameRate = { "InFrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordActor_eventSetRecordingSettings_Parms, InFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InOutputPath = { "InOutputPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordActor_eventSetRecordingSettings_Parms, InOutputPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InUseCompression_SetBit(void* Obj)
	{
		((RecordActor_eventSetRecordingSettings_Parms*)Obj)->InUseCompression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InUseCompression = { "InUseCompression", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RecordActor_eventSetRecordingSettings_Parms), &Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InUseCompression_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InCompressionQuality = { "InCompressionQuality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordActor_eventSetRecordingSettings_Parms, InCompressionQuality), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InSeparateAudioVideo_SetBit(void* Obj)
	{
		((RecordActor_eventSetRecordingSettings_Parms*)Obj)->InSeparateAudioVideo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InSeparateAudioVideo = { "InSeparateAudioVideo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RecordActor_eventSetRecordingSettings_Parms), &Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InSeparateAudioVideo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InOutputFormat = { "InOutputFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordActor_eventSetRecordingSettings_Parms, InOutputFormat), Z_Construct_UEnum_MSC_Record_EExportFormats, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InCompressSpeedPreset = { "InCompressSpeedPreset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordActor_eventSetRecordingSettings_Parms, InCompressSpeedPreset), Z_Construct_UEnum_MSC_Record_ECompressSpeed, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InSubmixToRecord = { "InSubmixToRecord", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordActor_eventSetRecordingSettings_Parms, InSubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RecordActor_eventSetRecordingSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RecordActor_eventSetRecordingSettings_Parms), &Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InFrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InOutputPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InUseCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InCompressionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InSeparateAudioVideo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InOutputFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InCompressSpeedPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_InSubmixToRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "CPP_Default_InCompressionQuality", "75.000000" },
		{ "CPP_Default_InCompressSpeedPreset", "Medium" },
		{ "CPP_Default_InOutputFormat", "MP4" },
		{ "CPP_Default_InSeparateAudioVideo", "false" },
		{ "CPP_Default_InSubmixToRecord", "None" },
		{ "CPP_Default_InUseCompression", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Function has been deprecated" },
		{ "ModuleRelativePath", "Public/RecordActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecordActor, nullptr, "SetRecordingSettings", nullptr, nullptr, sizeof(RecordActor_eventSetRecordingSettings_Parms), Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecordActor_SetRecordingSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARecordActor_SetRecordingSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics
	{
		struct RecordActor_eventSetScreenRecordingSettings_Parms
		{
			FRecordingSettings Settings;
			bool bInSeparateAudVid;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static void NewProp_bInSeparateAudVid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInSeparateAudVid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordActor_eventSetScreenRecordingSettings_Parms, Settings), Z_Construct_UScriptStruct_FRecordingSettings, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_bInSeparateAudVid_SetBit(void* Obj)
	{
		((RecordActor_eventSetScreenRecordingSettings_Parms*)Obj)->bInSeparateAudVid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_bInSeparateAudVid = { "bInSeparateAudVid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RecordActor_eventSetScreenRecordingSettings_Parms), &Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_bInSeparateAudVid_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RecordActor_eventSetScreenRecordingSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RecordActor_eventSetScreenRecordingSettings_Parms), &Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_bInSeparateAudVid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "CPP_Default_bInSeparateAudVid", "false" },
		{ "ModuleRelativePath", "Public/RecordActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecordActor, nullptr, "SetScreenRecordingSettings", nullptr, nullptr, sizeof(RecordActor_eventSetScreenRecordingSettings_Parms), Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARecordActor_NoRegister()
	{
		return ARecordActor::StaticClass();
	}
	struct Z_Construct_UClass_ARecordActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSeparateAudioVideo_MetaData[];
#endif
		static void NewProp_bSeparateAudioVideo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSeparateAudioVideo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Billboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieCapture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieCapture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewRecorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewRecorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MSC_AudioProtocol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MSC_AudioProtocol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MSC_VideoProtocol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MSC_VideoProtocol;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARecordActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseRecord,
		(UObject* (*)())Z_Construct_UPackage__Script_MSC_Record,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARecordActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARecordActor_SetRecordingSettings, "SetRecordingSettings" }, // 2884651979
		{ &Z_Construct_UFunction_ARecordActor_SetScreenRecordingSettings, "SetScreenRecordingSettings" }, // 1221311537
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RecordActor.h" },
		{ "ModuleRelativePath", "Public/RecordActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordActor_Statics::NewProp_bSeparateAudioVideo_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Export separate video and audio instantly (in AVI and WAV)\n" },
		{ "ModuleRelativePath", "Public/RecordActor.h" },
		{ "ToolTip", "Export separate video and audio instantly (in AVI and WAV)" },
	};
#endif
	void Z_Construct_UClass_ARecordActor_Statics::NewProp_bSeparateAudioVideo_SetBit(void* Obj)
	{
		((ARecordActor*)Obj)->bSeparateAudioVideo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecordActor_Statics::NewProp_bSeparateAudioVideo = { "bSeparateAudioVideo", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARecordActor), &Z_Construct_UClass_ARecordActor_Statics::NewProp_bSeparateAudioVideo_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecordActor_Statics::NewProp_bSeparateAudioVideo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordActor_Statics::NewProp_bSeparateAudioVideo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordActor_Statics::NewProp_Billboard_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RecordActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordActor_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordActor, Billboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordActor_Statics::NewProp_Billboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordActor_Statics::NewProp_Billboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordActor_Statics::NewProp_MovieCapture_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordActor_Statics::NewProp_MovieCapture = { "MovieCapture", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordActor, MovieCapture), Z_Construct_UClass_UMovieSceneCapture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordActor_Statics::NewProp_MovieCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordActor_Statics::NewProp_MovieCapture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordActor_Statics::NewProp_PreviewRecorder_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordActor_Statics::NewProp_PreviewRecorder = { "PreviewRecorder", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordActor, PreviewRecorder), Z_Construct_UClass_UMSC_PreviewRecorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordActor_Statics::NewProp_PreviewRecorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordActor_Statics::NewProp_PreviewRecorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_AudioProtocol_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_AudioProtocol = { "MSC_AudioProtocol", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordActor, MSC_AudioProtocol), Z_Construct_UClass_UMSC_AudioCaptureProtocol_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_AudioProtocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_AudioProtocol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_VideoProtocol_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecordActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_VideoProtocol = { "MSC_VideoProtocol", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecordActor, MSC_VideoProtocol), Z_Construct_UClass_UMSC_VideoCaptureProtocol_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_VideoProtocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_VideoProtocol_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARecordActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordActor_Statics::NewProp_bSeparateAudioVideo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordActor_Statics::NewProp_Billboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordActor_Statics::NewProp_MovieCapture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordActor_Statics::NewProp_PreviewRecorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_AudioProtocol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecordActor_Statics::NewProp_MSC_VideoProtocol,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARecordActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARecordActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARecordActor_Statics::ClassParams = {
		&ARecordActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARecordActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARecordActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARecordActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARecordActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARecordActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARecordActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARecordActor, 4190096415);
	template<> MSC_RECORD_API UClass* StaticClass<ARecordActor>()
	{
		return ARecordActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARecordActor(Z_Construct_UClass_ARecordActor, &ARecordActor::StaticClass, TEXT("/Script/MSC_Record"), TEXT("ARecordActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARecordActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

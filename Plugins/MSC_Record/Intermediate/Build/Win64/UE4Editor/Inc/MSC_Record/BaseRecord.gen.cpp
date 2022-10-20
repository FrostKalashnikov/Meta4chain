// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MSC_Record/Public/BaseRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseRecord() {}
// Cross Module References
	MSC_RECORD_API UFunction* Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MSC_Record();
	MSC_RECORD_API UScriptStruct* Z_Construct_UScriptStruct_FRecordingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	MSC_RECORD_API UEnum* Z_Construct_UEnum_MSC_Record_EExportFormats();
	MSC_RECORD_API UEnum* Z_Construct_UEnum_MSC_Record_ECompressSpeed();
	MSC_RECORD_API UClass* Z_Construct_UClass_ABaseRecord_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_ABaseRecord();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MSC_Record, nullptr, "OnExportFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FRecordingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MSC_RECORD_API uint32 Get_Z_Construct_UScriptStruct_FRecordingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordingSettings, Z_Construct_UPackage__Script_MSC_Record(), TEXT("RecordingSettings"), sizeof(FRecordingSettings), Get_Z_Construct_UScriptStruct_FRecordingSettings_Hash());
	}
	return Singleton;
}
template<> MSC_RECORD_API UScriptStruct* StaticStruct<FRecordingSettings>()
{
	return FRecordingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRecordingSettings(FRecordingSettings::StaticStruct, TEXT("/Script/MSC_Record"), TEXT("RecordingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MSC_Record_StaticRegisterNativesFRecordingSettings
{
	FScriptStruct_MSC_Record_StaticRegisterNativesFRecordingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RecordingSettings")),new UScriptStruct::TCppStructOps<FRecordingSettings>);
	}
} ScriptStruct_MSC_Record_StaticRegisterNativesFRecordingSettings;
	struct Z_Construct_UScriptStruct_FRecordingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmixToRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCompression_MetaData[];
#endif
		static void NewProp_bUseCompression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressionSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordingSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Output file name, recording time will be added to it.\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Output file name, recording time will be added to it." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordingSettings, FileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputDirectory_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Output directory of the result video(s).\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Output directory of the result video(s)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordingSettings, OutputDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Frame rate per second of the output video(s).\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Frame rate per second of the output video(s)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordingSettings, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_SubmixToRecord_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Can be used to record only a specific Submix\n//leave null if you want to record all audios\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Can be used to record only a specific Submix\nleave null if you want to record all audios" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordingSettings, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_SubmixToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_SubmixToRecord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_bUseCompression_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Use image compression to reduce file size.\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Use image compression to reduce file size." },
	};
#endif
	void Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_bUseCompression_SetBit(void* Obj)
	{
		((FRecordingSettings*)Obj)->bUseCompression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_bUseCompression = { "bUseCompression", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRecordingSettings), &Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_bUseCompression_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_bUseCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_bUseCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Compressed video quality, Increase for better quality.\n" },
		{ "EditCondition", "bUseCompression" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Compressed video quality, Increase for better quality." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordingSettings, CompressionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputFormat_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//output video format\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "output video format" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordingSettings, OutputFormat), Z_Construct_UEnum_MSC_Record_EExportFormats, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionSpeed_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//that this does not impact the quality of the video, only the size of the video file.\n//So choose ultrafast when you are in a hurry and file size does not matter.\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "that this does not impact the quality of the video, only the size of the video file.\nSo choose ultrafast when you are in a hurry and file size does not matter." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionSpeed = { "CompressionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordingSettings, CompressionSpeed), Z_Construct_UEnum_MSC_Record_ECompressSpeed, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_FrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_SubmixToRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_bUseCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_OutputFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordingSettings_Statics::NewProp_CompressionSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MSC_Record,
		nullptr,
		&NewStructOps,
		"RecordingSettings",
		sizeof(FRecordingSettings),
		alignof(FRecordingSettings),
		Z_Construct_UScriptStruct_FRecordingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecordingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRecordingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MSC_Record();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RecordingSettings"), sizeof(FRecordingSettings), Get_Z_Construct_UScriptStruct_FRecordingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRecordingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRecordingSettings_Hash() { return 3232645491U; }
	DEFINE_FUNCTION(ABaseRecord::execGetTimeByFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeByFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRecord::execGetFormattedFileName)
	{
		P_GET_UBOOL(Z_Param_WithFormat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFormattedFileName(Z_Param_WithFormat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRecord::execGetIsExporting)
	{
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValue);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetIsExporting(Z_Param_Out_ReturnValue,Z_Param_Out_Progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRecord::execGetIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRecord::execGetIsRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRecord::execFinishCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FinishCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRecord::execResumeCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResumeCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRecord::execPauseCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PauseCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRecord::execStartCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartCapture();
		P_NATIVE_END;
	}
	static FName NAME_ABaseRecord_OnExportFinish = FName(TEXT("OnExportFinish"));
	void ABaseRecord::OnExportFinish()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseRecord_OnExportFinish),NULL);
	}
	void ABaseRecord::StaticRegisterNativesABaseRecord()
	{
		UClass* Class = ABaseRecord::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishCapture", &ABaseRecord::execFinishCapture },
			{ "GetFormattedFileName", &ABaseRecord::execGetFormattedFileName },
			{ "GetIsExporting", &ABaseRecord::execGetIsExporting },
			{ "GetIsPaused", &ABaseRecord::execGetIsPaused },
			{ "GetIsRecording", &ABaseRecord::execGetIsRecording },
			{ "GetTimeByFrameRate", &ABaseRecord::execGetTimeByFrameRate },
			{ "PauseCapture", &ABaseRecord::execPauseCapture },
			{ "ResumeCapture", &ABaseRecord::execResumeCapture },
			{ "StartCapture", &ABaseRecord::execStartCapture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics
	{
		struct BaseRecord_eventFinishCapture_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseRecord_eventFinishCapture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseRecord_eventFinishCapture_Parms), &Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Finish capturing video\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Finish capturing video" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "FinishCapture", nullptr, nullptr, sizeof(BaseRecord_eventFinishCapture_Parms), Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_FinishCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRecord_FinishCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics
	{
		struct BaseRecord_eventGetFormattedFileName_Parms
		{
			bool WithFormat;
			FString ReturnValue;
		};
		static void NewProp_WithFormat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WithFormat;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::NewProp_WithFormat_SetBit(void* Obj)
	{
		((BaseRecord_eventGetFormattedFileName_Parms*)Obj)->WithFormat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::NewProp_WithFormat = { "WithFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseRecord_eventGetFormattedFileName_Parms), &Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::NewProp_WithFormat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseRecord_eventGetFormattedFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::NewProp_WithFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "CPP_Default_WithFormat", "false" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "GetFormattedFileName", nullptr, nullptr, sizeof(BaseRecord_eventGetFormattedFileName_Parms), Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_GetFormattedFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRecord_GetFormattedFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics
	{
		struct BaseRecord_eventGetIsExporting_Parms
		{
			bool ReturnValue;
			float Progress;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseRecord_eventGetIsExporting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseRecord_eventGetIsExporting_Parms), &Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseRecord_eventGetIsExporting_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Returns true if the recording is being exported\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Returns true if the recording is being exported" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "GetIsExporting", nullptr, nullptr, sizeof(BaseRecord_eventGetIsExporting_Parms), Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_GetIsExporting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRecord_GetIsExporting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics
	{
		struct BaseRecord_eventGetIsPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseRecord_eventGetIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseRecord_eventGetIsPaused_Parms), &Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Returns true if recording is paused\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Returns true if recording is paused" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "GetIsPaused", nullptr, nullptr, sizeof(BaseRecord_eventGetIsPaused_Parms), Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_GetIsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRecord_GetIsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics
	{
		struct BaseRecord_eventGetIsRecording_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseRecord_eventGetIsRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseRecord_eventGetIsRecording_Parms), &Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "/* Get Variables Functions *///Returns true if recording is active\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Get Variables Functions //Returns true if recording is active" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "GetIsRecording", nullptr, nullptr, sizeof(BaseRecord_eventGetIsRecording_Parms), Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_GetIsRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRecord_GetIsRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics
	{
		struct BaseRecord_eventGetTimeByFrameRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseRecord_eventGetTimeByFrameRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "GetTimeByFrameRate", nullptr, nullptr, sizeof(BaseRecord_eventGetTimeByFrameRate_Parms), Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_OnExportFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_OnExportFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//is called when the video export is finished\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "is called when the video export is finished" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_OnExportFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "OnExportFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_OnExportFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_OnExportFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_OnExportFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRecord_OnExportFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics
	{
		struct BaseRecord_eventPauseCapture_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseRecord_eventPauseCapture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseRecord_eventPauseCapture_Parms), &Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Pause an already started video capture\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Pause an already started video capture" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "PauseCapture", nullptr, nullptr, sizeof(BaseRecord_eventPauseCapture_Parms), Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_PauseCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRecord_PauseCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics
	{
		struct BaseRecord_eventResumeCapture_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseRecord_eventResumeCapture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseRecord_eventResumeCapture_Parms), &Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "//Resume paused video capture\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Resume paused video capture" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "ResumeCapture", nullptr, nullptr, sizeof(BaseRecord_eventResumeCapture_Parms), Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_ResumeCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRecord_ResumeCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRecord_StartCapture_Statics
	{
		struct BaseRecord_eventStartCapture_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseRecord_eventStartCapture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseRecord_eventStartCapture_Parms), &Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "MSC Recording" },
		{ "Comment", "/* Recording Nodes *///Start capturing screen video\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Recording Nodes //Start capturing screen video" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRecord, nullptr, "StartCapture", nullptr, nullptr, sizeof(BaseRecord_eventStartCapture_Parms), Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRecord_StartCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRecord_StartCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseRecord_NoRegister()
	{
		return ABaseRecord::StaticClass();
	}
	struct Z_Construct_UClass_ABaseRecord_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmixToRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCompression_MetaData[];
#endif
		static void NewProp_bUseCompression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressionSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnExportFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExportFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecordingSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecordingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRecording_MetaData[];
#endif
		static void NewProp_bIsRecording_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRecording;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPaused_MetaData[];
#endif
		static void NewProp_bIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsExporting_MetaData[];
#endif
		static void NewProp_bIsExporting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExporting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExportProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportTotalSeq_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExportTotalSeq;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MergeMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoCapDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VideoCapDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppMergerPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppMergerPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseRecord_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MSC_Record,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseRecord_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseRecord_FinishCapture, "FinishCapture" }, // 988006809
		{ &Z_Construct_UFunction_ABaseRecord_GetFormattedFileName, "GetFormattedFileName" }, // 4164713737
		{ &Z_Construct_UFunction_ABaseRecord_GetIsExporting, "GetIsExporting" }, // 1271060772
		{ &Z_Construct_UFunction_ABaseRecord_GetIsPaused, "GetIsPaused" }, // 2411423392
		{ &Z_Construct_UFunction_ABaseRecord_GetIsRecording, "GetIsRecording" }, // 1061197100
		{ &Z_Construct_UFunction_ABaseRecord_GetTimeByFrameRate, "GetTimeByFrameRate" }, // 618948081
		{ &Z_Construct_UFunction_ABaseRecord_OnExportFinish, "OnExportFinish" }, // 1883127928
		{ &Z_Construct_UFunction_ABaseRecord_PauseCapture, "PauseCapture" }, // 706433828
		{ &Z_Construct_UFunction_ABaseRecord_ResumeCapture, "ResumeCapture" }, // 4187177389
		{ &Z_Construct_UFunction_ABaseRecord_StartCapture, "StartCapture" }, // 2143380437
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseRecord.h" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileName_MetaData[] = {
		{ "Comment", "//Output file name, recording time will be added to it.\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Output file name, recording time will be added to it." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, FileName), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputDirectory_MetaData[] = {
		{ "Comment", "//Output directory of the result video(s).\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Output directory of the result video(s)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, OutputDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Comment", "//Frame rate per second of the output video(s).\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Frame rate per second of the output video(s)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_SubmixToRecord_MetaData[] = {
		{ "Comment", "//Can be used to record only a specific Submix\n//leave null if you want to record all audios\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Can be used to record only a specific Submix\nleave null if you want to record all audios" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_SubmixToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_SubmixToRecord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_bUseCompression_MetaData[] = {
		{ "Comment", "//Use image compression to reduce file size.\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Use image compression to reduce file size." },
	};
#endif
	void Z_Construct_UClass_ABaseRecord_Statics::NewProp_bUseCompression_SetBit(void* Obj)
	{
		((ABaseRecord*)Obj)->bUseCompression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_bUseCompression = { "bUseCompression", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseRecord), &Z_Construct_UClass_ABaseRecord_Statics::NewProp_bUseCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_bUseCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_bUseCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Comment", "//Compressed video quality, Increase for better quality.\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "Compressed video quality, Increase for better quality." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, CompressionQuality), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputFormat_MetaData[] = {
		{ "Comment", "//output video format\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "output video format" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, OutputFormat), Z_Construct_UEnum_MSC_Record_EExportFormats, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionSpeed_MetaData[] = {
		{ "Comment", "//that this does not impact the quality of the video, only the size of the video file.\n//So choose ultrafast when you are in a hurry and file size does not matter.\n" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
		{ "ToolTip", "that this does not impact the quality of the video, only the size of the video file.\nSo choose ultrafast when you are in a hurry and file size does not matter." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionSpeed = { "CompressionSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, CompressionSpeed), Z_Construct_UEnum_MSC_Record_ECompressSpeed, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_OnExportFinished_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_OnExportFinished = { "OnExportFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, OnExportFinished), Z_Construct_UDelegateFunction_MSC_Record_OnExportFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_OnExportFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_OnExportFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_RecordingSettings_MetaData[] = {
		{ "Category", "MSC Recording" },
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_RecordingSettings = { "RecordingSettings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, RecordingSettings), Z_Construct_UScriptStruct_FRecordingSettings, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_RecordingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_RecordingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsRecording_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	void Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsRecording_SetBit(void* Obj)
	{
		((ABaseRecord*)Obj)->bIsRecording = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsRecording = { "bIsRecording", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseRecord), &Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsRecording_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsRecording_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsRecording_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsPaused_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	void Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsPaused_SetBit(void* Obj)
	{
		((ABaseRecord*)Obj)->bIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseRecord), &Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsExporting_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	void Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsExporting_SetBit(void* Obj)
	{
		((ABaseRecord*)Obj)->bIsExporting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsExporting = { "bIsExporting", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseRecord), &Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsExporting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsExporting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsExporting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportProgress = { "ExportProgress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, ExportProgress), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_LastProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_LastProgress = { "LastProgress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, LastProgress), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_LastProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_LastProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportTotalSeq_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportTotalSeq = { "ExportTotalSeq", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, ExportTotalSeq), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportTotalSeq_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportTotalSeq_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_MergeMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_MergeMode = { "MergeMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, MergeMode), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_MergeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_MergeMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_TotalFrames_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_TotalFrames = { "TotalFrames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, TotalFrames), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_TotalFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_TotalFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileFormat_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileFormat = { "FileFormat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, FileFormat), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_VideoCapDir_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_VideoCapDir = { "VideoCapDir", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, VideoCapDir), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_VideoCapDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_VideoCapDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRecord_Statics::NewProp_AppMergerPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseRecord_Statics::NewProp_AppMergerPath = { "AppMergerPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRecord, AppMergerPath), METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::NewProp_AppMergerPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::NewProp_AppMergerPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_FrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_SubmixToRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_bUseCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_OutputFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_CompressionSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_OnExportFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_RecordingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsRecording,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_bIsExporting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_LastProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_ExportTotalSeq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_MergeMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_TotalFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_FileFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_VideoCapDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRecord_Statics::NewProp_AppMergerPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseRecord_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseRecord>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseRecord_Statics::ClassParams = {
		&ABaseRecord::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseRecord_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseRecord_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRecord_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseRecord()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseRecord_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseRecord, 1968141093);
	template<> MSC_RECORD_API UClass* StaticClass<ABaseRecord>()
	{
		return ABaseRecord::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseRecord(Z_Construct_UClass_ABaseRecord, &ABaseRecord::StaticClass, TEXT("/Script/MSC_Record"), TEXT("ABaseRecord"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseRecord);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

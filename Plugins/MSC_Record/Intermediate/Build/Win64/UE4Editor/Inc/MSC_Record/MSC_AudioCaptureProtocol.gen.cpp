// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MSC_Record/Public/MSC_AudioCaptureProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSC_AudioCaptureProtocol() {}
// Cross Module References
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_AudioCaptureProtocol_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_AudioCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol();
	UPackage* Z_Construct_UPackage__Script_MSC_Record();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
// End Cross Module References
	void UMSC_AudioCaptureProtocol::StaticRegisterNativesUMSC_AudioCaptureProtocol()
	{
	}
	UClass* Z_Construct_UClass_UMSC_AudioCaptureProtocol_NoRegister()
	{
		return UMSC_AudioCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmixToRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MSC_Record,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MSC_AudioCaptureProtocol.h" },
		{ "ModuleRelativePath", "Public/MSC_AudioCaptureProtocol.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::NewProp_SubmixToRecord_MetaData[] = {
		{ "ModuleRelativePath", "Public/MSC_AudioCaptureProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMSC_AudioCaptureProtocol, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::NewProp_SubmixToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::NewProp_SubmixToRecord_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::NewProp_SubmixToRecord,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSC_AudioCaptureProtocol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::ClassParams = {
		&UMSC_AudioCaptureProtocol::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMSC_AudioCaptureProtocol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMSC_AudioCaptureProtocol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMSC_AudioCaptureProtocol, 3988979985);
	template<> MSC_RECORD_API UClass* StaticClass<UMSC_AudioCaptureProtocol>()
	{
		return UMSC_AudioCaptureProtocol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMSC_AudioCaptureProtocol(Z_Construct_UClass_UMSC_AudioCaptureProtocol, &UMSC_AudioCaptureProtocol::StaticClass, TEXT("/Script/MSC_Record"), TEXT("UMSC_AudioCaptureProtocol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSC_AudioCaptureProtocol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

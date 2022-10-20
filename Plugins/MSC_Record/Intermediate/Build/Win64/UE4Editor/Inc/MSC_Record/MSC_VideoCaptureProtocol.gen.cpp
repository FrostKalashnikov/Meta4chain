// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MSC_Record/Public/MSC_VideoCaptureProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSC_VideoCaptureProtocol() {}
// Cross Module References
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_VideoCaptureProtocol_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_VideoCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UVideoCaptureProtocol();
	UPackage* Z_Construct_UPackage__Script_MSC_Record();
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_PreviewRecorder_NoRegister();
	MSC_RECORD_API UClass* Z_Construct_UClass_UMSC_PreviewRecorder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	void UMSC_VideoCaptureProtocol::StaticRegisterNativesUMSC_VideoCaptureProtocol()
	{
	}
	UClass* Z_Construct_UClass_UMSC_VideoCaptureProtocol_NoRegister()
	{
		return UMSC_VideoCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UMSC_VideoCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSC_VideoCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVideoCaptureProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MSC_Record,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSC_VideoCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MSC_VideoCaptureProtocol.h" },
		{ "ModuleRelativePath", "Public/MSC_VideoCaptureProtocol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSC_VideoCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSC_VideoCaptureProtocol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMSC_VideoCaptureProtocol_Statics::ClassParams = {
		&UMSC_VideoCaptureProtocol::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMSC_VideoCaptureProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMSC_VideoCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMSC_VideoCaptureProtocol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMSC_VideoCaptureProtocol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMSC_VideoCaptureProtocol, 1381818636);
	template<> MSC_RECORD_API UClass* StaticClass<UMSC_VideoCaptureProtocol>()
	{
		return UMSC_VideoCaptureProtocol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMSC_VideoCaptureProtocol(Z_Construct_UClass_UMSC_VideoCaptureProtocol, &UMSC_VideoCaptureProtocol::StaticClass, TEXT("/Script/MSC_Record"), TEXT("UMSC_VideoCaptureProtocol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSC_VideoCaptureProtocol);
	void UMSC_PreviewRecorder::StaticRegisterNativesUMSC_PreviewRecorder()
	{
	}
	UClass* Z_Construct_UClass_UMSC_PreviewRecorder_NoRegister()
	{
		return UMSC_PreviewRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UMSC_PreviewRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmixToRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSC_PreviewRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MSC_Record,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSC_PreviewRecorder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MSC_VideoCaptureProtocol.h" },
		{ "ModuleRelativePath", "Public/MSC_VideoCaptureProtocol.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_SubmixToRecord_MetaData[] = {
		{ "ModuleRelativePath", "Public/MSC_VideoCaptureProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMSC_PreviewRecorder, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_SubmixToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_SubmixToRecord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/MSC_VideoCaptureProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMSC_PreviewRecorder, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_World_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSC_PreviewRecorder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_SubmixToRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSC_PreviewRecorder_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSC_PreviewRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSC_PreviewRecorder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMSC_PreviewRecorder_Statics::ClassParams = {
		&UMSC_PreviewRecorder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMSC_PreviewRecorder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSC_PreviewRecorder_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMSC_PreviewRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMSC_PreviewRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMSC_PreviewRecorder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMSC_PreviewRecorder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMSC_PreviewRecorder, 982240868);
	template<> MSC_RECORD_API UClass* StaticClass<UMSC_PreviewRecorder>()
	{
		return UMSC_PreviewRecorder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMSC_PreviewRecorder(Z_Construct_UClass_UMSC_PreviewRecorder, &UMSC_PreviewRecorder::StaticClass, TEXT("/Script/MSC_Record"), TEXT("UMSC_PreviewRecorder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSC_PreviewRecorder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

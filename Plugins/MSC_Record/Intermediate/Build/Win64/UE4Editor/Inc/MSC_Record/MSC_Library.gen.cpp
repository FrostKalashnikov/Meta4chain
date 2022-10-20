// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MSC_Record/Public/MSC_Library.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSC_Library() {}
// Cross Module References
	MSC_RECORD_API UEnum* Z_Construct_UEnum_MSC_Record_ECompressSpeed();
	UPackage* Z_Construct_UPackage__Script_MSC_Record();
	MSC_RECORD_API UEnum* Z_Construct_UEnum_MSC_Record_EExportFormats();
// End Cross Module References
	static UEnum* ECompressSpeed_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MSC_Record_ECompressSpeed, Z_Construct_UPackage__Script_MSC_Record(), TEXT("ECompressSpeed"));
		}
		return Singleton;
	}
	template<> MSC_RECORD_API UEnum* StaticEnum<ECompressSpeed>()
	{
		return ECompressSpeed_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECompressSpeed(ECompressSpeed_StaticEnum, TEXT("/Script/MSC_Record"), TEXT("ECompressSpeed"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MSC_Record_ECompressSpeed_Hash() { return 1759745496U; }
	UEnum* Z_Construct_UEnum_MSC_Record_ECompressSpeed()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MSC_Record();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECompressSpeed"), 0, Get_Z_Construct_UEnum_MSC_Record_ECompressSpeed_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Ultrafast", (int64)Ultrafast },
				{ "Veryfast", (int64)Veryfast },
				{ "Fast", (int64)Fast },
				{ "Medium", (int64)Medium },
				{ "Slow", (int64)Slow },
				{ "Slower", (int64)Slower },
				{ "Veryslow", (int64)Veryslow },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Fast.DisplayName", "Fast" },
				{ "Fast.Name", "Fast" },
				{ "Medium.DisplayName", "Medium" },
				{ "Medium.Name", "Medium" },
				{ "ModuleRelativePath", "Public/MSC_Library.h" },
				{ "Slow.DisplayName", "Slow" },
				{ "Slow.Name", "Slow" },
				{ "Slower.DisplayName", "Slower" },
				{ "Slower.Name", "Slower" },
				{ "Ultrafast.DisplayName", "Ultrafast" },
				{ "Ultrafast.Name", "Ultrafast" },
				{ "Veryfast.DisplayName", "Veryfast" },
				{ "Veryfast.Name", "Veryfast" },
				{ "Veryslow.DisplayName", "Veryslow" },
				{ "Veryslow.Name", "Veryslow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MSC_Record,
				nullptr,
				"ECompressSpeed",
				"ECompressSpeed",
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
	static UEnum* EExportFormats_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MSC_Record_EExportFormats, Z_Construct_UPackage__Script_MSC_Record(), TEXT("EExportFormats"));
		}
		return Singleton;
	}
	template<> MSC_RECORD_API UEnum* StaticEnum<EExportFormats>()
	{
		return EExportFormats_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EExportFormats(EExportFormats_StaticEnum, TEXT("/Script/MSC_Record"), TEXT("EExportFormats"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MSC_Record_EExportFormats_Hash() { return 4064512327U; }
	UEnum* Z_Construct_UEnum_MSC_Record_EExportFormats()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MSC_Record();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EExportFormats"), 0, Get_Z_Construct_UEnum_MSC_Record_EExportFormats_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MP4", (int64)MP4 },
				{ "AVI", (int64)AVI },
				{ "WEBM", (int64)WEBM },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AVI.DisplayName", "AVI" },
				{ "AVI.Name", "AVI" },
				{ "ModuleRelativePath", "Public/MSC_Library.h" },
				{ "MP4.DisplayName", "MP4" },
				{ "MP4.Name", "MP4" },
				{ "WEBM.DisplayName", "WEBM" },
				{ "WEBM.Name", "WEBM" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MSC_Record,
				nullptr,
				"EExportFormats",
				"EExportFormats",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

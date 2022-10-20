// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MSC_RECORD_BaseRecord_generated_h
#error "BaseRecord.generated.h already included, missing '#pragma once' in BaseRecord.h"
#endif
#define MSC_RECORD_BaseRecord_generated_h

#define FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_14_DELEGATE \
static inline void FOnExportFinished_DelegateWrapper(const FMulticastScriptDelegate& OnExportFinished) \
{ \
	OnExportFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRecordingSettings_Statics; \
	MSC_RECORD_API static class UScriptStruct* StaticStruct();


template<> MSC_RECORD_API UScriptStruct* StaticStruct<struct FRecordingSettings>();

#define FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_SPARSE_DATA
#define FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTimeByFrameRate); \
	DECLARE_FUNCTION(execGetFormattedFileName); \
	DECLARE_FUNCTION(execGetIsExporting); \
	DECLARE_FUNCTION(execGetIsPaused); \
	DECLARE_FUNCTION(execGetIsRecording); \
	DECLARE_FUNCTION(execFinishCapture); \
	DECLARE_FUNCTION(execResumeCapture); \
	DECLARE_FUNCTION(execPauseCapture); \
	DECLARE_FUNCTION(execStartCapture);


#define FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTimeByFrameRate); \
	DECLARE_FUNCTION(execGetFormattedFileName); \
	DECLARE_FUNCTION(execGetIsExporting); \
	DECLARE_FUNCTION(execGetIsPaused); \
	DECLARE_FUNCTION(execGetIsRecording); \
	DECLARE_FUNCTION(execFinishCapture); \
	DECLARE_FUNCTION(execResumeCapture); \
	DECLARE_FUNCTION(execPauseCapture); \
	DECLARE_FUNCTION(execStartCapture);


#define FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_EVENT_PARMS
#define FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_CALLBACK_WRAPPERS
#define FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseRecord(); \
	friend struct Z_Construct_UClass_ABaseRecord_Statics; \
public: \
	DECLARE_CLASS(ABaseRecord, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ABaseRecord)


#define FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_INCLASS \
private: \
	static void StaticRegisterNativesABaseRecord(); \
	friend struct Z_Construct_UClass_ABaseRecord_Statics; \
public: \
	DECLARE_CLASS(ABaseRecord, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ABaseRecord)


#define FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseRecord(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseRecord) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseRecord); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseRecord); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseRecord(ABaseRecord&&); \
	NO_API ABaseRecord(const ABaseRecord&); \
public:


#define FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseRecord(ABaseRecord&&); \
	NO_API ABaseRecord(const ABaseRecord&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseRecord); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseRecord); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseRecord)


#define FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_57_PROLOG \
	FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_EVENT_PARMS


#define FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_SPARSE_DATA \
	FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_RPC_WRAPPERS \
	FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_CALLBACK_WRAPPERS \
	FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_INCLASS \
	FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_SPARSE_DATA \
	FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_CALLBACK_WRAPPERS \
	FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_INCLASS_NO_PURE_DECLS \
	FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MSC_RECORD_API UClass* StaticClass<class ABaseRecord>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_BaseRecord_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

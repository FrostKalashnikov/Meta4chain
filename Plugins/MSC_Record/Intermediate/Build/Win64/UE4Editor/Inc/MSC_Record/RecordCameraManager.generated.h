// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRecordingSettings;
struct FCaptureResolution;
class UTexture;
class USceneCaptureComponentCube;
class USceneCaptureComponent2D;
class UCameraComponent;
#ifdef MSC_RECORD_RecordCameraManager_generated_h
#error "RecordCameraManager.generated.h already included, missing '#pragma once' in RecordCameraManager.h"
#endif
#define MSC_RECORD_RecordCameraManager_generated_h

#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_SPARSE_DATA
#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_RPC_WRAPPERS
#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACamera2D(); \
	friend struct Z_Construct_UClass_ACamera2D_Statics; \
public: \
	DECLARE_CLASS(ACamera2D, ASceneCapture2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ACamera2D)


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_INCLASS \
private: \
	static void StaticRegisterNativesACamera2D(); \
	friend struct Z_Construct_UClass_ACamera2D_Statics; \
public: \
	DECLARE_CLASS(ACamera2D, ASceneCapture2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ACamera2D)


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACamera2D(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACamera2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamera2D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamera2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamera2D(ACamera2D&&); \
	NO_API ACamera2D(const ACamera2D&); \
public:


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamera2D(ACamera2D&&); \
	NO_API ACamera2D(const ACamera2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamera2D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamera2D); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACamera2D)


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PreviewCam() { return STRUCT_OFFSET(ACamera2D, PreviewCam); }


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_24_PROLOG
#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_PRIVATE_PROPERTY_OFFSET \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_SPARSE_DATA \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_RPC_WRAPPERS \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_INCLASS \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_PRIVATE_PROPERTY_OFFSET \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_SPARSE_DATA \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_INCLASS_NO_PURE_DECLS \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MSC_RECORD_API UClass* StaticClass<class ACamera2D>();

#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_SPARSE_DATA
#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_RPC_WRAPPERS
#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACamera360(); \
	friend struct Z_Construct_UClass_ACamera360_Statics; \
public: \
	DECLARE_CLASS(ACamera360, ASceneCaptureCube, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ACamera360)


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_INCLASS \
private: \
	static void StaticRegisterNativesACamera360(); \
	friend struct Z_Construct_UClass_ACamera360_Statics; \
public: \
	DECLARE_CLASS(ACamera360, ASceneCaptureCube, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ACamera360)


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACamera360(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACamera360) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamera360); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamera360); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamera360(ACamera360&&); \
	NO_API ACamera360(const ACamera360&); \
public:


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamera360(ACamera360&&); \
	NO_API ACamera360(const ACamera360&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamera360); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamera360); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACamera360)


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PreviewCam() { return STRUCT_OFFSET(ACamera360, PreviewCam); }


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_35_PROLOG
#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_PRIVATE_PROPERTY_OFFSET \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_SPARSE_DATA \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_RPC_WRAPPERS \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_INCLASS \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_PRIVATE_PROPERTY_OFFSET \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_SPARSE_DATA \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_INCLASS_NO_PURE_DECLS \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MSC_RECORD_API UClass* StaticClass<class ACamera360>();

#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_SPARSE_DATA
#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCameraRecordingSettings); \
	DECLARE_FUNCTION(execGetCameraViewTexture); \
	DECLARE_FUNCTION(execGetCam360CaptureComp); \
	DECLARE_FUNCTION(execGetCam2DCaptureComp); \
	DECLARE_FUNCTION(execCheckValidCam); \
	DECLARE_FUNCTION(execSetupRenderTarget); \
	DECLARE_FUNCTION(execUpdatePreview); \
	DECLARE_FUNCTION(execRemoveCamera); \
	DECLARE_FUNCTION(execAddCamera); \
	DECLARE_FUNCTION(execGetPreviewCam);


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCameraRecordingSettings); \
	DECLARE_FUNCTION(execGetCameraViewTexture); \
	DECLARE_FUNCTION(execGetCam360CaptureComp); \
	DECLARE_FUNCTION(execGetCam2DCaptureComp); \
	DECLARE_FUNCTION(execCheckValidCam); \
	DECLARE_FUNCTION(execSetupRenderTarget); \
	DECLARE_FUNCTION(execUpdatePreview); \
	DECLARE_FUNCTION(execRemoveCamera); \
	DECLARE_FUNCTION(execAddCamera); \
	DECLARE_FUNCTION(execGetPreviewCam);


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARecordCameraManager(); \
	friend struct Z_Construct_UClass_ARecordCameraManager_Statics; \
public: \
	DECLARE_CLASS(ARecordCameraManager, ABaseRecord, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ARecordCameraManager)


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_INCLASS \
private: \
	static void StaticRegisterNativesARecordCameraManager(); \
	friend struct Z_Construct_UClass_ARecordCameraManager_Statics; \
public: \
	DECLARE_CLASS(ARecordCameraManager, ABaseRecord, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MSC_Record"), NO_API) \
	DECLARE_SERIALIZER(ARecordCameraManager)


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARecordCameraManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARecordCameraManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARecordCameraManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARecordCameraManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARecordCameraManager(ARecordCameraManager&&); \
	NO_API ARecordCameraManager(const ARecordCameraManager&); \
public:


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARecordCameraManager(ARecordCameraManager&&); \
	NO_API ARecordCameraManager(const ARecordCameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARecordCameraManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARecordCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARecordCameraManager)


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ResultTexture() { return STRUCT_OFFSET(ARecordCameraManager, ResultTexture); } \
	FORCEINLINE static uint32 __PPO__RenderTarget2D() { return STRUCT_OFFSET(ARecordCameraManager, RenderTarget2D); } \
	FORCEINLINE static uint32 __PPO__RenderTarget360() { return STRUCT_OFFSET(ARecordCameraManager, RenderTarget360); } \
	FORCEINLINE static uint32 __PPO__PlaneDyMat() { return STRUCT_OFFSET(ARecordCameraManager, PlaneDyMat); } \
	FORCEINLINE static uint32 __PPO__Flat360Material() { return STRUCT_OFFSET(ARecordCameraManager, Flat360Material); } \
	FORCEINLINE static uint32 __PPO__FrameCount() { return STRUCT_OFFSET(ARecordCameraManager, FrameCount); }


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_46_PROLOG
#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_PRIVATE_PROPERTY_OFFSET \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_SPARSE_DATA \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_RPC_WRAPPERS \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_INCLASS \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_PRIVATE_PROPERTY_OFFSET \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_SPARSE_DATA \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_INCLASS_NO_PURE_DECLS \
	MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MSC_RECORD_API UClass* StaticClass<class ARecordCameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MSC_ExampleProject_Plugins_MSC_Record_Source_MSC_Record_Public_RecordCameraManager_h


#define FOREACH_ENUM_ECAMERATYPE(op) \
	op(Camera2D) \
	op(Camera360) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

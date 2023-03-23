// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef NPROJECT1_GH_PlayerShot_generated_h
#error "PlayerShot.generated.h already included, missing '#pragma once' in PlayerShot.h"
#endif
#define NPROJECT1_GH_PlayerShot_generated_h

#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_SPARSE_DATA
#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapFinish); \
	DECLARE_FUNCTION(execOnOverlapStart); \
	DECLARE_FUNCTION(execOnHit);


#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapFinish); \
	DECLARE_FUNCTION(execOnOverlapStart); \
	DECLARE_FUNCTION(execOnHit);


#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerShot(); \
	friend struct Z_Construct_UClass_APlayerShot_Statics; \
public: \
	DECLARE_CLASS(APlayerShot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Nproject1_GH"), NO_API) \
	DECLARE_SERIALIZER(APlayerShot)


#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerShot(); \
	friend struct Z_Construct_UClass_APlayerShot_Statics; \
public: \
	DECLARE_CLASS(APlayerShot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Nproject1_GH"), NO_API) \
	DECLARE_SERIALIZER(APlayerShot)


#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerShot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerShot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerShot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerShot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerShot(APlayerShot&&); \
	NO_API APlayerShot(const APlayerShot&); \
public:


#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerShot(APlayerShot&&); \
	NO_API APlayerShot(const APlayerShot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerShot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerShot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerShot)


#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_9_PROLOG
#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_SPARSE_DATA \
	FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_RPC_WRAPPERS \
	FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_INCLASS \
	FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_SPARSE_DATA \
	FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_INCLASS_NO_PURE_DECLS \
	FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NPROJECT1_GH_API UClass* StaticClass<class APlayerShot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Nproject1_GH_Source_Nproject1_GH_PlayerShot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

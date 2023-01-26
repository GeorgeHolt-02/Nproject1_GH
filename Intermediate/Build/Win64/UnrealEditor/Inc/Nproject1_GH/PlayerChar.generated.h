// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NPROJECT1_GH_PlayerChar_generated_h
#error "PlayerChar.generated.h already included, missing '#pragma once' in PlayerChar.h"
#endif
#define NPROJECT1_GH_PlayerChar_generated_h

#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_SPARSE_DATA
#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execTakeHeavyDamage);


#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execTakeHeavyDamage);


#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerChar(); \
	friend struct Z_Construct_UClass_APlayerChar_Statics; \
public: \
	DECLARE_CLASS(APlayerChar, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Nproject1_GH"), NO_API) \
	DECLARE_SERIALIZER(APlayerChar)


#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerChar(); \
	friend struct Z_Construct_UClass_APlayerChar_Statics; \
public: \
	DECLARE_CLASS(APlayerChar, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Nproject1_GH"), NO_API) \
	DECLARE_SERIALIZER(APlayerChar)


#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerChar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerChar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerChar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerChar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerChar(APlayerChar&&); \
	NO_API APlayerChar(const APlayerChar&); \
public:


#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerChar(APlayerChar&&); \
	NO_API APlayerChar(const APlayerChar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerChar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerChar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerChar)


#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_11_PROLOG
#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_SPARSE_DATA \
	FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_RPC_WRAPPERS \
	FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_INCLASS \
	FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_SPARSE_DATA \
	FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_INCLASS_NO_PURE_DECLS \
	FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NPROJECT1_GH_API UClass* StaticClass<class APlayerChar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

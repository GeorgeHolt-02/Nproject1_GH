// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/PlayerChar_AnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerChar_AnimInstance() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UPlayerChar_AnimInstance_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UPlayerChar_AnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerChar_AnimInstance::execUpdateAnimationProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties();
		P_NATIVE_END;
	}
	void UPlayerChar_AnimInstance::StaticRegisterNativesUPlayerChar_AnimInstance()
	{
		UClass* Class = UPlayerChar_AnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UPlayerChar_AnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerChar_AnimInstance_UpdateAnimationProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerChar_AnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "PlayerChar_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerChar_AnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerChar_AnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerChar_AnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerChar_AnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerChar_AnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerChar_AnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerChar_AnimInstance);
	UClass* Z_Construct_UClass_UPlayerChar_AnimInstance_NoRegister()
	{
		return UPlayerChar_AnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerChar_AnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInAir_MetaData[];
#endif
		static void NewProp_bInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasJumped_MetaData[];
#endif
		static void NewProp_bHasJumped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasJumped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasFired_MetaData[];
#endif
		static void NewProp_bHasFired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerChar_AnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 2319226168
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PlayerChar_AnimInstance.h" },
		{ "ModuleRelativePath", "PlayerChar_AnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_MovementInput_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PlayerChar_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_MovementInput = { "MovementInput", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerChar_AnimInstance, MovementInput), METADATA_PARAMS(Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_MovementInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_MovementInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bInAir_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PlayerChar_AnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bInAir_SetBit(void* Obj)
	{
		((UPlayerChar_AnimInstance*)Obj)->bInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bInAir = { "bInAir", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerChar_AnimInstance), &Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bInAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bHasJumped_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PlayerChar_AnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bHasJumped_SetBit(void* Obj)
	{
		((UPlayerChar_AnimInstance*)Obj)->bHasJumped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bHasJumped = { "bHasJumped", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerChar_AnimInstance), &Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bHasJumped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bHasJumped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bHasJumped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bHasFired_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PlayerChar_AnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bHasFired_SetBit(void* Obj)
	{
		((UPlayerChar_AnimInstance*)Obj)->bHasFired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bHasFired = { "bHasFired", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerChar_AnimInstance), &Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bHasFired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bHasFired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bHasFired_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_Pawn_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "PlayerChar_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerChar_AnimInstance, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_Pawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_MovementInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bHasJumped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_bHasFired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::NewProp_Pawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerChar_AnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::ClassParams = {
		&UPlayerChar_AnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerChar_AnimInstance()
	{
		if (!Z_Registration_Info_UClass_UPlayerChar_AnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerChar_AnimInstance.OuterSingleton, Z_Construct_UClass_UPlayerChar_AnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerChar_AnimInstance.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<UPlayerChar_AnimInstance>()
	{
		return UPlayerChar_AnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerChar_AnimInstance);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_PlayerChar_AnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_PlayerChar_AnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerChar_AnimInstance, UPlayerChar_AnimInstance::StaticClass, TEXT("UPlayerChar_AnimInstance"), &Z_Registration_Info_UClass_UPlayerChar_AnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerChar_AnimInstance), 227488909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_PlayerChar_AnimInstance_h_184909593(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_PlayerChar_AnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_PlayerChar_AnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

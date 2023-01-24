// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject1_GH/Enemy_FlyingTurret.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_FlyingTurret() {}
// Cross Module References
	NPROJECT1_GH_API UClass* Z_Construct_UClass_AEnemy_FlyingTurret_NoRegister();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_AEnemy_FlyingTurret();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_ABaseEnemy();
	UPackage* Z_Construct_UPackage__Script_Nproject1_GH();
// End Cross Module References
	void AEnemy_FlyingTurret::StaticRegisterNativesAEnemy_FlyingTurret()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_FlyingTurret);
	UClass* Z_Construct_UClass_AEnemy_FlyingTurret_NoRegister()
	{
		return AEnemy_FlyingTurret::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_FlyingTurret_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_FlyingTurret_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject1_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_FlyingTurret_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Enemy_FlyingTurret.h" },
		{ "ModuleRelativePath", "Enemy_FlyingTurret.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_FlyingTurret_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_FlyingTurret>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::ClassParams = {
		&AEnemy_FlyingTurret::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_FlyingTurret()
	{
		if (!Z_Registration_Info_UClass_AEnemy_FlyingTurret.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_FlyingTurret.OuterSingleton, Z_Construct_UClass_AEnemy_FlyingTurret_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy_FlyingTurret.OuterSingleton;
	}
	template<> NPROJECT1_GH_API UClass* StaticClass<AEnemy_FlyingTurret>()
	{
		return AEnemy_FlyingTurret::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_FlyingTurret);
	struct Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Enemy_FlyingTurret_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Enemy_FlyingTurret_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_FlyingTurret, AEnemy_FlyingTurret::StaticClass, TEXT("AEnemy_FlyingTurret"), &Z_Registration_Info_UClass_AEnemy_FlyingTurret, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_FlyingTurret), 3622681007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Enemy_FlyingTurret_h_3819422926(TEXT("/Script/Nproject1_GH"),
		Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Enemy_FlyingTurret_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Enemy_FlyingTurret_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

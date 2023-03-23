// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject1_GH/EnemyProjectile_FlyingTurret.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyProjectile_FlyingTurret() {}
// Cross Module References
	NPROJECT1_GH_API UClass* Z_Construct_UClass_AEnemyProjectile_FlyingTurret_NoRegister();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_AEnemyProjectile_FlyingTurret();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_ABaseEnemyProjectile();
	UPackage* Z_Construct_UPackage__Script_Nproject1_GH();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEnemyProjectile_FlyingTurret::StaticRegisterNativesAEnemyProjectile_FlyingTurret()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyProjectile_FlyingTurret);
	UClass* Z_Construct_UClass_AEnemyProjectile_FlyingTurret_NoRegister()
	{
		return AEnemyProjectile_FlyingTurret::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyProjectile_FlyingTurret_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShotMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyProjectile_FlyingTurret_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemyProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject1_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_FlyingTurret_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemyProjectile_FlyingTurret.h" },
		{ "ModuleRelativePath", "EnemyProjectile_FlyingTurret.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_FlyingTurret_Statics::NewProp_ShotMesh_MetaData[] = {
		{ "Category", "EnemyProjectile_FlyingTurret" },
		{ "Comment", "/** Shot mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyProjectile_FlyingTurret.h" },
		{ "ToolTip", "Shot mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyProjectile_FlyingTurret_Statics::NewProp_ShotMesh = { "ShotMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyProjectile_FlyingTurret, ShotMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyProjectile_FlyingTurret_Statics::NewProp_ShotMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_FlyingTurret_Statics::NewProp_ShotMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyProjectile_FlyingTurret_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyProjectile_FlyingTurret_Statics::NewProp_ShotMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyProjectile_FlyingTurret_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyProjectile_FlyingTurret>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyProjectile_FlyingTurret_Statics::ClassParams = {
		&AEnemyProjectile_FlyingTurret::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyProjectile_FlyingTurret_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_FlyingTurret_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyProjectile_FlyingTurret_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_FlyingTurret_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyProjectile_FlyingTurret()
	{
		if (!Z_Registration_Info_UClass_AEnemyProjectile_FlyingTurret.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyProjectile_FlyingTurret.OuterSingleton, Z_Construct_UClass_AEnemyProjectile_FlyingTurret_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyProjectile_FlyingTurret.OuterSingleton;
	}
	template<> NPROJECT1_GH_API UClass* StaticClass<AEnemyProjectile_FlyingTurret>()
	{
		return AEnemyProjectile_FlyingTurret::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyProjectile_FlyingTurret);
	struct Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_EnemyProjectile_FlyingTurret_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_EnemyProjectile_FlyingTurret_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyProjectile_FlyingTurret, AEnemyProjectile_FlyingTurret::StaticClass, TEXT("AEnemyProjectile_FlyingTurret"), &Z_Registration_Info_UClass_AEnemyProjectile_FlyingTurret, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyProjectile_FlyingTurret), 1080691615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_EnemyProjectile_FlyingTurret_h_2540739574(TEXT("/Script/Nproject1_GH"),
		Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_EnemyProjectile_FlyingTurret_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_EnemyProjectile_FlyingTurret_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

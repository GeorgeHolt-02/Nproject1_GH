// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject1_GH/BaseEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}
// Cross Module References
	NPROJECT1_GH_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_ABaseEnemy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Nproject1_GH();
// End Cross Module References
	void ABaseEnemy::StaticRegisterNativesABaseEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEnemy);
	UClass* Z_Construct_UClass_ABaseEnemy_NoRegister()
	{
		return ABaseEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject1_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseEnemy.h" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemy_Statics::ClassParams = {
		&ABaseEnemy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseEnemy()
	{
		if (!Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton, Z_Construct_UClass_ABaseEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton;
	}
	template<> NPROJECT1_GH_API UClass* StaticClass<ABaseEnemy>()
	{
		return ABaseEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemy);
	struct Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_BaseEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_BaseEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemy, ABaseEnemy::StaticClass, TEXT("ABaseEnemy"), &Z_Registration_Info_UClass_ABaseEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemy), 2042136833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_BaseEnemy_h_3244282602(TEXT("/Script/Nproject1_GH"),
		Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_BaseEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_BaseEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

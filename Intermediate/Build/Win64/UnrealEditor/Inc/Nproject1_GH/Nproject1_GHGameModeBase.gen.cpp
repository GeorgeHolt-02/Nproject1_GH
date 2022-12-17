// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject1_GH/Nproject1_GHGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNproject1_GHGameModeBase() {}
// Cross Module References
	NPROJECT1_GH_API UClass* Z_Construct_UClass_ANproject1_GHGameModeBase_NoRegister();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_ANproject1_GHGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Nproject1_GH();
// End Cross Module References
	void ANproject1_GHGameModeBase::StaticRegisterNativesANproject1_GHGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANproject1_GHGameModeBase);
	UClass* Z_Construct_UClass_ANproject1_GHGameModeBase_NoRegister()
	{
		return ANproject1_GHGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ANproject1_GHGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANproject1_GHGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject1_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANproject1_GHGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Nproject1_GHGameModeBase.h" },
		{ "ModuleRelativePath", "Nproject1_GHGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANproject1_GHGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANproject1_GHGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANproject1_GHGameModeBase_Statics::ClassParams = {
		&ANproject1_GHGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANproject1_GHGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANproject1_GHGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANproject1_GHGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ANproject1_GHGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANproject1_GHGameModeBase.OuterSingleton, Z_Construct_UClass_ANproject1_GHGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANproject1_GHGameModeBase.OuterSingleton;
	}
	template<> NPROJECT1_GH_API UClass* StaticClass<ANproject1_GHGameModeBase>()
	{
		return ANproject1_GHGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANproject1_GHGameModeBase);
	struct Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Nproject1_GHGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Nproject1_GHGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANproject1_GHGameModeBase, ANproject1_GHGameModeBase::StaticClass, TEXT("ANproject1_GHGameModeBase"), &Z_Registration_Info_UClass_ANproject1_GHGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANproject1_GHGameModeBase), 2494224672U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Nproject1_GHGameModeBase_h_473684772(TEXT("/Script/Nproject1_GH"),
		Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Nproject1_GHGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Nproject1_GHGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

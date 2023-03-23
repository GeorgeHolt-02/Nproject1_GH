// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/Nproject2_GHGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNproject2_GHGameModeBase() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ANproject2_GHGameModeBase_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ANproject2_GHGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
// End Cross Module References
	void ANproject2_GHGameModeBase::StaticRegisterNativesANproject2_GHGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANproject2_GHGameModeBase);
	UClass* Z_Construct_UClass_ANproject2_GHGameModeBase_NoRegister()
	{
		return ANproject2_GHGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ANproject2_GHGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANproject2_GHGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANproject2_GHGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Nproject2_GHGameModeBase.h" },
		{ "ModuleRelativePath", "Nproject2_GHGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANproject2_GHGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANproject2_GHGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANproject2_GHGameModeBase_Statics::ClassParams = {
		&ANproject2_GHGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANproject2_GHGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANproject2_GHGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANproject2_GHGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ANproject2_GHGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANproject2_GHGameModeBase.OuterSingleton, Z_Construct_UClass_ANproject2_GHGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANproject2_GHGameModeBase.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<ANproject2_GHGameModeBase>()
	{
		return ANproject2_GHGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANproject2_GHGameModeBase);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Nproject2_GHGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Nproject2_GHGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANproject2_GHGameModeBase, ANproject2_GHGameModeBase::StaticClass, TEXT("ANproject2_GHGameModeBase"), &Z_Registration_Info_UClass_ANproject2_GHGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANproject2_GHGameModeBase), 2330974250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Nproject2_GHGameModeBase_h_3738385259(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Nproject2_GHGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Nproject2_GHGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

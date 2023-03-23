// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/EnemyWaveSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyWaveSpline() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UEnemyWaveSpline_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UEnemyWaveSpline();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
// End Cross Module References
	void UEnemyWaveSpline::StaticRegisterNativesUEnemyWaveSpline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyWaveSpline);
	UClass* Z_Construct_UClass_UEnemyWaveSpline_NoRegister()
	{
		return UEnemyWaveSpline::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyWaveSpline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyBP;
		static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnemyReferences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyWaveSpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyWaveSpline_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "EnemyWaveSpline.h" },
		{ "ModuleRelativePath", "EnemyWaveSpline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyWaveSpline_Statics::NewProp_EnemyBP_MetaData[] = {
		{ "Category", "EnemyWaveSpline" },
		{ "Comment", "//** Enemy class to spawn */\n" },
		{ "ModuleRelativePath", "EnemyWaveSpline.h" },
		{ "ToolTip", "/ Enemy class to spawn" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnemyWaveSpline_Statics::NewProp_EnemyBP = { "EnemyBP", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyWaveSpline, EnemyBP), Z_Construct_UClass_ABaseEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnemyWaveSpline_Statics::NewProp_EnemyBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyWaveSpline_Statics::NewProp_EnemyBP_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnemyWaveSpline_Statics::NewProp_EnemyReferences_Inner = { "EnemyReferences", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyWaveSpline_Statics::NewProp_EnemyReferences_MetaData[] = {
		{ "Category", "EnemyWaveSpline" },
		{ "Comment", "//** Enemy class reference array */\n" },
		{ "ModuleRelativePath", "EnemyWaveSpline.h" },
		{ "ToolTip", "/ Enemy class reference array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemyWaveSpline_Statics::NewProp_EnemyReferences = { "EnemyReferences", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyWaveSpline, EnemyReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnemyWaveSpline_Statics::NewProp_EnemyReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyWaveSpline_Statics::NewProp_EnemyReferences_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyWaveSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyWaveSpline_Statics::NewProp_EnemyBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyWaveSpline_Statics::NewProp_EnemyReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyWaveSpline_Statics::NewProp_EnemyReferences,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyWaveSpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyWaveSpline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyWaveSpline_Statics::ClassParams = {
		&UEnemyWaveSpline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyWaveSpline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyWaveSpline_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyWaveSpline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyWaveSpline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyWaveSpline()
	{
		if (!Z_Registration_Info_UClass_UEnemyWaveSpline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyWaveSpline.OuterSingleton, Z_Construct_UClass_UEnemyWaveSpline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyWaveSpline.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<UEnemyWaveSpline>()
	{
		return UEnemyWaveSpline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyWaveSpline);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyWaveSpline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyWaveSpline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyWaveSpline, UEnemyWaveSpline::StaticClass, TEXT("UEnemyWaveSpline"), &Z_Registration_Info_UClass_UEnemyWaveSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyWaveSpline), 385260426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyWaveSpline_h_220331362(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyWaveSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_EnemyWaveSpline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

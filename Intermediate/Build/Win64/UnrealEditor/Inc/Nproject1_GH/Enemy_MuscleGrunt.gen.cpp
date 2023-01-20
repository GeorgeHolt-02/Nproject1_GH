// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject1_GH/Enemy_MuscleGrunt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_MuscleGrunt() {}
// Cross Module References
	NPROJECT1_GH_API UClass* Z_Construct_UClass_AEnemy_MuscleGrunt_NoRegister();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_AEnemy_MuscleGrunt();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_ABaseEnemy();
	UPackage* Z_Construct_UPackage__Script_Nproject1_GH();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AEnemy_MuscleGrunt::StaticRegisterNativesAEnemy_MuscleGrunt()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_MuscleGrunt);
	UClass* Z_Construct_UClass_AEnemy_MuscleGrunt_NoRegister()
	{
		return AEnemy_MuscleGrunt::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_MuscleGrunt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerminalFallSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TerminalFallSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPositioningSweep_MetaData[];
#endif
		static void NewProp_bPositioningSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPositioningSweep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject1_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Enemy_MuscleGrunt.h" },
		{ "ModuleRelativePath", "Enemy_MuscleGrunt.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_EnemyMesh_MetaData[] = {
		{ "Category", "Enemy_MuscleGrunt" },
		{ "Comment", "//** Enemy visual/mesh */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_MuscleGrunt.h" },
		{ "ToolTip", "/ Enemy visual/mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_EnemyMesh = { "EnemyMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_MuscleGrunt, EnemyMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_EnemyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_EnemyMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//** Movement speed */\n" },
		{ "ModuleRelativePath", "Enemy_MuscleGrunt.h" },
		{ "ToolTip", "/ Movement speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_MuscleGrunt, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//** Rotation rate */\n" },
		{ "ModuleRelativePath", "Enemy_MuscleGrunt.h" },
		{ "ToolTip", "/ Rotation rate" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_MuscleGrunt, RotationRate), METADATA_PARAMS(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_RotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//** Gravity (rate of increase in downward speed when in mid-air (unless overridden) */\n" },
		{ "ModuleRelativePath", "Enemy_MuscleGrunt.h" },
		{ "ToolTip", "/ Gravity (rate of increase in downward speed when in mid-air (unless overridden)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_MuscleGrunt, Gravity), METADATA_PARAMS(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_TerminalFallSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//** Terminal falling speed - the speed that the enemy caps at when falling */\n" },
		{ "ModuleRelativePath", "Enemy_MuscleGrunt.h" },
		{ "ToolTip", "/ Terminal falling speed - the speed that the enemy caps at when falling" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_TerminalFallSpeed = { "TerminalFallSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_MuscleGrunt, TerminalFallSpeed), METADATA_PARAMS(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_TerminalFallSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_TerminalFallSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_bPositioningSweep_MetaData[] = {
		{ "Category", "Enemy_MuscleGrunt" },
		{ "Comment", "/** Whether or not a given sweep is done purely for positioning purposes */" },
		{ "ModuleRelativePath", "Enemy_MuscleGrunt.h" },
		{ "ToolTip", "Whether or not a given sweep is done purely for positioning purposes" },
	};
#endif
	void Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_bPositioningSweep_SetBit(void* Obj)
	{
		((AEnemy_MuscleGrunt*)Obj)->bPositioningSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_bPositioningSweep = { "bPositioningSweep", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy_MuscleGrunt), &Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_bPositioningSweep_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_bPositioningSweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_bPositioningSweep_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_EnemyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_RotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_Gravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_TerminalFallSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_bPositioningSweep,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_MuscleGrunt>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::ClassParams = {
		&AEnemy_MuscleGrunt::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_MuscleGrunt()
	{
		if (!Z_Registration_Info_UClass_AEnemy_MuscleGrunt.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_MuscleGrunt.OuterSingleton, Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy_MuscleGrunt.OuterSingleton;
	}
	template<> NPROJECT1_GH_API UClass* StaticClass<AEnemy_MuscleGrunt>()
	{
		return AEnemy_MuscleGrunt::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_MuscleGrunt);
	struct Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Enemy_MuscleGrunt_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Enemy_MuscleGrunt_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_MuscleGrunt, AEnemy_MuscleGrunt::StaticClass, TEXT("AEnemy_MuscleGrunt"), &Z_Registration_Info_UClass_AEnemy_MuscleGrunt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_MuscleGrunt), 1374133053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Enemy_MuscleGrunt_h_1612277369(TEXT("/Script/Nproject1_GH"),
		Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Enemy_MuscleGrunt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Enemy_MuscleGrunt_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

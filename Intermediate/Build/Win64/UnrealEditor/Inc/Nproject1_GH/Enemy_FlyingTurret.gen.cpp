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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_AEnemyProjectile_FlyingTurret_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyBaseMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyBaseMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCannonMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCannonMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotTransform_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShotTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_Horizontal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed_Horizontal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_Vertical_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed_Vertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxProjTravelDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxProjTravelDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ShotTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanShoot_MetaData[];
#endif
		static void NewProp_bCanShoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanShoot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundShots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoundShots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundShots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShotBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YawRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurretInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretInterval_TimeLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurretInterval_TimeLeft;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_EnemyBaseMesh_MetaData[] = {
		{ "Category", "Enemy_FlyingTurret" },
		{ "Comment", "//** Enemy visual/meshes */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_FlyingTurret.h" },
		{ "ToolTip", "/ Enemy visual/meshes" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_EnemyBaseMesh = { "EnemyBaseMesh", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_FlyingTurret, EnemyBaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_EnemyBaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_EnemyBaseMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_EnemyCannonMesh_MetaData[] = {
		{ "Category", "Enemy_FlyingTurret" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_FlyingTurret.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_EnemyCannonMesh = { "EnemyCannonMesh", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_FlyingTurret, EnemyCannonMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_EnemyCannonMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_EnemyCannonMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_ShotTransform_MetaData[] = {
		{ "Category", "Enemy_FlyingTurret" },
		{ "Comment", "//** Projectile origin transform */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_FlyingTurret.h" },
		{ "ToolTip", "/ Projectile origin transform" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_ShotTransform = { "ShotTransform", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_FlyingTurret, ShotTransform), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_ShotTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_ShotTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_MovementSpeed_Horizontal_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//** Movement speed */\n" },
		{ "ModuleRelativePath", "Enemy_FlyingTurret.h" },
		{ "ToolTip", "/ Movement speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_MovementSpeed_Horizontal = { "MovementSpeed_Horizontal", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_FlyingTurret, MovementSpeed_Horizontal), METADATA_PARAMS(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_MovementSpeed_Horizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_MovementSpeed_Horizontal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_MovementSpeed_Vertical_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Enemy_FlyingTurret.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_MovementSpeed_Vertical = { "MovementSpeed_Vertical", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_FlyingTurret, MovementSpeed_Vertical), METADATA_PARAMS(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_MovementSpeed_Vertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_MovementSpeed_Vertical_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_MaxProjTravelDistance_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "//** The amount of distance a projectile can travel before it despawns */\n" },
		{ "ModuleRelativePath", "Enemy_FlyingTurret.h" },
		{ "ToolTip", "/ The amount of distance a projectile can travel before it despawns" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_MaxProjTravelDistance = { "MaxProjTravelDistance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_FlyingTurret, MaxProjTravelDistance), METADATA_PARAMS(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_MaxProjTravelDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_MaxProjTravelDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_ShotTag_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "/** The name of the projectile currently being checked when determining\n\x09whether or not the player can fire again */" },
		{ "ModuleRelativePath", "Enemy_FlyingTurret.h" },
		{ "ToolTip", "The name of the projectile currently being checked when determining\n      whether or not the player can fire again" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_ShotTag = { "ShotTag", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_FlyingTurret, ShotTag), METADATA_PARAMS(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_ShotTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_ShotTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_bCanShoot_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "/** Whether or not the enemy can actually shoot */" },
		{ "ModuleRelativePath", "Enemy_FlyingTurret.h" },
		{ "ToolTip", "Whether or not the enemy can actually shoot" },
	};
#endif
	void Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_bCanShoot_SetBit(void* Obj)
	{
		((AEnemy_FlyingTurret*)Obj)->bCanShoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_bCanShoot = { "bCanShoot", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy_FlyingTurret), &Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_bCanShoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_bCanShoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_bCanShoot_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_FoundShots_Inner = { "FoundShots", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_FoundShots_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "//** The number of fired projectiles currently in the scene */\n" },
		{ "ModuleRelativePath", "Enemy_FlyingTurret.h" },
		{ "ToolTip", "/ The number of fired projectiles currently in the scene" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_FoundShots = { "FoundShots", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_FlyingTurret, FoundShots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_FoundShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_FoundShots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_ShotBP_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "//** Projectile Blueprint */\n" },
		{ "ModuleRelativePath", "Enemy_FlyingTurret.h" },
		{ "ToolTip", "/ Projectile Blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_ShotBP = { "ShotBP", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_FlyingTurret, ShotBP), Z_Construct_UClass_AEnemyProjectile_FlyingTurret_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_ShotBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_ShotBP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_YawRotator_MetaData[] = {
		{ "Category", "Enemy_FlyingTurret" },
		{ "Comment", "/** The enemy's current yaw rotator */" },
		{ "ModuleRelativePath", "Enemy_FlyingTurret.h" },
		{ "ToolTip", "The enemy's current yaw rotator" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_YawRotator = { "YawRotator", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_FlyingTurret, YawRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_YawRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_YawRotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Enemy_FlyingTurret" },
		{ "Comment", "/** The direction the enemy is facing */" },
		{ "ModuleRelativePath", "Enemy_FlyingTurret.h" },
		{ "ToolTip", "The direction the enemy is facing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_FlyingTurret, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_TurretInterval_MetaData[] = {
		{ "Category", "Enemy_FlyingTurret" },
		{ "Comment", "/** The interval at which the enemy fires/changes direction */" },
		{ "ModuleRelativePath", "Enemy_FlyingTurret.h" },
		{ "ToolTip", "The interval at which the enemy fires/changes direction" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_TurretInterval = { "TurretInterval", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_FlyingTurret, TurretInterval), METADATA_PARAMS(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_TurretInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_TurretInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_TurretInterval_TimeLeft_MetaData[] = {
		{ "Category", "Enemy_FlyingTurret" },
		{ "Comment", "/** Remaining interval time */" },
		{ "ModuleRelativePath", "Enemy_FlyingTurret.h" },
		{ "ToolTip", "Remaining interval time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_TurretInterval_TimeLeft = { "TurretInterval_TimeLeft", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_FlyingTurret, TurretInterval_TimeLeft), METADATA_PARAMS(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_TurretInterval_TimeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_TurretInterval_TimeLeft_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_FlyingTurret_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_EnemyBaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_EnemyCannonMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_ShotTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_MovementSpeed_Horizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_MovementSpeed_Vertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_MaxProjTravelDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_ShotTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_bCanShoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_FoundShots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_FoundShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_ShotBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_YawRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_TurretInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_FlyingTurret_Statics::NewProp_TurretInterval_TimeLeft,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_FlyingTurret_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_FlyingTurret>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_FlyingTurret_Statics::ClassParams = {
		&AEnemy_FlyingTurret::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_FlyingTurret_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_FlyingTurret_Statics::PropPointers),
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
		{ Z_Construct_UClass_AEnemy_FlyingTurret, AEnemy_FlyingTurret::StaticClass, TEXT("AEnemy_FlyingTurret"), &Z_Registration_Info_UClass_AEnemy_FlyingTurret, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_FlyingTurret), 954304196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Enemy_FlyingTurret_h_2889987561(TEXT("/Script/Nproject1_GH"),
		Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Enemy_FlyingTurret_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Enemy_FlyingTurret_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

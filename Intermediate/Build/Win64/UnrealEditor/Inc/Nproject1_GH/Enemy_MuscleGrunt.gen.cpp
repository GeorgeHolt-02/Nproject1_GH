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
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(AEnemy_MuscleGrunt::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	void AEnemy_MuscleGrunt::StaticRegisterNativesAEnemy_MuscleGrunt()
	{
		UClass* Class = AEnemy_MuscleGrunt::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &AEnemy_MuscleGrunt::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics
	{
		struct Enemy_MuscleGrunt_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_MuscleGrunt_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_MuscleGrunt_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_MuscleGrunt_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_MuscleGrunt_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_MuscleGrunt_eventOnHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_HitResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called on a hit\n" },
		{ "ModuleRelativePath", "Enemy_MuscleGrunt.h" },
		{ "ToolTip", "Called on a hit" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_MuscleGrunt, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::Enemy_MuscleGrunt_eventOnHit_Parms), Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_MuscleGrunt);
	UClass* Z_Construct_UClass_AEnemy_MuscleGrunt_NoRegister()
	{
		return AEnemy_MuscleGrunt::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_MuscleGrunt_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalZSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalZSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerminalFallSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TerminalFallSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPositioningSweep_MetaData[];
#endif
		static void NewProp_bPositioningSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPositioningSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YawRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject1_GH,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_MuscleGrunt_OnHit, "OnHit" }, // 2245433723
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//** Gravity (rate of increase in downward speed when in mid-air (unless overridden) */\n" },
		{ "ModuleRelativePath", "Enemy_MuscleGrunt.h" },
		{ "ToolTip", "/ Gravity (rate of increase in downward speed when in mid-air (unless overridden)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_MuscleGrunt, Gravity), METADATA_PARAMS(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_OriginalZSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** What the Z-speed was on the previous frame */" },
		{ "ModuleRelativePath", "Enemy_MuscleGrunt.h" },
		{ "ToolTip", "What the Z-speed was on the previous frame" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_OriginalZSpeed = { "OriginalZSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_MuscleGrunt, OriginalZSpeed), METADATA_PARAMS(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_OriginalZSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_OriginalZSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_ForwardVector_MetaData[] = {
		{ "Category", "Enemy_MuscleGrunt" },
		{ "Comment", "//** Translation vectors */\n" },
		{ "ModuleRelativePath", "Enemy_MuscleGrunt.h" },
		{ "ToolTip", "/ Translation vectors" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_MuscleGrunt, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_ForwardVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_ForwardVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_RightVector_MetaData[] = {
		{ "Category", "Enemy_MuscleGrunt" },
		{ "ModuleRelativePath", "Enemy_MuscleGrunt.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_RightVector = { "RightVector", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_MuscleGrunt, RightVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_RightVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_RightVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_UpVector_MetaData[] = {
		{ "Category", "Enemy_MuscleGrunt" },
		{ "ModuleRelativePath", "Enemy_MuscleGrunt.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_MuscleGrunt, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_UpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_UpVector_MetaData)) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_YawRotator_MetaData[] = {
		{ "Category", "Enemy_MuscleGrunt" },
		{ "Comment", "/** The enemy's current yaw rotator */" },
		{ "ModuleRelativePath", "Enemy_MuscleGrunt.h" },
		{ "ToolTip", "The enemy's current yaw rotator" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_YawRotator = { "YawRotator", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_MuscleGrunt, YawRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_YawRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_YawRotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Enemy_MuscleGrunt" },
		{ "Comment", "/** The direction the enemy is facing */" },
		{ "ModuleRelativePath", "Enemy_MuscleGrunt.h" },
		{ "ToolTip", "The direction the enemy is facing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_MuscleGrunt, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_Direction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_EnemyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_Gravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_OriginalZSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_ForwardVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_RightVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_UpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_TerminalFallSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_bPositioningSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_YawRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::NewProp_Direction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_MuscleGrunt>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::ClassParams = {
		&AEnemy_MuscleGrunt::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemy_MuscleGrunt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AEnemy_MuscleGrunt, AEnemy_MuscleGrunt::StaticClass, TEXT("AEnemy_MuscleGrunt"), &Z_Registration_Info_UClass_AEnemy_MuscleGrunt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_MuscleGrunt), 1315161509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Enemy_MuscleGrunt_h_3977268647(TEXT("/Script/Nproject1_GH"),
		Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Enemy_MuscleGrunt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Enemy_MuscleGrunt_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

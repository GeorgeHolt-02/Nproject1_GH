// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/BaseEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_ABaseEnemy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_APlayerChar_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseEnemy::execOnDeath)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeath(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execOnOverlapStart)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapStart(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ABaseEnemy::StaticRegisterNativesABaseEnemy()
	{
		UClass* Class = ABaseEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDeath", &ABaseEnemy::execOnDeath },
			{ "OnOverlapStart", &ABaseEnemy::execOnOverlapStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseEnemy_OnDeath_Statics
	{
		struct BaseEnemy_eventOnDeath_Parms
		{
			AActor* DestroyedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_OnDeath_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemy_eventOnDeath_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_OnDeath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnDeath_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Adds points upon death\n" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "Adds points upon death" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "OnDeath", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_OnDeath_Statics::BaseEnemy_eventOnDeath_Parms), Z_Construct_UFunction_ABaseEnemy_OnDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnDeath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_OnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics
	{
		struct BaseEnemy_eventOnOverlapStart_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemy_eventOnOverlapStart_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemy_eventOnOverlapStart_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemy_eventOnOverlapStart_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemy_eventOnOverlapStart_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BaseEnemy_eventOnOverlapStart_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseEnemy_eventOnOverlapStart_Parms), &Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemy_eventOnOverlapStart_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called on the beginning of an overlap\n" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "Called on the beginning of an overlap" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "OnOverlapStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::BaseEnemy_eventOnOverlapStart_Parms), Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_OnOverlapStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_OnOverlapStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEnemy);
	UClass* Z_Construct_UClass_ABaseEnemy_NoRegister()
	{
		return ABaseEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointsToAward_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PointsToAward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_Current_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKillOnContact_MetaData[];
#endif
		static void NewProp_bKillOnContact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKillOnContact;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvulnTime_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InvulnTime_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvulnTime_Current_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InvulnTime_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlashTime_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlashTime_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlashTime_Current_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlashTime_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldFlash_MetaData[];
#endif
		static void NewProp_bShouldFlash_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopFlashing_MetaData[];
#endif
		static void NewProp_bStopFlashing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopFlashing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGameInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentGameInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseEnemy_OnDeath, "OnDeath" }, // 2484382312
		{ &Z_Construct_UFunction_ABaseEnemy_OnOverlapStart, "OnOverlapStart" }, // 1036320217
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseEnemy.h" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_EnemyCollider_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "Comment", "//* Enemy collision volume */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "/ Enemy collision volume" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_EnemyCollider = { "EnemyCollider", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemy, EnemyCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_EnemyCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_EnemyCollider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_PointsToAward_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "Comment", "//* Number of points to award the player upon death */\n" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "/ Number of points to award the player upon death" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_PointsToAward = { "PointsToAward", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemy, PointsToAward), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_PointsToAward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_PointsToAward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Health_Max_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "Comment", "//* Enemy health (maximum and current, respectively) */\n" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "/ Enemy health (maximum and current, respectively)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Health_Max = { "Health_Max", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemy, Health_Max), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Health_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Health_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Health_Current_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Health_Current = { "Health_Current", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemy, Health_Current), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Health_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Health_Current_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bKillOnContact_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "Comment", "//* Whether or not this enemy kills the player upon contact */\n" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "/ Whether or not this enemy kills the player upon contact" },
	};
#endif
	void Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bKillOnContact_SetBit(void* Obj)
	{
		((ABaseEnemy*)Obj)->bKillOnContact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bKillOnContact = { "bKillOnContact", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseEnemy), &Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bKillOnContact_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bKillOnContact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bKillOnContact_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_InvulnTime_Max_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "Comment", "//* Time to be invulnerable for upon spawn (maximum and current, respectively) */\n" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "/ Time to be invulnerable for upon spawn (maximum and current, respectively)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_InvulnTime_Max = { "InvulnTime_Max", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemy, InvulnTime_Max), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_InvulnTime_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_InvulnTime_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_InvulnTime_Current_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_InvulnTime_Current = { "InvulnTime_Current", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemy, InvulnTime_Current), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_InvulnTime_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_InvulnTime_Current_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_FlashTime_Max_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "Comment", "//* Time between visibility flashes (maximum and current, respectively) */\n" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "/ Time between visibility flashes (maximum and current, respectively)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_FlashTime_Max = { "FlashTime_Max", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemy, FlashTime_Max), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_FlashTime_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_FlashTime_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_FlashTime_Current_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_FlashTime_Current = { "FlashTime_Current", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemy, FlashTime_Current), METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_FlashTime_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_FlashTime_Current_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bShouldFlash_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "Comment", "//* Whether or not to flash via the flashing function */\n" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "/ Whether or not to flash via the flashing function" },
	};
#endif
	void Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bShouldFlash_SetBit(void* Obj)
	{
		((ABaseEnemy*)Obj)->bShouldFlash = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bShouldFlash = { "bShouldFlash", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseEnemy), &Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bShouldFlash_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bShouldFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bShouldFlash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bStopFlashing_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "Comment", "//* Whether or not to stop flashing via the invuln period */\n" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "/ Whether or not to stop flashing via the invuln period" },
	};
#endif
	void Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bStopFlashing_SetBit(void* Obj)
	{
		((ABaseEnemy*)Obj)->bStopFlashing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bStopFlashing = { "bStopFlashing", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseEnemy), &Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bStopFlashing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bStopFlashing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bStopFlashing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "Comment", "/** Player character reference */" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "Player character reference" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemy, Player), Z_Construct_UClass_APlayerChar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_CurrentGameInstance_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "Comment", "/** Game instance reference */" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "Game instance reference" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_CurrentGameInstance = { "CurrentGameInstance", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEnemy, CurrentGameInstance), Z_Construct_UClass_UMyGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_CurrentGameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_CurrentGameInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_EnemyCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_PointsToAward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Health_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Health_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bKillOnContact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_InvulnTime_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_InvulnTime_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_FlashTime_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_FlashTime_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bShouldFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bStopFlashing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_CurrentGameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemy_Statics::ClassParams = {
		&ABaseEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers),
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
	template<> NPROJECT2_GH_API UClass* StaticClass<ABaseEnemy>()
	{
		return ABaseEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemy);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_BaseEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_BaseEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemy, ABaseEnemy::StaticClass, TEXT("ABaseEnemy"), &Z_Registration_Info_UClass_ABaseEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemy), 1059503870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_BaseEnemy_h_1853962930(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_BaseEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_BaseEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

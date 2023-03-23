// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject1_GH/PlayerChar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerChar() {}
// Cross Module References
	NPROJECT1_GH_API UClass* Z_Construct_UClass_APlayerChar_NoRegister();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_APlayerChar();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Nproject1_GH();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_APlayerBlaster_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_APlayerShot_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UWidget_GameOver_NoRegister();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UWidget_PlayerHUD_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayerChar::execOnDeath)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeath(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerChar::execOnHit)
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
	DEFINE_FUNCTION(APlayerChar::execTakeHeavyDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeHeavyDamage(Z_Param_damage);
		P_NATIVE_END;
	}
	void APlayerChar::StaticRegisterNativesAPlayerChar()
	{
		UClass* Class = APlayerChar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDeath", &APlayerChar::execOnDeath },
			{ "OnHit", &APlayerChar::execOnHit },
			{ "TakeHeavyDamage", &APlayerChar::execTakeHeavyDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerChar_OnDeath_Statics
	{
		struct PlayerChar_eventOnDeath_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerChar_OnDeath_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerChar_eventOnDeath_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerChar_OnDeath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChar_OnDeath_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerChar_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Restarts the level when the player dies\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Restarts the level when the player dies" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "OnDeath", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerChar_OnDeath_Statics::PlayerChar_eventOnDeath_Parms), Z_Construct_UFunction_APlayerChar_OnDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_OnDeath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerChar_OnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerChar_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerChar_OnHit_Statics
	{
		struct PlayerChar_eventOnHit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerChar_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerChar_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerChar_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerChar_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerChar_eventOnHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_HitResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerChar_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChar_OnHit_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerChar_OnHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called on a hit\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Called on a hit" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerChar_OnHit_Statics::PlayerChar_eventOnHit_Parms), Z_Construct_UFunction_APlayerChar_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerChar_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerChar_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerChar_TakeHeavyDamage_Statics
	{
		struct PlayerChar_eventTakeHeavyDamage_Parms
		{
			float damage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerChar_TakeHeavyDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerChar_eventTakeHeavyDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerChar_TakeHeavyDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChar_TakeHeavyDamage_Statics::NewProp_damage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerChar_TakeHeavyDamage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Damages player based on i-frames. Called by other classes\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Damages player based on i-frames. Called by other classes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChar_TakeHeavyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerChar, nullptr, "TakeHeavyDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerChar_TakeHeavyDamage_Statics::PlayerChar_eventTakeHeavyDamage_Parms), Z_Construct_UFunction_APlayerChar_TakeHeavyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_TakeHeavyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerChar_TakeHeavyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChar_TakeHeavyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerChar_TakeHeavyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChar_TakeHeavyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerChar);
	UClass* Z_Construct_UClass_APlayerChar_NoRegister()
	{
		return APlayerChar::StaticClass();
	}
	struct Z_Construct_UClass_APlayerChar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arrow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Arrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotTransform_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShotTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlasterMesh_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlasterMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookRightRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookRightRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YawVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YawRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RollVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RollRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerminalFallSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TerminalFallSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalZSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalZSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJustJumped_MetaData[];
#endif
		static void NewProp_bJustJumped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJustJumped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxJumps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxJumps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Jumps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Jumps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShotBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxProjTravelDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxProjTravelDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxShots_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxShots;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundShots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoundShots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundShots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ShotTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInvulnTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxInvulnTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvulnTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InvulnTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPositioningSweep_MetaData[];
#endif
		static void NewProp_bPositioningSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPositioningSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_MovementInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Anim_MovementInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_bHasFired_MetaData[];
#endif
		static void NewProp_Anim_bHasFired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Anim_bHasFired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_bHasJumped_MetaData[];
#endif
		static void NewProp_Anim_bHasJumped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Anim_bHasJumped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_bInAir_MetaData[];
#endif
		static void NewProp_Anim_bInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Anim_bInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGameInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentGameInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreMultiplier_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScoreMultiplier_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreMultiplier_Current_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScoreMultiplier_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreMultiplier_ChangeBy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScoreMultiplier_ChangeBy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiplierMeter_NeededForIncrease_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiplierMeter_NeededForIncrease;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiplierMeter_Current_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiplierMeter_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiplierMeter_IncreaseBy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiplierMeter_IncreaseBy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterDecrementPauseTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MeterDecrementPauseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetMeter_MetaData[];
#endif
		static void NewProp_bResetMeter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetMeter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterSpeedCoeff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MeterSpeedCoeff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameOverRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameOverRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighScore_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_HighScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHUDref_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerHUDref;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerHUD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerChar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject1_GH,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerChar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerChar_OnDeath, "OnDeath" }, // 3330195962
		{ &Z_Construct_UFunction_APlayerChar_OnHit, "OnHit" }, // 4277259193
		{ &Z_Construct_UFunction_APlayerChar_TakeHeavyDamage, "TakeHeavyDamage" }, // 884189298
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerChar.h" },
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Player camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Player camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_Arrow_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerChar" },
		{ "Comment", "/** Arrow. Shows what direction the player is facing */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Arrow. Shows what direction the player is facing" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_Arrow = { "Arrow", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, Arrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_Arrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_Arrow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerCollider_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "Comment", "//** Player collision volume, root component */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "/ Player collision volume, root component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerCollider = { "PlayerCollider", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, PlayerCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerCollider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerTransform_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "Comment", "//** Base player transform, pseudo-root component */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "/ Base player transform, pseudo-root component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerTransform = { "PlayerTransform", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, PlayerTransform), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_ShotTransform_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "Comment", "//** Shot origin transform */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "/ Shot origin transform" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_ShotTransform = { "ShotTransform", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, ShotTransform), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_ShotTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_ShotTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerMesh_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "Comment", "//** Player visual/mesh */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "/ Player visual/mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerMesh = { "PlayerMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, PlayerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_BlasterMesh_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "Comment", "//** Blaster mesh, to be attached to hand socket */\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "/ Blaster mesh, to be attached to hand socket" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_BlasterMesh = { "BlasterMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, BlasterMesh), Z_Construct_UClass_APlayerBlaster_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_BlasterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_BlasterMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_BaseLookRightRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Camera movement rate *///(left/right)\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Camera movement rate //(left/right)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_BaseLookRightRate = { "BaseLookRightRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, BaseLookRightRate), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_BaseLookRightRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_BaseLookRightRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//(up/down)\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "(up/down)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_ForwardVector_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Movement vectors *///forward/backward\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Movement vectors //forward/backward" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_ForwardVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_ForwardVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_RightVector_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//left/right\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "left/right" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_RightVector = { "RightVector", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, RightVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_RightVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_RightVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_UpVector_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//up/down\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "up/down" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_UpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_UpVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_PitchVector_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Rotation vectors and rotator variables *///pitch\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Rotation vectors and rotator variables //pitch" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_PitchVector = { "PitchVector", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, PitchVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_PitchVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_PitchVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_PitchRotator_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_PitchRotator = { "PitchRotator", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, PitchRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_PitchRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_PitchRotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_YawVector_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "//yaw\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "yaw" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_YawVector = { "YawVector", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, YawVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_YawVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_YawVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_YawRotator_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_YawRotator = { "YawRotator", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, YawRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_YawRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_YawRotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_RollVector_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "//roll\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "roll" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_RollVector = { "RollVector", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, RollVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_RollVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_RollVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_RollRotator_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_RollRotator = { "RollRotator", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, RollRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_RollRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_RollRotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//** Normal movement speed */\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "/ Normal movement speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//** Gravity (rate of increase in downward speed when in mid-air (unless overridden) */\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "/ Gravity (rate of increase in downward speed when in mid-air (unless overridden)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, Gravity), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_TerminalFallSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//** Terminal falling speed - the speed that the player caps at when falling */\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "/ Terminal falling speed - the speed that the player caps at when falling" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_TerminalFallSpeed = { "TerminalFallSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, TerminalFallSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_TerminalFallSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_TerminalFallSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_OriginalZSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** What the player's Z-speed was on the previous frame */" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "What the player's Z-speed was on the previous frame" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_OriginalZSpeed = { "OriginalZSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, OriginalZSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_OriginalZSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_OriginalZSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_JumpForce_MetaData[] = {
		{ "Category", "Jumping" },
		{ "Comment", "//** Jump force - the amount to set our Z-speed to when the player presses jump */\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "/ Jump force - the amount to set our Z-speed to when the player presses jump" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_JumpForce = { "JumpForce", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, JumpForce), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_JumpForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_JumpForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_bJustJumped_MetaData[] = {
		{ "Category", "Jumping" },
		{ "Comment", "//** Boolean that represents whether or not the player has just jumped */\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "/ Boolean that represents whether or not the player has just jumped" },
	};
#endif
	void Z_Construct_UClass_APlayerChar_Statics::NewProp_bJustJumped_SetBit(void* Obj)
	{
		((APlayerChar*)Obj)->bJustJumped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_bJustJumped = { "bJustJumped", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerChar), &Z_Construct_UClass_APlayerChar_Statics::NewProp_bJustJumped_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_bJustJumped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_bJustJumped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxJumps_MetaData[] = {
		{ "Category", "Jumping" },
		{ "Comment", "//** Maximum number of times the player can jump before landing */\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "/ Maximum number of times the player can jump before landing" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxJumps = { "MaxJumps", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, MaxJumps), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxJumps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxJumps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_Jumps_MetaData[] = {
		{ "Category", "Jumping" },
		{ "Comment", "//** Number of times the player has jumped before landing on the ground */\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "/ Number of times the player has jumped before landing on the ground" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_Jumps = { "Jumps", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, Jumps), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_Jumps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_Jumps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_ShotBP_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "//** Projectile Blueprint */\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "/ Projectile Blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_ShotBP = { "ShotBP", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, ShotBP), Z_Construct_UClass_APlayerShot_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_ShotBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_ShotBP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxProjTravelDistance_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "//** The amount of distance a projectile can travel before it despawns */\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "/ The amount of distance a projectile can travel before it despawns" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxProjTravelDistance = { "MaxProjTravelDistance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, MaxProjTravelDistance), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxProjTravelDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxProjTravelDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxShots_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "//** The maximum number of projectiles that can be in the scene at once */\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "/ The maximum number of projectiles that can be in the scene at once" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxShots = { "MaxShots", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, MaxShots), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxShots_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_FoundShots_Inner = { "FoundShots", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_FoundShots_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "//** The number of fired projectiles currently in the scene */\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "/ The number of fired projectiles currently in the scene" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_FoundShots = { "FoundShots", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, FoundShots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_FoundShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_FoundShots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_ShotTag_MetaData[] = {
		{ "Category", "Shooting" },
		{ "Comment", "/** The name of the projectile currently being checked when determining\n\x09whether or not the player can fire again */" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "The name of the projectile currently being checked when determining\n      whether or not the player can fire again" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_ShotTag = { "ShotTag", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, ShotTag), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_ShotTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_ShotTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "/** Maximum player health */" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Maximum player health" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "/** Current player health */" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Current player health" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxInvulnTime_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "Comment", "/** Invulnerability time after taking certain hits */" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Invulnerability time after taking certain hits" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxInvulnTime = { "MaxInvulnTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, MaxInvulnTime), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxInvulnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxInvulnTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_InvulnTime_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_InvulnTime = { "InvulnTime", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, InvulnTime), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_InvulnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_InvulnTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_bPositioningSweep_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "Comment", "/** Whether or not a given sweep is done purely for positioning purposes */" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Whether or not a given sweep is done purely for positioning purposes" },
	};
#endif
	void Z_Construct_UClass_APlayerChar_Statics::NewProp_bPositioningSweep_SetBit(void* Obj)
	{
		((APlayerChar*)Obj)->bPositioningSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_bPositioningSweep = { "bPositioningSweep", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerChar), &Z_Construct_UClass_APlayerChar_Statics::NewProp_bPositioningSweep_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_bPositioningSweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_bPositioningSweep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_MovementInput_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "//Ground movement input\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Ground movement input" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_MovementInput = { "Anim_MovementInput", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, Anim_MovementInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_MovementInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_MovementInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bHasFired_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "//Whether or not the shoot button has been pressed\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Whether or not the shoot button has been pressed" },
	};
#endif
	void Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bHasFired_SetBit(void* Obj)
	{
		((APlayerChar*)Obj)->Anim_bHasFired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bHasFired = { "Anim_bHasFired", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerChar), &Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bHasFired_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bHasFired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bHasFired_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bHasJumped_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "//Whether or not the player has just jumped\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Whether or not the player has just jumped" },
	};
#endif
	void Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bHasJumped_SetBit(void* Obj)
	{
		((APlayerChar*)Obj)->Anim_bHasJumped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bHasJumped = { "Anim_bHasJumped", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerChar), &Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bHasJumped_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bHasJumped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bHasJumped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bInAir_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "//Whether or not the player is currently in mid-air\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Whether or not the player is currently in mid-air" },
	};
#endif
	void Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bInAir_SetBit(void* Obj)
	{
		((APlayerChar*)Obj)->Anim_bInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bInAir = { "Anim_bInAir", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerChar), &Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bInAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_CurrentGameInstance_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "Comment", "//Current game instance\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Current game instance" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_CurrentGameInstance = { "CurrentGameInstance", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, CurrentGameInstance), Z_Construct_UClass_UMyGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_CurrentGameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_CurrentGameInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_ScoreMultiplier_Max_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "Comment", "//Score multiplier (max, current and how much to change by, respectively)\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Score multiplier (max, current and how much to change by, respectively)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_ScoreMultiplier_Max = { "ScoreMultiplier_Max", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, ScoreMultiplier_Max), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_ScoreMultiplier_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_ScoreMultiplier_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_ScoreMultiplier_Current_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_ScoreMultiplier_Current = { "ScoreMultiplier_Current", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, ScoreMultiplier_Current), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_ScoreMultiplier_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_ScoreMultiplier_Current_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_ScoreMultiplier_ChangeBy_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_ScoreMultiplier_ChangeBy = { "ScoreMultiplier_ChangeBy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, ScoreMultiplier_ChangeBy), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_ScoreMultiplier_ChangeBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_ScoreMultiplier_ChangeBy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_MultiplierMeter_NeededForIncrease_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "Comment", "//Score multiplier meter (required for next multiplier increase, current and how much to increase by, respectively)\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Score multiplier meter (required for next multiplier increase, current and how much to increase by, respectively)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_MultiplierMeter_NeededForIncrease = { "MultiplierMeter_NeededForIncrease", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, MultiplierMeter_NeededForIncrease), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_MultiplierMeter_NeededForIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_MultiplierMeter_NeededForIncrease_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_MultiplierMeter_Current_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_MultiplierMeter_Current = { "MultiplierMeter_Current", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, MultiplierMeter_Current), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_MultiplierMeter_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_MultiplierMeter_Current_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_MultiplierMeter_IncreaseBy_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_MultiplierMeter_IncreaseBy = { "MultiplierMeter_IncreaseBy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, MultiplierMeter_IncreaseBy), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_MultiplierMeter_IncreaseBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_MultiplierMeter_IncreaseBy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_MeterDecrementPauseTime_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "Comment", "//Time to pause score multiplier meter decrementing for\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Time to pause score multiplier meter decrementing for" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_MeterDecrementPauseTime = { "MeterDecrementPauseTime", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, MeterDecrementPauseTime), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_MeterDecrementPauseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_MeterDecrementPauseTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_bResetMeter_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "Comment", "//Whether or not to reset the meter to 0 or meter max\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Whether or not to reset the meter to 0 or meter max" },
	};
#endif
	void Z_Construct_UClass_APlayerChar_Statics::NewProp_bResetMeter_SetBit(void* Obj)
	{
		((APlayerChar*)Obj)->bResetMeter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_bResetMeter = { "bResetMeter", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerChar), &Z_Construct_UClass_APlayerChar_Statics::NewProp_bResetMeter_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_bResetMeter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_bResetMeter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_MeterSpeedCoeff_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "Comment", "/* Multiplier meter speed coefficient (what we multiply delta time and the score multiplier by to define\n\x09the meter's depletion speed) */" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Multiplier meter speed coefficient (what we multiply delta time and the score multiplier by to define\n      the meter's depletion speed)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_MeterSpeedCoeff = { "MeterSpeedCoeff", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, MeterSpeedCoeff), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_MeterSpeedCoeff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_MeterSpeedCoeff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_GameOverRef_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "Comment", "// Game over widget reference\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "Game over widget reference" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_GameOverRef = { "GameOverRef", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, GameOverRef), Z_Construct_UClass_UWidget_GameOver_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_GameOverRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_GameOverRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_HighScore_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "Comment", "//\"High score\" (Score needed to reach leaderboards, or player personal best)\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "\"High score\" (Score needed to reach leaderboards, or player personal best)" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_HighScore = { "HighScore", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, HighScore), METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_HighScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_HighScore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerHUDref_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "Comment", "//HUD\n" },
		{ "ModuleRelativePath", "PlayerChar.h" },
		{ "ToolTip", "HUD" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerHUDref = { "PlayerHUDref", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, PlayerHUDref), Z_Construct_UClass_UWidget_PlayerHUD_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerHUDref_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerHUDref_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerHUD_MetaData[] = {
		{ "Category", "PlayerChar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerChar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerHUD = { "PlayerHUD", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerChar, PlayerHUD), Z_Construct_UClass_UWidget_PlayerHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerHUD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerChar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_Arrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_ShotTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_BlasterMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_BaseLookRightRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_BaseLookUpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_ForwardVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_RightVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_UpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_PitchVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_PitchRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_YawVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_YawRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_RollVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_RollRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_Gravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_TerminalFallSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_OriginalZSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_JumpForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_bJustJumped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxJumps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_Jumps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_ShotBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxProjTravelDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_FoundShots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_FoundShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_ShotTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_MaxInvulnTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_InvulnTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_bPositioningSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_MovementInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bHasFired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bHasJumped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_Anim_bInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_CurrentGameInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_ScoreMultiplier_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_ScoreMultiplier_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_ScoreMultiplier_ChangeBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_MultiplierMeter_NeededForIncrease,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_MultiplierMeter_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_MultiplierMeter_IncreaseBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_MeterDecrementPauseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_bResetMeter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_MeterSpeedCoeff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_GameOverRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_HighScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerHUDref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChar_Statics::NewProp_PlayerHUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerChar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerChar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerChar_Statics::ClassParams = {
		&APlayerChar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerChar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerChar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerChar()
	{
		if (!Z_Registration_Info_UClass_APlayerChar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerChar.OuterSingleton, Z_Construct_UClass_APlayerChar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerChar.OuterSingleton;
	}
	template<> NPROJECT1_GH_API UClass* StaticClass<APlayerChar>()
	{
		return APlayerChar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerChar);
	struct Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerChar, APlayerChar::StaticClass, TEXT("APlayerChar"), &Z_Registration_Info_UClass_APlayerChar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerChar), 3359199730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_2794723214(TEXT("/Script/Nproject1_GH"),
		Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_PlayerChar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

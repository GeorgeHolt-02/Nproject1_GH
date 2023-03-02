// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject1_GH/MyGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}
// Cross Module References
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UMyGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Nproject1_GH();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UMySaveGame_NoRegister();
	NPROJECT1_GH_API UScriptStruct* Z_Construct_UScriptStruct_FRecord();
// End Cross Module References
	DEFINE_FUNCTION(UMyGameInstance::execAddXtraLives)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddXtraLives();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyGameInstance::execLoadSpecifiedLevelByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSpecifiedLevelByName(Z_Param_LevelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyGameInstance::execLoadSpecifiedLevel)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UWorld>,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSpecifiedLevel(Z_Param_Level);
		P_NATIVE_END;
	}
	void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
	{
		UClass* Class = UMyGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddXtraLives", &UMyGameInstance::execAddXtraLives },
			{ "LoadSpecifiedLevel", &UMyGameInstance::execLoadSpecifiedLevel },
			{ "LoadSpecifiedLevelByName", &UMyGameInstance::execLoadSpecifiedLevelByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyGameInstance_AddXtraLives_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_AddXtraLives_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Grants the player 1-Ups based on score\n" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Grants the player 1-Ups based on score" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_AddXtraLives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "AddXtraLives", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_AddXtraLives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_AddXtraLives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_AddXtraLives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_AddXtraLives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevel_Statics
	{
		struct MyGameInstance_eventLoadSpecifiedLevel_Parms
		{
			TSoftObjectPtr<UWorld> Level;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventLoadSpecifiedLevel_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevel_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Loads the specified level\n" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Loads the specified level" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "LoadSpecifiedLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevel_Statics::MyGameInstance_eventLoadSpecifiedLevel_Parms), Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevelByName_Statics
	{
		struct MyGameInstance_eventLoadSpecifiedLevelByName_Parms
		{
			FName LevelName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevelByName_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventLoadSpecifiedLevelByName_Parms, LevelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevelByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevelByName_Statics::NewProp_LevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevelByName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Loads the specified level by name\n" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Loads the specified level by name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevelByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "LoadSpecifiedLevelByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevelByName_Statics::MyGameInstance_eventLoadSpecifiedLevelByName_Parms), Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevelByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevelByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevelByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevelByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevelByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevelByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameInstance);
	UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
	{
		return UMyGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLives_Starting_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerLives_Starting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLives_Max_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerLives_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLives_Current_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerLives_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreForXtraLives_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ScoreForXtraLives;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreForFirstXtraLife_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ScoreForFirstXtraLife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreForSubsequentXtraLives_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ScoreForSubsequentXtraLives;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreSinceLastXtraLife_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ScoreSinceLastXtraLife;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Levels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Levels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextLevelIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NextLevelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyNum_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EnemyNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanLoadNextLevel_MetaData[];
#endif
		static void NewProp_bCanLoadNextLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanLoadNextLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanRestart_MetaData[];
#endif
		static void NewProp_bCanRestart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRestart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SaveGameBP;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TopTenScores_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopTenScores_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TopTenScores;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPB_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerPB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject1_GH,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGameInstance_AddXtraLives, "AddXtraLives" }, // 4205036381
		{ &Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevel, "LoadSpecifiedLevel" }, // 2190585500
		{ &Z_Construct_UFunction_UMyGameInstance_LoadSpecifiedLevelByName, "LoadSpecifiedLevelByName" }, // 199089372
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerLives_Starting_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "Comment", "/** Player's lives (starting, max and current, respectively */" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Player's lives (starting, max and current, respectively" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerLives_Starting = { "PlayerLives_Starting", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, PlayerLives_Starting), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerLives_Starting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerLives_Starting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerLives_Max_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerLives_Max = { "PlayerLives_Max", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, PlayerLives_Max), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerLives_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerLives_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerLives_Current_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerLives_Current = { "PlayerLives_Current", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, PlayerLives_Current), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerLives_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerLives_Current_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerScore_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "Comment", "/** Player's current score */" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Player's current score" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, PlayerScore), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerScore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreForXtraLives_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "Comment", "/**Current score required for score 1-Ups */" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Current score required for score 1-Ups" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreForXtraLives = { "ScoreForXtraLives", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, ScoreForXtraLives), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreForXtraLives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreForXtraLives_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreForFirstXtraLife_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "Comment", "/** Score required for the player's first score 1-Up */" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Score required for the player's first score 1-Up" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreForFirstXtraLife = { "ScoreForFirstXtraLife", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, ScoreForFirstXtraLife), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreForFirstXtraLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreForFirstXtraLife_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreForSubsequentXtraLives_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "Comment", "/** Score required for subsequent score 1-Ups */" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Score required for subsequent score 1-Ups" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreForSubsequentXtraLives = { "ScoreForSubsequentXtraLives", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, ScoreForSubsequentXtraLives), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreForSubsequentXtraLives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreForSubsequentXtraLives_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreSinceLastXtraLife_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "Comment", "/** Score accumulated since last score 1-Up */" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Score accumulated since last score 1-Up" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreSinceLastXtraLife = { "ScoreSinceLastXtraLife", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, ScoreSinceLastXtraLife), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreSinceLastXtraLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreSinceLastXtraLife_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Levels_Inner = { "Levels", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Levels_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "Comment", "/** Level name array */" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Level name array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, Levels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Levels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Levels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_NextLevelIndex_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "Comment", "/** Next level's index */" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Next level's index" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_NextLevelIndex = { "NextLevelIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, NextLevelIndex), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_NextLevelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_NextLevelIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_EnemyNum_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "Comment", "/** Total number of enemies to fight in the current level */" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Total number of enemies to fight in the current level" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_EnemyNum = { "EnemyNum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, EnemyNum), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_EnemyNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_EnemyNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bCanLoadNextLevel_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "Comment", "/** Whether or not to load next level when EnemyNum <= 0 */" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Whether or not to load next level when EnemyNum <= 0" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bCanLoadNextLevel_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->bCanLoadNextLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bCanLoadNextLevel = { "bCanLoadNextLevel", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bCanLoadNextLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bCanLoadNextLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bCanLoadNextLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bCanRestart_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "Comment", "/** Whether or not to restart whenever the player dies */" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Whether or not to restart whenever the player dies" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bCanRestart_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->bCanRestart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bCanRestart = { "bCanRestart", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bCanRestart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bCanRestart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bCanRestart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_SaveGameBP_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "Comment", "//Save game class to create an object of\n" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Save game class to create an object of" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_SaveGameBP = { "SaveGameBP", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, SaveGameBP), Z_Construct_UClass_UMySaveGame_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_SaveGameBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_SaveGameBP_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TopTenScores_Inner = { "TopTenScores", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRecord, METADATA_PARAMS(nullptr, 0) }; // 646322242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TopTenScores_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "Comment", "/** Top ten scores */" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Top ten scores" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TopTenScores = { "TopTenScores", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, TopTenScores), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TopTenScores_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TopTenScores_MetaData)) }; // 646322242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerPB_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "Comment", "//Player's personal best\n" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "Player's personal best" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerPB = { "PlayerPB", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, PlayerPB), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerPB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerPB_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerLives_Starting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerLives_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerLives_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreForXtraLives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreForFirstXtraLife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreForSubsequentXtraLives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_ScoreSinceLastXtraLife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Levels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Levels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_NextLevelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_EnemyNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bCanLoadNextLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bCanRestart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_SaveGameBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TopTenScores_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_TopTenScores,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerPB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
		&UMyGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyGameInstance()
	{
		if (!Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton;
	}
	template<> NPROJECT1_GH_API UClass* StaticClass<UMyGameInstance>()
	{
		return UMyGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
	struct Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_MyGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_MyGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstance, UMyGameInstance::StaticClass, TEXT("UMyGameInstance"), &Z_Registration_Info_UClass_UMyGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstance), 3164746933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_MyGameInstance_h_4043680256(TEXT("/Script/Nproject1_GH"),
		Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_MyGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_MyGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

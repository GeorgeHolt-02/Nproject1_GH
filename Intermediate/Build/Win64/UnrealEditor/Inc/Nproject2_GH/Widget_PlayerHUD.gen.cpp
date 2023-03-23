// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/Widget_PlayerHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_PlayerHUD() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UWidget_PlayerHUD_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UWidget_PlayerHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_APlayerChar_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWidget_PlayerHUD::execSetMultiplierCanvasOpacity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMultiplierCanvasOpacity(Z_Param_CurrentMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidget_PlayerHUD::execSetMultiplierBuildUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentMeter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxMeter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMultiplierBuildUp(Z_Param_CurrentMeter,Z_Param_MaxMeter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidget_PlayerHUD::execSetMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMultiplier(Z_Param_CurrentMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidget_PlayerHUD::execSetLives)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentLives);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLives(Z_Param_CurrentLives);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidget_PlayerHUD::execSetPlayerScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentPlayerScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerScore(Z_Param_CurrentPlayerScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidget_PlayerHUD::execSetHighScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentHighScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHighScore(Z_Param_CurrentHighScore);
		P_NATIVE_END;
	}
	void UWidget_PlayerHUD::StaticRegisterNativesUWidget_PlayerHUD()
	{
		UClass* Class = UWidget_PlayerHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHighScore", &UWidget_PlayerHUD::execSetHighScore },
			{ "SetLives", &UWidget_PlayerHUD::execSetLives },
			{ "SetMultiplier", &UWidget_PlayerHUD::execSetMultiplier },
			{ "SetMultiplierBuildUp", &UWidget_PlayerHUD::execSetMultiplierBuildUp },
			{ "SetMultiplierCanvasOpacity", &UWidget_PlayerHUD::execSetMultiplierCanvasOpacity },
			{ "SetPlayerScore", &UWidget_PlayerHUD::execSetPlayerScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidget_PlayerHUD_SetHighScore_Statics
	{
		struct Widget_PlayerHUD_eventSetHighScore_Parms
		{
			int32 CurrentHighScore;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentHighScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWidget_PlayerHUD_SetHighScore_Statics::NewProp_CurrentHighScore = { "CurrentHighScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Widget_PlayerHUD_eventSetHighScore_Parms, CurrentHighScore), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_PlayerHUD_SetHighScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_PlayerHUD_SetHighScore_Statics::NewProp_CurrentHighScore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_PlayerHUD_SetHighScore_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Functions used to update the above widgets\n" },
		{ "ModuleRelativePath", "Widget_PlayerHUD.h" },
		{ "ToolTip", "Functions used to update the above widgets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_PlayerHUD_SetHighScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_PlayerHUD, nullptr, "SetHighScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidget_PlayerHUD_SetHighScore_Statics::Widget_PlayerHUD_eventSetHighScore_Parms), Z_Construct_UFunction_UWidget_PlayerHUD_SetHighScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PlayerHUD_SetHighScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_PlayerHUD_SetHighScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PlayerHUD_SetHighScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_PlayerHUD_SetHighScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_PlayerHUD_SetHighScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidget_PlayerHUD_SetLives_Statics
	{
		struct Widget_PlayerHUD_eventSetLives_Parms
		{
			int32 CurrentLives;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentLives;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWidget_PlayerHUD_SetLives_Statics::NewProp_CurrentLives = { "CurrentLives", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Widget_PlayerHUD_eventSetLives_Parms, CurrentLives), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_PlayerHUD_SetLives_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_PlayerHUD_SetLives_Statics::NewProp_CurrentLives,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_PlayerHUD_SetLives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_PlayerHUD_SetLives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_PlayerHUD, nullptr, "SetLives", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidget_PlayerHUD_SetLives_Statics::Widget_PlayerHUD_eventSetLives_Parms), Z_Construct_UFunction_UWidget_PlayerHUD_SetLives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PlayerHUD_SetLives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_PlayerHUD_SetLives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PlayerHUD_SetLives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_PlayerHUD_SetLives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_PlayerHUD_SetLives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplier_Statics
	{
		struct Widget_PlayerHUD_eventSetMultiplier_Parms
		{
			float CurrentMultiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplier_Statics::NewProp_CurrentMultiplier = { "CurrentMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Widget_PlayerHUD_eventSetMultiplier_Parms, CurrentMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplier_Statics::NewProp_CurrentMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_PlayerHUD, nullptr, "SetMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplier_Statics::Widget_PlayerHUD_eventSetMultiplier_Parms), Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierBuildUp_Statics
	{
		struct Widget_PlayerHUD_eventSetMultiplierBuildUp_Parms
		{
			float CurrentMeter;
			float MaxMeter;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMeter;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMeter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierBuildUp_Statics::NewProp_CurrentMeter = { "CurrentMeter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Widget_PlayerHUD_eventSetMultiplierBuildUp_Parms, CurrentMeter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierBuildUp_Statics::NewProp_MaxMeter = { "MaxMeter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Widget_PlayerHUD_eventSetMultiplierBuildUp_Parms, MaxMeter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierBuildUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierBuildUp_Statics::NewProp_CurrentMeter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierBuildUp_Statics::NewProp_MaxMeter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierBuildUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierBuildUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_PlayerHUD, nullptr, "SetMultiplierBuildUp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierBuildUp_Statics::Widget_PlayerHUD_eventSetMultiplierBuildUp_Parms), Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierBuildUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierBuildUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierBuildUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierBuildUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierBuildUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierBuildUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierCanvasOpacity_Statics
	{
		struct Widget_PlayerHUD_eventSetMultiplierCanvasOpacity_Parms
		{
			float CurrentMultiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierCanvasOpacity_Statics::NewProp_CurrentMultiplier = { "CurrentMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Widget_PlayerHUD_eventSetMultiplierCanvasOpacity_Parms, CurrentMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierCanvasOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierCanvasOpacity_Statics::NewProp_CurrentMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierCanvasOpacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierCanvasOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_PlayerHUD, nullptr, "SetMultiplierCanvasOpacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierCanvasOpacity_Statics::Widget_PlayerHUD_eventSetMultiplierCanvasOpacity_Parms), Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierCanvasOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierCanvasOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierCanvasOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierCanvasOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierCanvasOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierCanvasOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidget_PlayerHUD_SetPlayerScore_Statics
	{
		struct Widget_PlayerHUD_eventSetPlayerScore_Parms
		{
			int32 CurrentPlayerScore;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentPlayerScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWidget_PlayerHUD_SetPlayerScore_Statics::NewProp_CurrentPlayerScore = { "CurrentPlayerScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Widget_PlayerHUD_eventSetPlayerScore_Parms, CurrentPlayerScore), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_PlayerHUD_SetPlayerScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_PlayerHUD_SetPlayerScore_Statics::NewProp_CurrentPlayerScore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_PlayerHUD_SetPlayerScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_PlayerHUD_SetPlayerScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_PlayerHUD, nullptr, "SetPlayerScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidget_PlayerHUD_SetPlayerScore_Statics::Widget_PlayerHUD_eventSetPlayerScore_Parms), Z_Construct_UFunction_UWidget_PlayerHUD_SetPlayerScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PlayerHUD_SetPlayerScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_PlayerHUD_SetPlayerScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PlayerHUD_SetPlayerScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_PlayerHUD_SetPlayerScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_PlayerHUD_SetPlayerScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidget_PlayerHUD);
	UClass* Z_Construct_UClass_UWidget_PlayerHUD_NoRegister()
	{
		return UWidget_PlayerHUD::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_PlayerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighScoreTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HighScoreTextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerScoreTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerScoreTextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LivesTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LivesTextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiplierTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiplierTextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiplierBuildupBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiplierBuildupBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiplierCanvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiplierCanvas;
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
	UObject* (*const Z_Construct_UClass_UWidget_PlayerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidget_PlayerHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidget_PlayerHUD_SetHighScore, "SetHighScore" }, // 3423751746
		{ &Z_Construct_UFunction_UWidget_PlayerHUD_SetLives, "SetLives" }, // 3525151314
		{ &Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplier, "SetMultiplier" }, // 2838784192
		{ &Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierBuildUp, "SetMultiplierBuildUp" }, // 1992728879
		{ &Z_Construct_UFunction_UWidget_PlayerHUD_SetMultiplierCanvasOpacity, "SetMultiplierCanvasOpacity" }, // 1873037365
		{ &Z_Construct_UFunction_UWidget_PlayerHUD_SetPlayerScore, "SetPlayerScore" }, // 952764683
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_PlayerHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget_PlayerHUD.h" },
		{ "ModuleRelativePath", "Widget_PlayerHUD.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_HighScoreTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_PlayerHUD" },
		{ "Comment", "/* High score text widget */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_PlayerHUD.h" },
		{ "ToolTip", "High score text widget" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_HighScoreTextBlock = { "HighScoreTextBlock", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_PlayerHUD, HighScoreTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_HighScoreTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_HighScoreTextBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_PlayerScoreTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_PlayerHUD" },
		{ "Comment", "/* Player score text widget */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_PlayerHUD.h" },
		{ "ToolTip", "Player score text widget" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_PlayerScoreTextBlock = { "PlayerScoreTextBlock", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_PlayerHUD, PlayerScoreTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_PlayerScoreTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_PlayerScoreTextBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_LivesTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_PlayerHUD" },
		{ "Comment", "/* Life count text widget */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_PlayerHUD.h" },
		{ "ToolTip", "Life count text widget" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_LivesTextBlock = { "LivesTextBlock", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_PlayerHUD, LivesTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_LivesTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_LivesTextBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_MultiplierTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_PlayerHUD" },
		{ "Comment", "/* Score multiplier text widget */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_PlayerHUD.h" },
		{ "ToolTip", "Score multiplier text widget" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_MultiplierTextBlock = { "MultiplierTextBlock", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_PlayerHUD, MultiplierTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_MultiplierTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_MultiplierTextBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_MultiplierBuildupBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_PlayerHUD" },
		{ "Comment", "/* Score multiplier meter widget */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_PlayerHUD.h" },
		{ "ToolTip", "Score multiplier meter widget" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_MultiplierBuildupBar = { "MultiplierBuildupBar", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_PlayerHUD, MultiplierBuildupBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_MultiplierBuildupBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_MultiplierBuildupBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_MultiplierCanvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_PlayerHUD" },
		{ "Comment", "/* Canvas for the multiplier widgets */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_PlayerHUD.h" },
		{ "ToolTip", "Canvas for the multiplier widgets" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_MultiplierCanvas = { "MultiplierCanvas", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_PlayerHUD, MultiplierCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_MultiplierCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_MultiplierCanvas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "Widget_PlayerHUD" },
		{ "Comment", "/* Player character reference */" },
		{ "ModuleRelativePath", "Widget_PlayerHUD.h" },
		{ "ToolTip", "Player character reference" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_PlayerHUD, Player), Z_Construct_UClass_APlayerChar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_CurrentGameInstance_MetaData[] = {
		{ "Category", "Widget_PlayerHUD" },
		{ "Comment", "/* Game instance reference */" },
		{ "ModuleRelativePath", "Widget_PlayerHUD.h" },
		{ "ToolTip", "Game instance reference" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_CurrentGameInstance = { "CurrentGameInstance", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_PlayerHUD, CurrentGameInstance), Z_Construct_UClass_UMyGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_CurrentGameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_CurrentGameInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_PlayerHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_HighScoreTextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_PlayerScoreTextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_LivesTextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_MultiplierTextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_MultiplierBuildupBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_MultiplierCanvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PlayerHUD_Statics::NewProp_CurrentGameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_PlayerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_PlayerHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_PlayerHUD_Statics::ClassParams = {
		&UWidget_PlayerHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidget_PlayerHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PlayerHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidget_PlayerHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PlayerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidget_PlayerHUD()
	{
		if (!Z_Registration_Info_UClass_UWidget_PlayerHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_PlayerHUD.OuterSingleton, Z_Construct_UClass_UWidget_PlayerHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidget_PlayerHUD.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<UWidget_PlayerHUD>()
	{
		return UWidget_PlayerHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_PlayerHUD);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_PlayerHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_PlayerHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_PlayerHUD, UWidget_PlayerHUD::StaticClass, TEXT("UWidget_PlayerHUD"), &Z_Registration_Info_UClass_UWidget_PlayerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_PlayerHUD), 3786700337U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_PlayerHUD_h_2513388746(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_PlayerHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_PlayerHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

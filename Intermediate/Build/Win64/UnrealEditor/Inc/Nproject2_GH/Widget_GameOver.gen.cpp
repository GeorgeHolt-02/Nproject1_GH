// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/Widget_GameOver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_GameOver() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UWidget_GameOver_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UWidget_GameOver();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	NPROJECT2_GH_API UScriptStruct* Z_Construct_UScriptStruct_FRecord();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UMySaveGame_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UTextWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UWidget_Initial_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWidget_GameOver::execResetButtonKeyboardFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetButtonKeyboardFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidget_GameOver::execFinishEntry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishEntry();
		P_NATIVE_END;
	}
	void UWidget_GameOver::StaticRegisterNativesUWidget_GameOver()
	{
		UClass* Class = UWidget_GameOver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishEntry", &UWidget_GameOver::execFinishEntry },
			{ "ResetButtonKeyboardFocus", &UWidget_GameOver::execResetButtonKeyboardFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidget_GameOver_FinishEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_GameOver_FinishEntry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_GameOver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GameOver_FinishEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_GameOver, nullptr, "FinishEntry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_GameOver_FinishEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GameOver_FinishEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_GameOver_FinishEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GameOver_FinishEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidget_GameOver_ResetButtonKeyboardFocus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_GameOver_ResetButtonKeyboardFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_GameOver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_GameOver_ResetButtonKeyboardFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_GameOver, nullptr, "ResetButtonKeyboardFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_GameOver_ResetButtonKeyboardFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_GameOver_ResetButtonKeyboardFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_GameOver_ResetButtonKeyboardFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_GameOver_ResetButtonKeyboardFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidget_GameOver);
	UClass* Z_Construct_UClass_UWidget_GameOver_NoRegister()
	{
		return UWidget_GameOver::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_GameOver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TopTenScores_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopTenScores_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TopTenScores;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SaveGameBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordTextRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RecordTextRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RecordBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InitialRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinishButtonRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FinishButtonRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinishButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FinishButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialsBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InitialsBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinishButtonBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FinishButtonBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedInitial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedInitial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InitialIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGameInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentGameInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BG_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BG_Button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RecordIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRecord_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRecord;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InitialsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InitialsArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameResetTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GameResetTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetTimerActive_MetaData[];
#endif
		static void NewProp_bResetTimerActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetTimerActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountdownTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CountdownTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountdownTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CountdownTextBlock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidget_GameOver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidget_GameOver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidget_GameOver_FinishEntry, "FinishEntry" }, // 738476512
		{ &Z_Construct_UFunction_UWidget_GameOver_ResetButtonKeyboardFocus, "ResetButtonKeyboardFocus" }, // 3586515355
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget_GameOver.h" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_TopTenScores_Inner = { "TopTenScores", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRecord, METADATA_PARAMS(nullptr, 0) }; // 757712881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_TopTenScores_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Array of the top ten highest recorded scores for this copy of this build of the game\n" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Array of the top ten highest recorded scores for this copy of this build of the game" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_TopTenScores = { "TopTenScores", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, TopTenScores), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_TopTenScores_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_TopTenScores_MetaData)) }; // 757712881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_SaveGameBP_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Save game class to create an object of\n" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Save game class to create an object of" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_SaveGameBP = { "SaveGameBP", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, SaveGameBP), Z_Construct_UClass_UMySaveGame_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_SaveGameBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_SaveGameBP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordTextRef_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Record text reference\n" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Record text reference" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordTextRef = { "RecordTextRef", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, RecordTextRef), Z_Construct_UClass_UTextWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordTextRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordTextRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Leaderboards box\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Leaderboards box" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordBox = { "RecordBox", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, RecordBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialRef_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Initial entry widget reference\n" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Initial entry widget reference" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialRef = { "InitialRef", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, InitialRef), Z_Construct_UClass_UWidget_Initial_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_FinishButtonRef_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Finish button\n" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Finish button" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_FinishButtonRef = { "FinishButtonRef", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, FinishButtonRef), Z_Construct_UClass_UButtonWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_FinishButtonRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_FinishButtonRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_FinishButton_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_FinishButton = { "FinishButton", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, FinishButton), Z_Construct_UClass_UButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_FinishButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_FinishButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialsBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Initials box\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Initials box" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialsBox = { "InitialsBox", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, InitialsBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialsBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialsBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_FinishButtonBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//This box contains the finish button\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "This box contains the finish button" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_FinishButtonBox = { "FinishButtonBox", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, FinishButtonBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_FinishButtonBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_FinishButtonBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_SelectedInitial_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Currently-selected initial\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Currently-selected initial" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_SelectedInitial = { "SelectedInitial", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, SelectedInitial), Z_Construct_UClass_UWidget_Initial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_SelectedInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_SelectedInitial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialIndex_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Index determining which initial is highlighted\n" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Index determining which initial is highlighted" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialIndex = { "InitialIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, InitialIndex), METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_CurrentGameInstance_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Game instance reference\n" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Game instance reference" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_CurrentGameInstance = { "CurrentGameInstance", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, CurrentGameInstance), Z_Construct_UClass_UMyGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_CurrentGameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_CurrentGameInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_BG_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Background button\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Background button" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_BG_Button = { "BG_Button", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, BG_Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_BG_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_BG_Button_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordIndex_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Player's score index\n" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Player's score index" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordIndex = { "RecordIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, RecordIndex), METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_PlayerRecord_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Player's score record text widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Player's score record text widget" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_PlayerRecord = { "PlayerRecord", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, PlayerRecord), Z_Construct_UClass_UTextWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_PlayerRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_PlayerRecord_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialsArray_Inner = { "InitialsArray", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidget_Initial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialsArray_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Initial widget array\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Initial widget array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialsArray = { "InitialsArray", nullptr, (EPropertyFlags)0x001000800002000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, InitialsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialsArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_GameResetTimer_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Reset timer\n" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Reset timer" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_GameResetTimer = { "GameResetTimer", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, GameResetTimer), METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_GameResetTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_GameResetTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_bResetTimerActive_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Whether or not the reset timer should be active\n" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Whether or not the reset timer should be active" },
	};
#endif
	void Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_bResetTimerActive_SetBit(void* Obj)
	{
		((UWidget_GameOver*)Obj)->bResetTimerActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_bResetTimerActive = { "bResetTimerActive", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidget_GameOver), &Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_bResetTimerActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_bResetTimerActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_bResetTimerActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Player controller reference\n" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Player controller reference" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_CountdownTime_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Name entry countdown timer\n" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Name entry countdown timer" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_CountdownTime = { "CountdownTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, CountdownTime), METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_CountdownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_CountdownTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_CountdownTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Countdown text block\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Countdown text block" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_CountdownTextBlock = { "CountdownTextBlock", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, CountdownTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_CountdownTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_CountdownTextBlock_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_GameOver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_TopTenScores_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_TopTenScores,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_SaveGameBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordTextRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_FinishButtonRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_FinishButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialsBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_FinishButtonBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_SelectedInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_CurrentGameInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_BG_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_PlayerRecord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_GameResetTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_bResetTimerActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_CountdownTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_CountdownTextBlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_GameOver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_GameOver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_GameOver_Statics::ClassParams = {
		&UWidget_GameOver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidget_GameOver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidget_GameOver()
	{
		if (!Z_Registration_Info_UClass_UWidget_GameOver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_GameOver.OuterSingleton, Z_Construct_UClass_UWidget_GameOver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidget_GameOver.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<UWidget_GameOver>()
	{
		return UWidget_GameOver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_GameOver);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_GameOver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_GameOver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_GameOver, UWidget_GameOver::StaticClass, TEXT("UWidget_GameOver"), &Z_Registration_Info_UClass_UWidget_GameOver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_GameOver), 2174762895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_GameOver_h_3215219760(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_GameOver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_GameOver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

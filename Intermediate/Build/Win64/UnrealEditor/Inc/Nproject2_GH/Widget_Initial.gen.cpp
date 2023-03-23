// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/Widget_Initial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_Initial() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UWidget_Initial_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UWidget_Initial();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UWidget_Char_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UButtonWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWidget_Initial::execDownButtonReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownButtonReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidget_Initial::execUpButtonReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpButtonReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidget_Initial::execDownButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidget_Initial::execUpButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpButtonPressed();
		P_NATIVE_END;
	}
	void UWidget_Initial::StaticRegisterNativesUWidget_Initial()
	{
		UClass* Class = UWidget_Initial::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DownButtonPressed", &UWidget_Initial::execDownButtonPressed },
			{ "DownButtonReleased", &UWidget_Initial::execDownButtonReleased },
			{ "UpButtonPressed", &UWidget_Initial::execUpButtonPressed },
			{ "UpButtonReleased", &UWidget_Initial::execUpButtonReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidget_Initial_DownButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_Initial_DownButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_Initial.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_Initial_DownButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_Initial, nullptr, "DownButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_Initial_DownButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_Initial_DownButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_Initial_DownButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_Initial_DownButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidget_Initial_DownButtonReleased_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_Initial_DownButtonReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_Initial.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_Initial_DownButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_Initial, nullptr, "DownButtonReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_Initial_DownButtonReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_Initial_DownButtonReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_Initial_DownButtonReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_Initial_DownButtonReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidget_Initial_UpButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_Initial_UpButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Button press listeners\n" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
		{ "ToolTip", "Button press listeners" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_Initial_UpButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_Initial, nullptr, "UpButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_Initial_UpButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_Initial_UpButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_Initial_UpButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_Initial_UpButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidget_Initial_UpButtonReleased_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_Initial_UpButtonReleased_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Button release listeners\n" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
		{ "ToolTip", "Button release listeners" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_Initial_UpButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_Initial, nullptr, "UpButtonReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_Initial_UpButtonReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_Initial_UpButtonReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_Initial_UpButtonReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_Initial_UpButtonReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidget_Initial);
	UClass* Z_Construct_UClass_UWidget_Initial_NoRegister()
	{
		return UWidget_Initial::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_Initial_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentsBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContentsBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CharRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Char_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Char;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpArrowRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UpArrowRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownArrowRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DownArrowRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DownButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Characters_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Characters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharactersIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CharactersIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpPressed_MetaData[];
#endif
		static void NewProp_bUpPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDownPressed_MetaData[];
#endif
		static void NewProp_bDownPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDownPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CycleRate_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CycleRate_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CycleRate_Current_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CycleRate_Current;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidget_Initial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidget_Initial_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidget_Initial_DownButtonPressed, "DownButtonPressed" }, // 2256918378
		{ &Z_Construct_UFunction_UWidget_Initial_DownButtonReleased, "DownButtonReleased" }, // 1477900056
		{ &Z_Construct_UFunction_UWidget_Initial_UpButtonPressed, "UpButtonPressed" }, // 758791225
		{ &Z_Construct_UFunction_UWidget_Initial_UpButtonReleased, "UpButtonReleased" }, // 1988399705
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Initial_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget_Initial.h" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Initial_Statics::NewProp_ContentsBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_Initial" },
		{ "Comment", "//The vertical box containing the nav buttons and the letter\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
		{ "ToolTip", "The vertical box containing the nav buttons and the letter" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Initial_Statics::NewProp_ContentsBox = { "ContentsBox", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Initial, ContentsBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_ContentsBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_ContentsBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CharRef_MetaData[] = {
		{ "Category", "Widget_Initial" },
		{ "Comment", "//The character that the effects of clicking the nav buttons change\n" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
		{ "ToolTip", "The character that the effects of clicking the nav buttons change" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CharRef = { "CharRef", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Initial, CharRef), Z_Construct_UClass_UWidget_Char_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CharRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CharRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Initial_Statics::NewProp_Char_MetaData[] = {
		{ "Category", "Widget_Initial" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Initial_Statics::NewProp_Char = { "Char", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Initial, Char), Z_Construct_UClass_UWidget_Char_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_Char_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_Char_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Initial_Statics::NewProp_UpArrowRef_MetaData[] = {
		{ "Category", "Widget_Initial" },
		{ "Comment", "//The up arrow that cycles backwards through the character string\n" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
		{ "ToolTip", "The up arrow that cycles backwards through the character string" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidget_Initial_Statics::NewProp_UpArrowRef = { "UpArrowRef", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Initial, UpArrowRef), Z_Construct_UClass_UButtonWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_UpArrowRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_UpArrowRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Initial_Statics::NewProp_UpButton_MetaData[] = {
		{ "Category", "Widget_Initial" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Initial_Statics::NewProp_UpButton = { "UpButton", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Initial, UpButton), Z_Construct_UClass_UButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_UpButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_UpButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Initial_Statics::NewProp_DownArrowRef_MetaData[] = {
		{ "Category", "Widget_Initial" },
		{ "Comment", "//The down arrow that cycles forwards through the character string\n" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
		{ "ToolTip", "The down arrow that cycles forwards through the character string" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidget_Initial_Statics::NewProp_DownArrowRef = { "DownArrowRef", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Initial, DownArrowRef), Z_Construct_UClass_UButtonWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_DownArrowRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_DownArrowRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Initial_Statics::NewProp_DownButton_MetaData[] = {
		{ "Category", "Widget_Initial" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Initial_Statics::NewProp_DownButton = { "DownButton", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Initial, DownButton), Z_Construct_UClass_UButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_DownButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_DownButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Initial_Statics::NewProp_Characters_MetaData[] = {
		{ "Category", "Widget_Initial" },
		{ "Comment", "//The characters the player can enter\n" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
		{ "ToolTip", "The characters the player can enter" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWidget_Initial_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Initial, Characters), METADATA_PARAMS(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_Characters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_Characters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CharactersIndex_MetaData[] = {
		{ "Category", "Widget_Initial" },
		{ "Comment", "//Current index of the character string\n" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
		{ "ToolTip", "Current index of the character string" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CharactersIndex = { "CharactersIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Initial, CharactersIndex), METADATA_PARAMS(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CharactersIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CharactersIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Initial_Statics::NewProp_bUpPressed_MetaData[] = {
		{ "Category", "Widget_Initial" },
		{ "Comment", "//Button press booleans\n" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
		{ "ToolTip", "Button press booleans" },
	};
#endif
	void Z_Construct_UClass_UWidget_Initial_Statics::NewProp_bUpPressed_SetBit(void* Obj)
	{
		((UWidget_Initial*)Obj)->bUpPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidget_Initial_Statics::NewProp_bUpPressed = { "bUpPressed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidget_Initial), &Z_Construct_UClass_UWidget_Initial_Statics::NewProp_bUpPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_bUpPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_bUpPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Initial_Statics::NewProp_bDownPressed_MetaData[] = {
		{ "Category", "Widget_Initial" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
	};
#endif
	void Z_Construct_UClass_UWidget_Initial_Statics::NewProp_bDownPressed_SetBit(void* Obj)
	{
		((UWidget_Initial*)Obj)->bDownPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidget_Initial_Statics::NewProp_bDownPressed = { "bDownPressed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidget_Initial), &Z_Construct_UClass_UWidget_Initial_Statics::NewProp_bDownPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_bDownPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_bDownPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CycleRate_Max_MetaData[] = {
		{ "Category", "Widget_Initial" },
		{ "Comment", "//Time until next cycle (max and current, respectively)\n" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
		{ "ToolTip", "Time until next cycle (max and current, respectively)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CycleRate_Max = { "CycleRate_Max", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Initial, CycleRate_Max), METADATA_PARAMS(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CycleRate_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CycleRate_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CycleRate_Current_MetaData[] = {
		{ "Category", "Widget_Initial" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CycleRate_Current = { "CycleRate_Current", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Initial, CycleRate_Current), METADATA_PARAMS(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CycleRate_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CycleRate_Current_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_Initial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_ContentsBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CharRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_Char,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_UpArrowRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_UpButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_DownArrowRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_DownButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_Characters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CharactersIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_bUpPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_bDownPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CycleRate_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CycleRate_Current,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_Initial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_Initial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_Initial_Statics::ClassParams = {
		&UWidget_Initial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidget_Initial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidget_Initial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidget_Initial()
	{
		if (!Z_Registration_Info_UClass_UWidget_Initial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_Initial.OuterSingleton, Z_Construct_UClass_UWidget_Initial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidget_Initial.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<UWidget_Initial>()
	{
		return UWidget_Initial::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_Initial);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_Initial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_Initial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_Initial, UWidget_Initial::StaticClass, TEXT("UWidget_Initial"), &Z_Registration_Info_UClass_UWidget_Initial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_Initial), 927779046U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_Initial_h_3157198439(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_Initial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_Initial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

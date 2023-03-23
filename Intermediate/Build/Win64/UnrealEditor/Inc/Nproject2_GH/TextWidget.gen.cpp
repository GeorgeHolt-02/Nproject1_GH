// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/TextWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextWidget() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UTextWidget_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UTextWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTextWidget::execSetData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ranking);
		P_GET_PROPERTY(FStrProperty,Z_Param_inits);
		P_GET_PROPERTY(FIntProperty,Z_Param_points);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_ranking,Z_Param_inits,Z_Param_points);
		P_NATIVE_END;
	}
	void UTextWidget::StaticRegisterNativesUTextWidget()
	{
		UClass* Class = UTextWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &UTextWidget::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextWidget_SetData_Statics
	{
		struct TextWidget_eventSetData_Parms
		{
			int32 ranking;
			FString inits;
			int32 points;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ranking;
		static const UECodeGen_Private::FStrPropertyParams NewProp_inits;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTextWidget_SetData_Statics::NewProp_ranking = { "ranking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextWidget_eventSetData_Parms, ranking), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextWidget_SetData_Statics::NewProp_inits = { "inits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextWidget_eventSetData_Parms, inits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTextWidget_SetData_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextWidget_eventSetData_Parms, points), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextWidget_SetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextWidget_SetData_Statics::NewProp_ranking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextWidget_SetData_Statics::NewProp_inits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextWidget_SetData_Statics::NewProp_points,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TextWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextWidget, nullptr, "SetData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextWidget_SetData_Statics::TextWidget_eventSetData_Parms), Z_Construct_UFunction_UTextWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextWidget);
	UClass* Z_Construct_UClass_UTextWidget_NoRegister()
	{
		return UTextWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTextWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopTenRanking_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TopTenRanking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Initials_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Initials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ScoreString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanUpdate_MetaData[];
#endif
		static void NewProp_bCanUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextWidget_SetData, "SetData" }, // 723536360
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TextWidget.h" },
		{ "ModuleRelativePath", "TextWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextWidget_Statics::NewProp_Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TextWidget" },
		{ "Comment", "//Text Block\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TextWidget.h" },
		{ "ToolTip", "Text Block" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextWidget_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextWidget, Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextWidget_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextWidget_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextWidget_Statics::NewProp_TopTenRanking_MetaData[] = {
		{ "Category", "TextWidget" },
		{ "Comment", "//Where it ranks on the top ten\n" },
		{ "ModuleRelativePath", "TextWidget.h" },
		{ "ToolTip", "Where it ranks on the top ten" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTextWidget_Statics::NewProp_TopTenRanking = { "TopTenRanking", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextWidget, TopTenRanking), METADATA_PARAMS(Z_Construct_UClass_UTextWidget_Statics::NewProp_TopTenRanking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextWidget_Statics::NewProp_TopTenRanking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextWidget_Statics::NewProp_Initials_MetaData[] = {
		{ "Category", "TextWidget" },
		{ "Comment", "//Initials entered\n" },
		{ "ModuleRelativePath", "TextWidget.h" },
		{ "ToolTip", "Initials entered" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTextWidget_Statics::NewProp_Initials = { "Initials", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextWidget, Initials), METADATA_PARAMS(Z_Construct_UClass_UTextWidget_Statics::NewProp_Initials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextWidget_Statics::NewProp_Initials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextWidget_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "TextWidget" },
		{ "Comment", "//Score\n" },
		{ "ModuleRelativePath", "TextWidget.h" },
		{ "ToolTip", "Score" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTextWidget_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextWidget, Score), METADATA_PARAMS(Z_Construct_UClass_UTextWidget_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextWidget_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextWidget_Statics::NewProp_ScoreString_MetaData[] = {
		{ "Category", "TextWidget" },
		{ "Comment", "//Score string\n" },
		{ "ModuleRelativePath", "TextWidget.h" },
		{ "ToolTip", "Score string" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTextWidget_Statics::NewProp_ScoreString = { "ScoreString", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextWidget, ScoreString), METADATA_PARAMS(Z_Construct_UClass_UTextWidget_Statics::NewProp_ScoreString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextWidget_Statics::NewProp_ScoreString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextWidget_Statics::NewProp_bCanUpdate_MetaData[] = {
		{ "Category", "TextWidget" },
		{ "Comment", "//Whether or not to update\n" },
		{ "ModuleRelativePath", "TextWidget.h" },
		{ "ToolTip", "Whether or not to update" },
	};
#endif
	void Z_Construct_UClass_UTextWidget_Statics::NewProp_bCanUpdate_SetBit(void* Obj)
	{
		((UTextWidget*)Obj)->bCanUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextWidget_Statics::NewProp_bCanUpdate = { "bCanUpdate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTextWidget), &Z_Construct_UClass_UTextWidget_Statics::NewProp_bCanUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextWidget_Statics::NewProp_bCanUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextWidget_Statics::NewProp_bCanUpdate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextWidget_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextWidget_Statics::NewProp_TopTenRanking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextWidget_Statics::NewProp_Initials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextWidget_Statics::NewProp_Score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextWidget_Statics::NewProp_ScoreString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextWidget_Statics::NewProp_bCanUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextWidget_Statics::ClassParams = {
		&UTextWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTextWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextWidget()
	{
		if (!Z_Registration_Info_UClass_UTextWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextWidget.OuterSingleton, Z_Construct_UClass_UTextWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextWidget.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<UTextWidget>()
	{
		return UTextWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextWidget);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_TextWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_TextWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextWidget, UTextWidget::StaticClass, TEXT("UTextWidget"), &Z_Registration_Info_UClass_UTextWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextWidget), 3458988043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_TextWidget_h_819859857(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_TextWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_TextWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

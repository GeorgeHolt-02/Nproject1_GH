// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject1_GH/Widget_GameOver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_GameOver() {}
// Cross Module References
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UWidget_GameOver_NoRegister();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UWidget_GameOver();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Nproject1_GH();
	NPROJECT1_GH_API UScriptStruct* Z_Construct_UScriptStruct_FRecord();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UMySaveGame_NoRegister();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UTextWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UWidget_Initial_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
// End Cross Module References
	void UWidget_GameOver::StaticRegisterNativesUWidget_GameOver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidget_GameOver);
	UClass* Z_Construct_UClass_UWidget_GameOver_NoRegister()
	{
		return UWidget_GameOver::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_GameOver_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialsBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InitialsBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidget_GameOver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject1_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget_GameOver.h" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_TopTenScores_Inner = { "TopTenScores", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRecord, METADATA_PARAMS(nullptr, 0) }; // 646322242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_TopTenScores_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Array of the top ten highest recorded scores for this copy of this build of the game\n" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Array of the top ten highest recorded scores for this copy of this build of the game" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_TopTenScores = { "TopTenScores", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, TopTenScores), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_TopTenScores_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_TopTenScores_MetaData)) }; // 646322242
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_GameOver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_TopTenScores_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_TopTenScores,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_SaveGameBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordTextRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_RecordBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitialsBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_GameOver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_GameOver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_GameOver_Statics::ClassParams = {
		&UWidget_GameOver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidget_GameOver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	template<> NPROJECT1_GH_API UClass* StaticClass<UWidget_GameOver>()
	{
		return UWidget_GameOver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_GameOver);
	struct Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Widget_GameOver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Widget_GameOver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_GameOver, UWidget_GameOver::StaticClass, TEXT("UWidget_GameOver"), &Z_Registration_Info_UClass_UWidget_GameOver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_GameOver), 2028914948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Widget_GameOver_h_3094666368(TEXT("/Script/Nproject1_GH"),
		Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Widget_GameOver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Widget_GameOver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

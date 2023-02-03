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
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Characters_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Characters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Initials_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Initials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitRecordText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InitRecordText;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Records_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Records_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Records;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Characters_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//The characters the player can enter\n" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "The characters the player can enter" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, Characters), METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Characters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Characters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Initials_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Initials widget instance\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Initials widget instance" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Initials = { "Initials", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, Initials), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Initials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Initials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitRecordText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Text block to initialise record text block array with\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Text block to initialise record text block array with" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitRecordText = { "InitRecordText", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, InitRecordText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitRecordText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitRecordText_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Records_Inner = { "Records", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Records_MetaData[] = {
		{ "Category", "Widget_GameOver" },
		{ "Comment", "//Leaderboards text block array\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_GameOver.h" },
		{ "ToolTip", "Leaderboards text block array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x001000800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_GameOver, Records), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Records_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Records_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_GameOver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Characters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Initials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_InitRecordText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Records_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_GameOver_Statics::NewProp_Records,
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
		{ Z_Construct_UClass_UWidget_GameOver, UWidget_GameOver::StaticClass, TEXT("UWidget_GameOver"), &Z_Registration_Info_UClass_UWidget_GameOver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_GameOver), 767357770U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Widget_GameOver_h_850382085(TEXT("/Script/Nproject1_GH"),
		Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Widget_GameOver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Widget_GameOver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

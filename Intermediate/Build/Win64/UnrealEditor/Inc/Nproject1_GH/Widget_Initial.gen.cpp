// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject1_GH/Widget_Initial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_Initial() {}
// Cross Module References
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UWidget_Initial_NoRegister();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UWidget_Initial();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Nproject1_GH();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UWidget_Char_NoRegister();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UButtonWidget_NoRegister();
// End Cross Module References
	void UWidget_Initial::StaticRegisterNativesUWidget_Initial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidget_Initial);
	UClass* Z_Construct_UClass_UWidget_Initial_NoRegister()
	{
		return UWidget_Initial::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_Initial_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpArrowRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UpArrowRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownArrowRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DownArrowRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidget_Initial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject1_GH,
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Initial_Statics::NewProp_UpArrowRef_MetaData[] = {
		{ "Category", "Widget_Initial" },
		{ "Comment", "//The up arrow that cycles backwards through the character string\n" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
		{ "ToolTip", "The up arrow that cycles backwards through the character string" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidget_Initial_Statics::NewProp_UpArrowRef = { "UpArrowRef", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Initial, UpArrowRef), Z_Construct_UClass_UButtonWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_UpArrowRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_UpArrowRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Initial_Statics::NewProp_DownArrowRef_MetaData[] = {
		{ "Category", "Widget_Initial" },
		{ "Comment", "//The down arrow that cycles forwards through the character string\n" },
		{ "ModuleRelativePath", "Widget_Initial.h" },
		{ "ToolTip", "The down arrow that cycles forwards through the character string" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidget_Initial_Statics::NewProp_DownArrowRef = { "DownArrowRef", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Initial, DownArrowRef), Z_Construct_UClass_UButtonWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_DownArrowRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Initial_Statics::NewProp_DownArrowRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_Initial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_ContentsBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_CharRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_UpArrowRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Initial_Statics::NewProp_DownArrowRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_Initial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_Initial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_Initial_Statics::ClassParams = {
		&UWidget_Initial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidget_Initial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	template<> NPROJECT1_GH_API UClass* StaticClass<UWidget_Initial>()
	{
		return UWidget_Initial::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_Initial);
	struct Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Widget_Initial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Widget_Initial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_Initial, UWidget_Initial::StaticClass, TEXT("UWidget_Initial"), &Z_Registration_Info_UClass_UWidget_Initial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_Initial), 2155337916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Widget_Initial_h_71721771(TEXT("/Script/Nproject1_GH"),
		Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Widget_Initial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_Widget_Initial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

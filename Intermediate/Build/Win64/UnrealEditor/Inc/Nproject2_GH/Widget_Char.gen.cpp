// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject2_GH/Widget_Char.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_Char() {}
// Cross Module References
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UWidget_Char_NoRegister();
	NPROJECT2_GH_API UClass* Z_Construct_UClass_UWidget_Char();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Nproject2_GH();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UWidget_Char::StaticRegisterNativesUWidget_Char()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidget_Char);
	UClass* Z_Construct_UClass_UWidget_Char_NoRegister()
	{
		return UWidget_Char::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_Char_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidget_Char_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject2_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Char_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget_Char.h" },
		{ "ModuleRelativePath", "Widget_Char.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Char_Statics::NewProp_Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_Char" },
		{ "Comment", "//Text Block\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Char.h" },
		{ "ToolTip", "Text Block" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Char_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Char, Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Char_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Char_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_Char_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Char_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_Char_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_Char>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_Char_Statics::ClassParams = {
		&UWidget_Char::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidget_Char_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Char_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidget_Char_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Char_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidget_Char()
	{
		if (!Z_Registration_Info_UClass_UWidget_Char.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_Char.OuterSingleton, Z_Construct_UClass_UWidget_Char_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidget_Char.OuterSingleton;
	}
	template<> NPROJECT2_GH_API UClass* StaticClass<UWidget_Char>()
	{
		return UWidget_Char::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_Char);
	struct Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_Char_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_Char_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_Char, UWidget_Char::StaticClass, TEXT("UWidget_Char"), &Z_Registration_Info_UClass_UWidget_Char, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_Char), 1248358293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_Char_h_3631476742(TEXT("/Script/Nproject2_GH"),
		Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_Char_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject2_GH_Source_Nproject2_GH_Widget_Char_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

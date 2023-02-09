// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nproject1_GH/ButtonWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonWidget() {}
// Cross Module References
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UButtonWidget_NoRegister();
	NPROJECT1_GH_API UClass* Z_Construct_UClass_UButtonWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Nproject1_GH();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UButtonWidget::StaticRegisterNativesUButtonWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UButtonWidget);
	UClass* Z_Construct_UClass_UButtonWidget_NoRegister()
	{
		return UButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Nproject1_GH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ButtonWidget.h" },
		{ "ModuleRelativePath", "ButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonWidget_Statics::NewProp_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ButtonWidget" },
		{ "Comment", "//The button itself\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ButtonWidget.h" },
		{ "ToolTip", "The button itself" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UButtonWidget_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UButtonWidget, Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UButtonWidget_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidget_Statics::NewProp_Button_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UButtonWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonWidget_Statics::NewProp_Button,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UButtonWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UButtonWidget_Statics::ClassParams = {
		&UButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UButtonWidget()
	{
		if (!Z_Registration_Info_UClass_UButtonWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UButtonWidget.OuterSingleton, Z_Construct_UClass_UButtonWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UButtonWidget.OuterSingleton;
	}
	template<> NPROJECT1_GH_API UClass* StaticClass<UButtonWidget>()
	{
		return UButtonWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UButtonWidget);
	struct Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_ButtonWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_ButtonWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UButtonWidget, UButtonWidget::StaticClass, TEXT("UButtonWidget"), &Z_Registration_Info_UClass_UButtonWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UButtonWidget), 3757349305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_ButtonWidget_h_3705202594(TEXT("/Script/Nproject1_GH"),
		Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_ButtonWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Nproject1_GH_Source_Nproject1_GH_ButtonWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

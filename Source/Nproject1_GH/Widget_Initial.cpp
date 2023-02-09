// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget_Initial.h"

#include "ButtonWidget.h"
#include "Widget_Char.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"

void UWidget_Initial::NativeConstruct()
{
	Super::NativeConstruct();

	if(UpArrowRef)
	{
		UUserWidget* UpWidget = CreateWidget(this, UpArrowRef);
		ContentsBox->AddChildToVerticalBox(UpWidget);
	}
	if(CharRef)
	{
		UUserWidget* CharWidget = CreateWidget(this, CharRef);
		ContentsBox->AddChildToVerticalBox(CharWidget);
		UWidget_Char* Char = Cast<UWidget_Char>(CharWidget);
		Char->Text->SetText(FText::FromString(FString("A")));
	}
	if(DownArrowRef)
	{
		UUserWidget* DownWidget = CreateWidget(this, DownArrowRef);
		ContentsBox->AddChildToVerticalBox(DownWidget);
		UButtonWidget* DownButton = Cast<UButtonWidget>(DownWidget);
		DownButton->Button->SetRenderTransformAngle(180.0f);
	}
}

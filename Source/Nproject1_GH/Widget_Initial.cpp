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

	Characters = FString("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.?!\"£$%^&*() ");
	CharactersIndex = 0;
	
	if(UpArrowRef)
	{
		UUserWidget* UpWidget = CreateWidget(this, UpArrowRef);
		ContentsBox->AddChildToVerticalBox(UpWidget);
		UpButton = Cast<UButtonWidget>(UpWidget);
		UpButton->Button->OnPressed.AddDynamic(this, &UWidget_Initial::CycleUp);
	}
	if(CharRef)
	{
		UUserWidget* CharWidget = CreateWidget(this, CharRef);
		ContentsBox->AddChildToVerticalBox(CharWidget);
		Char = Cast<UWidget_Char>(CharWidget);
		Char->Text->SetText(FText::FromString(FString("A")));
	}
	if(DownArrowRef)
	{
		UUserWidget* DownWidget = CreateWidget(this, DownArrowRef);
		ContentsBox->AddChildToVerticalBox(DownWidget);
		DownButton = Cast<UButtonWidget>(DownWidget);
		DownButton->Button->SetRenderTransformAngle(180.0f);
		DownButton->Button->OnPressed.AddDynamic(this, &UWidget_Initial::CycleDown);
	}
}

void UWidget_Initial::CycleDown()
{
	CharactersIndex++;
	if(CharactersIndex >= Characters.Len())
	{
		CharactersIndex = 0;
	}

	if(Characters.IsValidIndex(CharactersIndex))
	{
		const FString CharacterText = FString("" + Characters[CharactersIndex]);
		Char->Text->SetText(FText::FromString(CharacterText));
	}
}

void UWidget_Initial::CycleUp()
{
	CharactersIndex--;
	if(CharactersIndex < 0)
	{
		CharactersIndex = (Characters.Len() - 1);
	}

	if(Characters.IsValidIndex(CharactersIndex))
	{
		const FString CharacterText = FString("" + Characters[CharactersIndex]);
		Char->Text->SetText(FText::FromString(CharacterText));
	}
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget_Initial.h"

#include "ButtonWidget.h"
#include "Widget_Char.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"

void UWidget_Initial::NativeConstruct()
{
	Super::NativeConstruct();

	Characters = FString("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.?!'@#%^&*() ");
	CharactersIndex = 0;

	bUpPressed = false;
	bDownPressed = false;

	CycleRate_Max = 0.1f;
	CycleRate_Current = CycleRate_Max;
	
	if(UpArrowRef)
	{
		UUserWidget* UpWidget = CreateWidget(this, UpArrowRef);
		ContentsBox->AddChildToVerticalBox(UpWidget);
		UpButton = Cast<UButtonWidget>(UpWidget);
		UpButton->Button->OnPressed.AddDynamic(this, &UWidget_Initial::UpButtonPressed);
		UpButton->Button->OnReleased.AddDynamic(this, &UWidget_Initial::UpButtonReleased);
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
		DownButton->Button->OnPressed.AddDynamic(this, &UWidget_Initial::DownButtonPressed);
		DownButton->Button->OnReleased.AddDynamic(this, &UWidget_Initial::DownButtonReleased);
	}
}

void UWidget_Initial::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	CycleRate_Current = CycleRate_Max;
}

void UWidget_Initial::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (UpButton->Button->IsPressed())
	{
		CycleRate_Current = FMath::Clamp(CycleRate_Current - InDeltaTime, 0, 0.1f);
		if (CycleRate_Current <= 0)
		{
			CycleUp();
			CycleRate_Current = CycleRate_Max;
		}
	}

	if (DownButton->Button->IsPressed())
	{
		CycleRate_Current = FMath::Clamp(CycleRate_Current - InDeltaTime, 0, 0.1f);
		if (CycleRate_Current <= 0)
		{
			CycleDown();
			CycleRate_Current = CycleRate_Max;
		}
	}
}

void UWidget_Initial::UpButtonPressed()
{
	CycleUp();
	CycleRate_Current = CycleRate_Max;
}

void UWidget_Initial::DownButtonPressed()
{
	CycleDown();
	CycleRate_Current = CycleRate_Max;
}

void UWidget_Initial::UpButtonReleased()
{
	bUpPressed = false;
}

void UWidget_Initial::DownButtonReleased()
{
	bDownPressed = false;
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
		Char->Text->SetText(FText::FromString(Characters.Chr(Characters[CharactersIndex])));
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
		Char->Text->SetText(FText::FromString(Characters.Chr(Characters[CharactersIndex])));
	}
}
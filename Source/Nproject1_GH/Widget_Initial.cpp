// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget_Initial.h"

#include "ButtonWidget.h"
#include "Widget_Char.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/GameplayStatics.h"

void UWidget_Initial::NativeConstruct()
{
	Super::NativeConstruct();

	Characters = FString("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.?!'@#%^&*() ");
	CharactersIndex = 0;
	
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
		UpButton->Button->OnReleased.AddDynamic(this, &UWidget_Initial::UpButtonReleased);
	}
}

void UWidget_Initial::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	
}

void UWidget_Initial::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (bUpPressed)
	{
		CycleUp();
		//bUpPressed = false;
	}

	if(bDownPressed)
	{
		CycleDown();
		//bDownPressed = false;
	}
}

void UWidget_Initial::UpButtonPressed()
{
	bUpPressed = true;
}

void UWidget_Initial::DownButtonPressed()
{
	bDownPressed = true;
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
		UE_LOG(LogTemp, Warning, TEXT("%i"), CharactersIndex);
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
		UE_LOG(LogTemp, Warning, TEXT("%i"), CharactersIndex);
	}
}

void UWidget_Initial::InitializeInputComponent()
{
	if ( APlayerController* Controller = GetOwningPlayer() )
	{
		// Use the existing PC's input class, or fallback to the project default. We should use the existing class
		// instead of just the default one because if you have a plugin that has a PC with a different default input
		// class then this would fail
		UClass* InputClass = Controller->InputComponent ? Controller->InputComponent->GetClass() : UInputSettings::GetDefaultInputComponentClass();
		InputComponent = NewObject< UInputComponent >( this, InputClass, NAME_None, RF_Transient );
		InputComponent->bBlockInput = bStopAction;
		InputComponent->Priority = Priority;
		Controller->PushInputComponent( InputComponent );

		check(InputComponent);

		InputComponent->BindAction("NavUp", IE_Pressed, this, &UWidget_Initial::CycleUp);
		InputComponent->BindAction("NavDown", IE_Pressed, this, &UWidget_Initial::CycleDown);
	}
	else
	{
		//FMessageLog("PIE").Info(FText::Format(LOCTEXT("NoInputListeningWithoutPlayerController", "Unable to listen to input actions without a player controller in {0}."), FText::FromName(GetClass()->GetFName())));
	}

	
}

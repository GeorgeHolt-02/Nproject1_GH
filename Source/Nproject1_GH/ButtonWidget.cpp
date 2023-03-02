// Fill out your copyright notice in the Description page of Project Settings.


#include "ButtonWidget.h"
#include "Components/Button.h"

void UButtonWidget::NativeConstruct()
{
	Super::NativeConstruct();

	bIsFocusable = true;
	Button->IsFocusable = true;
}

void UButtonWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	CheckFocus();
}

void UButtonWidget::CheckFocus()
{
	if(Button->IsHovered())
	{
		Button->SetKeyboardFocus();
		Button->SetStyle(Style_Mouse);
	}
	else
	{
		if(Button->HasKeyboardFocus())
		{
			Button->SetStyle(Style_Hovered);
		}
		else
		{
			Button->SetStyle(Style_Normal);
		}
	}
}

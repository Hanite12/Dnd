// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/DnDPlayerState.h"

#include "AttributeSet.h"
#include "AbilitySystem/DnDAbilitySystemComponent.h"

ADnDPlayerState::ADnDPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UDnDAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);

	AttributeSet = CreateDefaultSubobject<UAttributeSet>("AttributeSet");
	
	NetUpdateFrequency = 100.f;
}

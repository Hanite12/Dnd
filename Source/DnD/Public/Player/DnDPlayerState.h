// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "DnDPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class DND_API ADnDPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	ADnDPlayerState();
protected:

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
	
};

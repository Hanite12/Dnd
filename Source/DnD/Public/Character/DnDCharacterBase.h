// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DnDCharacterBase.generated.h"

UCLASS(Abstract)
class DND_API ADnDCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	ADnDCharacterBase();

protected:
	virtual void BeginPlay() override;
	

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/DnDCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "DnDEnemy.generated.h"

/**
 * 
 */
UCLASS()
class DND_API ADnDEnemy : public ADnDCharacterBase, public IEnemyInterface 
{
	GENERATED_BODY()
public:
	ADnDEnemy();
	virtual void HighlightActor() override;
	virtual void UnhighlightActor() override;

	
};

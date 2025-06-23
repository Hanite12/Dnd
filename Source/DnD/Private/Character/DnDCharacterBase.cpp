// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/DnDCharacterBase.h"

ADnDCharacterBase::ADnDCharacterBase()
{
 	 	PrimaryActorTick.bCanEverTick = false;

		Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
		Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
		Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ADnDCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}
 
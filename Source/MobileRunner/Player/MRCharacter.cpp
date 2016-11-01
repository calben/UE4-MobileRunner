// Fill out your copyright notice in the Description page of Project Settings.

#include "MobileRunner.h"
#include "MRCharacter.h"


// Sets default values
AMRCharacter::AMRCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMRCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMRCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AMRCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}


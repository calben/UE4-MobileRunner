// Fill out your copyright notice in the Description page of Project Settings.

#include "MobileRunner.h"
#include "MRCharacter.h"


// Sets default values
AMRCharacter::AMRCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->CameraLagSpeed = 2.f;
	SpringArm->TargetArmLength = 600.f;
	SpringArm->SetRelativeRotation(FRotator(340.f, 0.f, 0.f));

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	Camera->SetupAttachment(SpringArm);

	SwipeComponent = CreateDefaultSubobject<USwipeComponent>(TEXT("SWIPE"));
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
	AddMovementInput(FVector(1.0, 0.f, 0.f), BaseRunningSpeed);
}

// Called to bind functionality to input
void AMRCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
	
}


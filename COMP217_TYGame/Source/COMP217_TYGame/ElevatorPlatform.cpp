// Fill out your copyright notice in the Description page of Project Settings.


#include "ElevatorPlatform.h"

// Sets default values
AElevatorPlatform::AElevatorPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AElevatorPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AElevatorPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// move method
void AElevatorPlatform::moveUp()
{
	FVector height = GetActorLocation();

	SetActorLocation(height + FVector(0, 0, speed));
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "Kraken.h"

// Sets default values
AKraken::AKraken()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AKraken::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKraken::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector PlayerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	FVector KrakenLocation = GetActorLocation();
	

	float DirectionToPlayerX =PlayerLocation.X - KrakenLocation.X;
	float DirectionToPlayerY = PlayerLocation.Y - KrakenLocation.Y;
	float DirectionToPlayerZ = 0.0f;

	FVector DirectionToPlayer = FVector(DirectionToPlayerX, DirectionToPlayerY, DirectionToPlayerZ);
	
	float distanceToPlayer = FVector::Distance(PlayerLocation, KrakenLocation);
	if (distanceToPlayer < attackDistance){
	SetActorLocation(KrakenLocation + speed*DirectionToPlayer*DeltaTime);
    }
}


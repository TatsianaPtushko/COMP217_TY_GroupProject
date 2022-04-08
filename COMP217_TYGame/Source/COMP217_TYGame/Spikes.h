// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spikes.generated.h"

UCLASS()
class COMP217_TYGAME_API ASpikes : public AActor
{
	GENERATED_BODY()

private:
UPROPERTY()
		FVector InitialLocation;
public:	
	// Sets default values for this actor's properties
	ASpikes();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
		float speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
		int direction;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
		float moveDistance;

	UFUNCTION(BlueprintCallable, Category = "Attack")
		void Move(float Movespeed);



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

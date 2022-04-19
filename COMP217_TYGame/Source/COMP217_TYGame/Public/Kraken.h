// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kraken.generated.h"

UCLASS()
class COMP217_TYGAME_API AKraken : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKraken();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
		float speed =1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
		float attackDistance =1000.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

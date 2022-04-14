// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Timer.generated.h"

UCLASS()
class COMP217_TYGAME_API ATimer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATimer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void CountDown();

	UPROPERTY(BlueprintReadOnly);
	int Minutes = 3;

	UPROPERTY(BlueprintReadOnly);
	int Second = 0;

};

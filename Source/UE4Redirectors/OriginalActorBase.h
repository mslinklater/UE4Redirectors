// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OriginalActorBase.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogOriginalActorBase, Log, All);

UCLASS()
class UE4REDIRECTORS_API AOriginalActorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOriginalActorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};

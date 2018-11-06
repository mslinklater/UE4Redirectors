// Fill out your copyright notice in the Description page of Project Settings.

#include "OriginalActorBase.h"

DEFINE_LOG_CATEGORY(LogOriginalActorBase);

// Sets default values
AOriginalActorBase::AOriginalActorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOriginalActorBase::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogOriginalActorBase, Warning, TEXT("AOriginalActorBase::BeginPlay() called"));
}

// Called every frame
void AOriginalActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


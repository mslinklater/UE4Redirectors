// Fill out your copyright notice in the Description page of Project Settings.

#include "NewActorBase.h"

DEFINE_LOG_CATEGORY(LogNewActorBase);

// Sets default values
ANewActorBase::ANewActorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANewActorBase::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogNewActorBase, Warning, TEXT("ANewActorBase::BeingPlay() called"));
}

// Called every frame
void ANewActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


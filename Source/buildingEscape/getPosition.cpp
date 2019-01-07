// Fill out your copyright notice in the Description page of Project Settings.

#include "getPosition.h"


// Sets default values for this component's properties
UgetPosition::UgetPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UgetPosition::BeginPlay()
{
	Super::BeginPlay();
	FString  name = GetOwner()->GetName();
	FVector actorPos = GetOwner()->GetTransform().GetLocation();
	UE_LOG(LogTemp, Warning, TEXT("Hello : %s name: %s"),*actorPos.ToString(),*name);

	// ...
	
}


// Called every frame
void UgetPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Engine/TriggerBox.h"
#include "Engine/world.h"
#include "rotateDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UrotateDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	UrotateDoor();

	UPROPERTY(EditAnywhere)
	float closeDelay=2;

protected:
	virtual void BeginPlay() override;

	void openDoor();
	void closeDoor();

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private :
	float lastTimeOpen;

	AActor* player;

	UPROPERTY(VisibleAnywhere)
		float openAngle = 0;

	UPROPERTY(EditAnywhere)
	ATriggerBox* trigger;
};

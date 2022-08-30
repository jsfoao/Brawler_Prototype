// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GrabbableRope.generated.h"


class UPhysicsConstraintComponent;
class UCableComponent;
class AActor;

UCLASS()
class BRAWLER_PROTOTYPE_API AGrabbableRope : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrabbableRope();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UCableComponent* Rope;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UPhysicsConstraintComponent* PhysicsConstraint;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void AttachPlayer(AActor* Actor, UPrimitiveComponent* PrimitiveComponent);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void DetachPlayer();

};

// Fill out your copyright notice in the Description page of Project Settings.


#include "GrabbableRope.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "CableComponent.h"

// Sets default values
AGrabbableRope::AGrabbableRope()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Rope = CreateDefaultSubobject<UCableComponent>(TEXT("Rope"));
	RootComponent = Rope;
	PhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsConstraint"));
	PhysicsConstraint->SetupAttachment(RootComponent);
}

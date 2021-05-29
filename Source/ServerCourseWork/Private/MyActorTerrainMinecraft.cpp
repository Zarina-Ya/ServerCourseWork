// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorTerrainMinecraft.h"

// Sets default values
AMyActorTerrainMinecraft::AMyActorTerrainMinecraft()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActorTerrainMinecraft::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorTerrainMinecraft::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


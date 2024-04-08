// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/P1Player.h"

// Sets default values
AP1Player::AP1Player()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AP1Player::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AP1Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AP1Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


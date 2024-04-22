// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/P1PlayerAnimInstance.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UP1PlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
	Character = Cast<ACharacter>(TryGetPawnOwner());
	if (Character)
	{
		CharacterMovementComponent = Character->GetCharacterMovement();
	}
}

void UP1PlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (CharacterMovementComponent == nullptr)
		return;

	IsFalling = CharacterMovementComponent->IsFalling();
	Velocity = CharacterMovementComponent->Velocity;

	FVector2D vel = { Velocity.X, Velocity.Y };
	GroundSpeed = vel.Length();

	ShouldMove = (GroundSpeed > 3.f) && (CharacterMovementComponent->GetCurrentAcceleration().Length() != 0);
}

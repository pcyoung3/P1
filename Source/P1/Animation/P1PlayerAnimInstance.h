// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "P1PlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class P1_API UP1PlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="References", meta=(AllowPrivateAccess="true"))
	TObjectPtr<class ACharacter> Character;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="References", meta=(AllowPrivateAccess="true"))
	TObjectPtr<class UCharacterMovementComponent> CharacterMovementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="EssentialMovementData", meta=(AllowPrivateAccess="true"))
	FVector Velocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="EssentialMovementData", meta=(AllowPrivateAccess="true"))
	float GroundSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="EssentialMovementData", meta=(AllowPrivateAccess="true"))
	bool ShouldMove;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="EssentialMovementData", meta=(AllowPrivateAccess="true"))
	bool IsFalling;
};

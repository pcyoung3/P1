/*=============================================================================
 * Filename: P1Player.cpp
 * Author: pcyoung
 * Date Created: 2024.04.13
 * Last Modified by: [Last Modifier's Name]
 * Last Modified on: [Last Modification Date]
 * Description: Player ÇÙ½É Class
=============================================================================*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "P1Player.generated.h"

UCLASS()
class P1_API AP1Player : public ACharacter
{
	GENERATED_BODY()

public:
	AP1Player();

	//Main Rootine
protected:
	virtual void BeginPlay() override;

	//Input
public:	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	//Input
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Camera", meta=(AllowPrivateAccess = "true"))
	TObjectPtr<class USpringArmComponent> CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Camera", meta=(AllowPrivateAccess = "true"))
	TObjectPtr<class UCameraComponent> FollowCamera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputMappingContext> DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputAction> LookAction;

protected:
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
};

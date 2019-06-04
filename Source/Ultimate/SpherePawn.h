// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SpherePawn.generated.h"

UCLASS()
class ULTIMATE_API ASpherePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASpherePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float Amount);
	void MoveRight(float Amount);
	void Turn(float Amount);
	void LookUp(float Amount);

	class UFloatingPawnMovement* FloatingPawnMovement;

	UPROPERTY(EditAnyWhere, Category = "Components")
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnyWhere, Category = "Components")
	class UCameraComponent* Camera;

	UPROPERTY(EditAnyWhere, Category = "Components")
	class USpringArmComponent* CameraArm;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridBox.h"
#include "GameFramework/Actor.h"
#include "GridPuzzle.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGridPuzzleFinished);

UCLASS()
class PUZZLEEXERCISE_API AGridPuzzle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGridPuzzle();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AGridBox*> GridBoxes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ActivatedBoxes = 0;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void IncrementActivatedBoxes();

	UPROPERTY(BlueprintAssignable)
	FOnGridPuzzleFinished OnPuzzleCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AGridPuzzle* NextPuzzle;
};



// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridBox.generated.h"

UCLASS()
class PUZZLEEXERCISE_API AGridBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGridBox();

	UPROPERTY(EditAnywhere, Category = "GridBox")
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GridBox")
	int IDGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GridBox")
	bool IsCompleted;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

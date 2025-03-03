#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CardC.generated.h"

UCLASS()
class PUZZLEEXERCISE_API ACardC : public AActor
{
	GENERATED_BODY()
	
public:
	ACardC();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Card")
	UStaticMeshComponent* CardMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	int IDPuzzle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
	UMaterialInterface* Mat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
	bool IsMovable;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void ActivateCard(int ID, AActor* GridBox);

	UFUNCTION(BlueprintImplementableEvent)
	void OnCustomEvent();

	UFUNCTION()
	void OnHit();

};

#include "GridPuzzle.h"

AGridPuzzle::AGridPuzzle()
{
	PrimaryActorTick.bCanEverTick = true;
}


void AGridPuzzle::BeginPlay()
{
	Super::BeginPlay();
}


void AGridPuzzle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGridPuzzle::IncrementActivatedBoxes()
{
	ActivatedBoxes++;
	if (ActivatedBoxes >= GridBoxes.Num())
	{
		OnPuzzleCompleted.Broadcast();
	}
}

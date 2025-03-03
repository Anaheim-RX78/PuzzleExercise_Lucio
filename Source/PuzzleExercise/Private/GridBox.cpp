#include "GridBox.h"

AGridBox::AGridBox()
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}


void AGridBox::BeginPlay()
{
	Super::BeginPlay();
}


void AGridBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


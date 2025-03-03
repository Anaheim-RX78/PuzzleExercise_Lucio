#include "CardC.h"

ACardC::ACardC()
{
	PrimaryActorTick.bCanEverTick = true;
	CardMesh = CreateDefaultSubobject<UStaticMeshComponent>("CardMesh");
	SetRootComponent(CardMesh);
}


void ACardC::BeginPlay()
{
	Super::BeginPlay();
}


void ACardC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ACardC::ActivateCard(int ID, AActor* GridBox)
{
	CardMesh->SetWorldRotation(FRotator(0, 45, 0));

	float Distance = FVector::Dist(GetActorLocation(), GridBox->GetActorLocation());
	UE_LOG(LogTemp, Warning, TEXT("%f"), Distance);
	if (ID == IDPuzzle)
	{
		CardMesh->SetMaterial(0, Mat);
	}
}

void ACardC::OnHit()
{
	OnCustomEvent();
}
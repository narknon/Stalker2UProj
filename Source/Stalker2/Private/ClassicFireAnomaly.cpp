#include "ClassicFireAnomaly.h"
#include "Components/CapsuleComponent.h"
#include "Components/DecalComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"

AClassicFireAnomaly::AClassicFireAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlamePillarCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("FlamePillarComponent"));
    this->CollisionMeshPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->FlamePillarCapsule->SetupAttachment(RootComponent);
    this->IdleVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("IdleVFX"));
    this->DecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComponent"));
    this->CollisionMeshPtr->SetupAttachment(FlamePillarCapsule);
    this->IdleVFX->SetupAttachment(FlamePillarCapsule);
    this->DecalComponent->SetupAttachment(FlamePillarCapsule);
}
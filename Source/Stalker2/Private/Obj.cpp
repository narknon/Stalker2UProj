#include "Obj.h"
#include "AkComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "AttackComponent.h"
#include "ItemAppearanceComponent.h"
#include "MovementComponentExt.h"
#include "ObjWaterContactController.h"
#include "S2TargetMeleeSectorComponent.h"

AObj::AObj(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemAppearanceComponent = CreateDefaultSubobject<UItemAppearanceComponent>(TEXT("ItemAppearanceComponent"));
    this->WetnessComponent = NULL;
    this->MeleeSectorComponent = CreateDefaultSubobject<US2TargetMeleeSectorComponent>(TEXT("MeleeSectorComponent"));
    this->MovementComponentExt = CreateDefaultSubobject<UMovementComponentExt>(TEXT("MovementComponentExt"));
    this->PhysicalAnimationComponent = NULL;
    this->WaterContactController = CreateDefaultSubobject<UObjWaterContactController>(TEXT("WaterContactController"));
    this->LaserSightComponent = NULL;
    this->FallingDamageCurve = NULL;
    this->FallingDamageSound = NULL;
    this->FallingDamageEasySoundSwitch = NULL;
    this->FallingDamageMediumSoundSwitch = NULL;
    this->FallingDamageHighSoundSwitch = NULL;
    this->AkComponentRetargetTable = NULL;
    this->AttackComponent = CreateDefaultSubobject<UAttackComponent>(TEXT("AttackComponent"));
    this->FlashlightComponent = NULL;
    this->AkAudioRootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkRoot"));
    this->AkAudioHeadComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkHead"));
    this->AkAudioPelvisComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkPelvis"));
    this->AkAudioLeftHandComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkLeftHand"));
    this->AkAudioRightHandComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkRightHand"));
    this->AkAudioComponent = AkAudioPelvisComponent;
    this->ShootingParticle = NULL;
    this->PostShootingParticle = NULL;
    this->AkAudioRootComponent->SetupAttachment(GetMesh());
    this->AkAudioHeadComponent->SetupAttachment(GetMesh());
    this->AkAudioPelvisComponent->SetupAttachment(GetMesh());
    this->AkAudioLeftHandComponent->SetupAttachment(GetMesh());
    this->AkAudioRightHandComponent->SetupAttachment(GetMesh());
}

void AObj::StartCutsceneSequence(const AActor* SynchronizationPoint, const FRotator OverrideRotation) {
}

void AObj::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void AObj::EndCutsceneSequence() {
}



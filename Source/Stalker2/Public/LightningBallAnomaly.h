#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "LightningBallAnomaly.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;
class UFXSystemAsset;
class ULightningBallNavigationComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class USphereComponent;

UCLASS(Blueprintable)
class STALKER2_API ALightningBallAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* OverlapDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* IdleParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ExplosionParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* AnomalyEatingParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FeastAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* FeastIdleSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* FeastEndSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AnomalyExplosionAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULightningBallNavigationComponent* AnomalyNavigationComponent;
    
public:
    ALightningBallAnomaly(const FObjectInitializer& ObjectInitializer);

};


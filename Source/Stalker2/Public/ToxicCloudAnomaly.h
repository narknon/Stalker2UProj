#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "HitReceiver.h"
#include "ToxicCloudAnomaly.generated.h"

class UAkAudioEvent;
class UHittableComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API AToxicCloudAnomaly : public AAnomaly, public IHitReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* CloudParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ImpactParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHittableComponent* HittableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ToxicCloudSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AppearSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DisappearSoundEvent;
    
public:
    AToxicCloudAnomaly(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


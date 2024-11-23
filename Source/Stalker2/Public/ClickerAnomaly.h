#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Anomaly.h"
#include "ClickerAnomaly.generated.h"

class AActor;
class UAkAudioEvent;
class UCurveFloat;
class UNiagaraSystem;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API AClickerAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RootComponentPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CollisionMeshPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ChargeParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ExplosionParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ChargeSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExplosionSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DamageCurve;
    
public:
    AClickerAnomaly(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnBeginParticleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
};


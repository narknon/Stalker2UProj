#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CommonHitArgs.h"
#include "HitReceiver.h"
#include "TelekineticShield.generated.h"

class AObj;
class UAkAudioEvent;
class UAkComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API ATelekineticShield : public AActor, public IHitReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ShieldDestroyedParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* HitImpactParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShieldDestroyedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShieldSpawnedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShieldImpactSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OwnerHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParticleIntensityChangeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnShiftFraction;
    
public:
    ATelekineticShield(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShieldDestroyedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitReceivedBP(FCommonHitArgs HitArgs);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeathParticleFinished(UNiagaraComponent* DeathVFXComponent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AObj* GetOwnerActor() const;
    

    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NiagaraDataInterfaceExport.h"
#include "Anomaly.h"
#include "LavaLampAnomaly.generated.h"

class UAkAudioEvent;
class UMaterialInterface;
class UNiagaraComponent;
class USphereComponent;

UCLASS(Blueprintable)
class STALKER2_API ALavaLampAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollisionPlayEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollisionStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ClotEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParticleLifetimeAfterCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClotEventDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* OverlapSphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ActivationParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ClotDecalMaterial;
    
public:
    ALavaLampAnomaly(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLavaStaticObjectCollision(FVector Location, FVector NormalDirection, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void OnLavaCollision(const FBasicParticleData& BasicParticleData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFollowPositionChanged(FVector FollowPosition);
    
};


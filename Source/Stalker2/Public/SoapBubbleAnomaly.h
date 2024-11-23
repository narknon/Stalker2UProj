#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Anomaly.h"
#include "SoapBubbleAnomaly.generated.h"

class AActor;
class UAkAudioEvent;
class UCurveFloat;
class UFXSystemAsset;
class UMaterialInterface;
class UNiagaraComponent;
class UPrimitiveComponent;
class USphereComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API ASoapBubbleAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoapBubbleDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoapBubbleDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoapBubbleParticleDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* SoapBubbleParticleExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SoapBubbleParticleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SoapBubbleParticleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SoapBubble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SoapBubbleBoundSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SoapBubbleExplosionParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* InterpolationCurve;
    
public:
    ASoapBubbleAnomaly(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnActorCollided(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
};


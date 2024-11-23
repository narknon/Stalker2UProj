#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "HitReceiver.h"
#include "ChemicalAnomaly.generated.h"

class UFXSystemAsset;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API AChemicalAnomaly : public AAnomaly, public IHitReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CollisionMeshPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* SplashImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* GrenadeExplosion;
    
public:
    AChemicalAnomaly(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecalSpawn();
    

    // Fix for true pure virtual functions not being implemented
};


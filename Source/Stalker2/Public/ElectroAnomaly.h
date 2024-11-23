#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Anomaly.h"
#include "ElectroAnomalyBakedDataFloat.h"
#include "ElectroAnomaly.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API AElectroAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RootComponentPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CollisionMeshPtr;
    
public:
    AElectroAnomaly(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetParticleSpawnLocation() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FElectroAnomalyBakedDataFloat GetElectroBakedData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPSetActiveIdleVFX(const bool bNewActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPDoLightningStrikeAfterPauseTime();
    
};


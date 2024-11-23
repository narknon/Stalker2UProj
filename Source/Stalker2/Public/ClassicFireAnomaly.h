#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "ClassicFireAnomaly.generated.h"

class UCapsuleComponent;
class UDecalComponent;
class UNiagaraComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API AClassicFireAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CollisionMeshPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* FlamePillarCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* IdleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* DecalComponent;
    
public:
    AClassicFireAnomaly(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged();
    
};


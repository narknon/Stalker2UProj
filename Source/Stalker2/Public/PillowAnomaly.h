#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "EPillowAnomalyBiomeType.h"
#include "PillowAnomaly.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API APillowAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CollisionMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* IdleParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* InteractParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPillowAnomalyBiomeType, TSoftObjectPtr<UNiagaraSystem>> BiomeParticles;
    
public:
    APillowAnomaly(const FObjectInitializer& ObjectInitializer);

};


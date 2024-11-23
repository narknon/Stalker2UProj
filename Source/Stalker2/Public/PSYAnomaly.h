#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "PSYAnomaly.generated.h"

class UNiagaraComponent;
class USphereComponent;

UCLASS(Blueprintable)
class STALKER2_API APSYAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* PSYParticle;
    
public:
    APSYAnomaly(const FObjectInitializer& ObjectInitializer);

};


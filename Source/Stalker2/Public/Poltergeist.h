#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Agent.h"
#include "EDamageType.h"
#include "Poltergeist.generated.h"

class UNiagaraComponent;
class USphereComponent;

UCLASS(Blueprintable)
class STALKER2_API APoltergeist : public AAgent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* BodyParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* BodyCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* DeathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshSpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageType, float> DeathImpulseScaleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathBodyVisibilityDelay;
    
public:
    APoltergeist(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "ParticleConditionPrototype.h"
#include "ParticleDaytimePrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleDaytimePrototype : public FParticleConditionPrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnTime;
    
    FParticleDaytimePrototype();
};


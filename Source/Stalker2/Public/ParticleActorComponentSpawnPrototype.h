#pragma once
#include "CoreMinimal.h"
#include "EnvironmentParticlePrototype.h"
#include "ParticleActorSpawnPrototype.h"
#include "ParticlePlayerComponentSpawnPrototype.h"
#include "ParticleActorComponentSpawnPrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleActorComponentSpawnPrototype : public FEnvironmentParticlePrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleActorSpawnPrototype ActorSpawnPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticlePlayerComponentSpawnPrototype PlayerComponentSpawnPrototype;
    
    FParticleActorComponentSpawnPrototype();
};


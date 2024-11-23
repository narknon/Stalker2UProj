#pragma once
#include "CoreMinimal.h"
#include "EnvironmentParticlePrototype.h"
#include "ParticleConditionPrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleConditionPrototype : public FEnvironmentParticlePrototype {
    GENERATED_BODY()
public:
    FParticleConditionPrototype();
};


#pragma once
#include "CoreMinimal.h"
#include "ParticleConditionPrototype.h"
#include "ParticleDistancePrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleDistancePrototype : public FParticleConditionPrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    FParticleDistancePrototype();
};


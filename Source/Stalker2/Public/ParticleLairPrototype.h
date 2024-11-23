#pragma once
#include "CoreMinimal.h"
#include "EAgentType.h"
#include "ParticleConditionPrototype.h"
#include "ParticleLairPrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleLairPrototype : public FParticleConditionPrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LairCheckDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAgentType> AllowedNPCTypes;
    
    FParticleLairPrototype();
};


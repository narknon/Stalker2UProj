#pragma once
#include "CoreMinimal.h"
#include "ParticleConditionPrototype.h"
#include "ParticleBiomePrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleBiomePrototype : public FParticleConditionPrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AllowedBiomeNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CountableBiomeNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BiomeCheckRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBiomeCompatabilityPercent;
    
    FParticleBiomePrototype();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnvironmentParticlePrototype.h"
#include "ParticlePlayerComponentSpawnPrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticlePlayerComponentSpawnPrototype : public FEnvironmentParticlePrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSpawnProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnProbabilityIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnProbabilityCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerHeadOffset;
    
    FParticlePlayerComponentSpawnPrototype();
};


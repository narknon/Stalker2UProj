#pragma once
#include "CoreMinimal.h"
#include "EffectPrototypeSID.h"
#include "EnvironmentParticlePrototype.h"
#include "LightningStrikeDamagePrototype.generated.h"

USTRUCT(BlueprintType)
struct FLightningStrikeDamagePrototype : public FEnvironmentParticlePrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerHitProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerHitCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightPriorityRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightPriorityUsageProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectPrototypeSID> PlayerHitEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectPrototypeSID> NPCHitEffects;
    
    STALKER2_API FLightningStrikeDamagePrototype();
};


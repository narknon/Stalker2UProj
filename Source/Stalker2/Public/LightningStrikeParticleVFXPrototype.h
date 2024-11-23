#pragma once
#include "CoreMinimal.h"
#include "EnvironmentParticlePrototype.h"
#include "LightningStrikeVFXMaterialPrototype.h"
#include "LightningStrikeParticleVFXPrototype.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct STALKER2_API FLightningStrikeParticleVFXPrototype : public FEnvironmentParticlePrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> LightningStrikeDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightningStrikeVFXMaterialPrototype LightningStrikeMetal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightningStrikeVFXMaterialPrototype LightningStrikeWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightningStrikeVFXMaterialPrototype LightningStrikeWood;
    
    FLightningStrikeParticleVFXPrototype();
};


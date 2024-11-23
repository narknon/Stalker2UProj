#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EDynamicParticleType.h"
#include "EWeather.h"
#include "LightningStrikeDamagePrototype.h"
#include "LightningStrikeParticleVFXPrototype.h"
#include "ParticleActorComponentSpawnPrototype.h"
#include "ParticleActorSpawnPrototype.h"
#include "ParticleBiomePrototype.h"
#include "ParticleDistancePrototype.h"
#include "ParticleIndoorSpawnPrototype.h"
#include "ParticlePlayerComponentSpawnPrototype.h"
#include "ParticleWindIntensityPrototype.h"
#include "Templates/SubclassOf.h"
#include "DynamicEnvironmentParticleDataRow.generated.h"

class UNiagaraParameterProvider;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct STALKER2_API FDynamicEnvironmentParticleDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicParticleType ParticleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UNiagaraParameterProvider>> Providers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSpawnOnWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopOnCutscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleIndoorSpawnPrototype IndoorSpawnPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleBiomePrototype BiomeSpawnPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleDistancePrototype PlayerDistancePrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleWindIntensityPrototype WindIntensityPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeather, FParticleActorSpawnPrototype> ActorSpawnPrototypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeather, FParticlePlayerComponentSpawnPrototype> PlayerComponentSpawnPrototypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeather, FParticleActorComponentSpawnPrototype> ActorComponentSpawnPrototypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UNiagaraSystem>> ActorParticleVFXes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> PlayerParticleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightningStrikeParticleVFXPrototype LightningStrikeVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightningStrikeDamagePrototype LightningStrikeDamagePrototype;
    
    FDynamicEnvironmentParticleDataRow();
};


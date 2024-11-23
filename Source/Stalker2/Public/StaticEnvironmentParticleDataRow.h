#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStaticParticleType.h"
#include "ParticleDaytimePrototype.h"
#include "ParticleDistancePrototype.h"
#include "ParticleIndoorSpawnPrototype.h"
#include "ParticleLairPrototype.h"
#include "ParticleRainIntensityPrototype.h"
#include "ParticleWeatherPrototype.h"
#include "ParticleWindIntensityPrototype.h"
#include "Templates/SubclassOf.h"
#include "StaticEnvironmentParticleDataRow.generated.h"

class UNiagaraParameterProvider;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct STALKER2_API FStaticEnvironmentParticleDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStaticParticleType ParticleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UNiagaraParameterProvider>> Providers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleIndoorSpawnPrototype IndoorSpawnPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleWeatherPrototype WeatherTypePrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleLairPrototype LairPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleDistancePrototype PlayerDistancePrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleDaytimePrototype DaytimePrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRainIntensityPrototype RainIntensityPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleWindIntensityPrototype WindIntensityPrototype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UNiagaraSystem>> NiagaraSystems;
    
    FStaticEnvironmentParticleDataRow();
};


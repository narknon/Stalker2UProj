#pragma once
#include "CoreMinimal.h"
#include "EWeather.h"
#include "ParticleConditionPrototype.h"
#include "ParticleWeatherPrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleWeatherPrototype : public FParticleConditionPrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWeather> AllowedWeatherTypes;
    
    FParticleWeatherPrototype();
};


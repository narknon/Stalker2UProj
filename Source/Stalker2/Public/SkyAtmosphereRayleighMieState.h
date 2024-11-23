#pragma once
#include "CoreMinimal.h"
#include "FloatParameter.h"
#include "LinearColorParameter.h"
#include "SkyAtmosphereRayleighMieState.generated.h"

USTRUCT(BlueprintType)
struct FSkyAtmosphereRayleighMieState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatParameter RayleighScatteringScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColorParameter RayleighScattering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatParameter RayleighExponentialDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatParameter MieScatteringScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColorParameter MieScattering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatParameter MieScatteringAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColorParameter MieAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatParameter MieAnisotropy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatParameter MieExponentialDistribution;
    
    STALKER2_API FSkyAtmosphereRayleighMieState();
};


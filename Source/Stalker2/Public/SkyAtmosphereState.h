#pragma once
#include "CoreMinimal.h"
#include "SkyAtmosphereBaseState.h"
#include "SkyAtmosphereRayleighMieState.h"
#include "SkyAtmosphereState.generated.h"

USTRUCT(BlueprintType)
struct FSkyAtmosphereState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyAtmosphereBaseState Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyAtmosphereRayleighMieState RayleighMie;
    
    STALKER2_API FSkyAtmosphereState();
};


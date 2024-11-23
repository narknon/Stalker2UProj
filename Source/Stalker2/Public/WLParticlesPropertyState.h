#pragma once
#include "CoreMinimal.h"
#include "WLParticlesPropertyState.generated.h"

USTRUCT(BlueprintType)
struct FWLParticlesPropertyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationSpeed;
    
    STALKER2_API FWLParticlesPropertyState();
};


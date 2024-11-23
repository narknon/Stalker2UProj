#pragma once
#include "CoreMinimal.h"
#include "VelocityDebug.generated.h"

USTRUCT(BlueprintType)
struct FVelocityDebug {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LinearVelocity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AngularVelocity;
    
    STALKER2_API FVelocityDebug();
};


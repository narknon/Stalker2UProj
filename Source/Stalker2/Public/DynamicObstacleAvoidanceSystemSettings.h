#pragma once
#include "CoreMinimal.h"
#include "DynamicObstacleAvoidanceSystemSettings.generated.h"

USTRUCT(BlueprintType)
struct FDynamicObstacleAvoidanceSystemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxUpdateAgentsPerTick;
    
    STALKER2_API FDynamicObstacleAvoidanceSystemSettings();
};


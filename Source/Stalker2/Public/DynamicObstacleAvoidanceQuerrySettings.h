#pragma once
#include "CoreMinimal.h"
#include "DynamicObstacleAvoidanceQuerrySettings.generated.h"

USTRUCT(BlueprintType)
struct FDynamicObstacleAvoidanceQuerrySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTrackingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTrackingOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreferredAvoidanceCorridorWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCorridorSectionLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObstaclesQueryDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AgentMinAvoidanceSampleStep;
    
    STALKER2_API FDynamicObstacleAvoidanceQuerrySettings();
};


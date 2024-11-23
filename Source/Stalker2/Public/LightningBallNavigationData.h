#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LightningBallNavigationData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FLightningBallNavigationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPatrolPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NeighborPoints;
    
    FLightningBallNavigationData();
};


#pragma once
#include "CoreMinimal.h"
#include "ECompassPosition.h"
#include "CompassTypeSettings.generated.h"

USTRUCT(BlueprintType)
struct FCompassTypeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCompassType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleIfTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompassPosition CompassPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
    STALKER2_API FCompassTypeSettings();
};


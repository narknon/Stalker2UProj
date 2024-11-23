#pragma once
#include "CoreMinimal.h"
#include "CompassTypeSettings.h"
#include "MapTypeSettings.h"
#include "MarkerIconSettings.h"
#include "MarkerTypeSettings.generated.h"

USTRUCT(BlueprintType)
struct FMarkerTypeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkerIconSettings IconSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrackable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHaveDiscoveredState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompassTypeSettings CompassTypeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapTypeSettings MapTypeSettings;
    
    STALKER2_API FMarkerTypeSettings();
};


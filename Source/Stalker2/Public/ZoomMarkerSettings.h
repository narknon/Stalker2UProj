#pragma once
#include "CoreMinimal.h"
#include "ZoomMarkerSettings.generated.h"

USTRUCT(BlueprintType)
struct FZoomMarkerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxZoomLevelToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinZoomLevelToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxZoomLevelToShowHab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinZoomLevelToShowHub;
    
    STALKER2_API FZoomMarkerSettings();
};


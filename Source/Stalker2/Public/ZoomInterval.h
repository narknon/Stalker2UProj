#pragma once
#include "CoreMinimal.h"
#include "ZoomInterval.generated.h"

USTRUCT(BlueprintType)
struct FZoomInterval {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinZoomLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxZoomLevel;
    
    STALKER2_API FZoomInterval();
};


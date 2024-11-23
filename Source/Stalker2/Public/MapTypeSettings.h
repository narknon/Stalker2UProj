#pragma once
#include "CoreMinimal.h"
#include "ZoomInterval.h"
#include "MapTypeSettings.generated.h"

USTRUCT(BlueprintType)
struct FMapTypeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoomInterval ZoomInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZoomInterval TrackedZoomInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportHubFolding;
    
    STALKER2_API FMapTypeSettings();
};


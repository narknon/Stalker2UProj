#pragma once
#include "CoreMinimal.h"
#include "MarkerIconPair.h"
#include "MarkerStateIconsData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FMarkerStateIconsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColorStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkerIconPair Compass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkerIconPair Map;
    
    FMarkerStateIconsData();
};


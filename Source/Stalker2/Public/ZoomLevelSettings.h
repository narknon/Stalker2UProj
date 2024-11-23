#pragma once
#include "CoreMinimal.h"
#include "MoveSettings.h"
#include "ZoomLevelSettings.generated.h"

USTRUCT(BlueprintType)
struct FZoomLevelSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveSettings MoveSettings;
    
    STALKER2_API FZoomLevelSettings();
};


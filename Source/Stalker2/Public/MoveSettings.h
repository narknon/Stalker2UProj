#pragma once
#include "CoreMinimal.h"
#include "MoveSettings.generated.h"

USTRUCT(BlueprintType)
struct FMoveSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedMapZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    STALKER2_API FMoveSettings();
};


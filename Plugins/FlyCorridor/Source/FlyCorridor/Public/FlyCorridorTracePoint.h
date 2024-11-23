#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlyCorridorTracePoint.generated.h"

USTRUCT(BlueprintType)
struct FLYCORRIDOR_API FFlyCorridorTracePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    FFlyCorridorTracePoint();
};


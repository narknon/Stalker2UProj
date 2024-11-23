#pragma once
#include "CoreMinimal.h"
#include "AnimPlayerLookAtPreset.generated.h"

USTRUCT(BlueprintType)
struct FAnimPlayerLookAtPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationFreemoveEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationStopEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRepeatTargetMovement;
    
    STALKER2_API FAnimPlayerLookAtPreset();
};


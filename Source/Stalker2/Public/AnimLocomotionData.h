#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DirectionBlendData.h"
#include "EDirections.h"
#include "EStateTag.h"
#include "MovementPlayRateStructure.h"
#include "MovementRotationStructure.h"
#include "AnimLocomotionData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimLocomotionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClampedDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BPDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDirections Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectionBlendData DirectionBlendParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementRotationStructure MovementRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegIKAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLegIKEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementPlayRateStructure MovementPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePlayRateCurves;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStateTag, UCurveFloat*> MovementPlayRateCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HeadEvasionOffset;
    
    FAnimLocomotionData();
};


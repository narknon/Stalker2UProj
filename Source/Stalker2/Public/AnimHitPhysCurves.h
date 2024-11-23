#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsControl -ObjectName=PhysicsControlMultiplier -FallbackName=PhysicsControlMultiplier
#include "AnimHitPhysCurves.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHitPhysCurves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsControlMultiplier WorldSpaceControlMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* WorldSpaceStrengthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* WorldSpaceBlendValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsControlMultiplier ParentSpaceControlMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ParentSpaceStrengthMultiplier;
    
    FAnimHitPhysCurves();
};


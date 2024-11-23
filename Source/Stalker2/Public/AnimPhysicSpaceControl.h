#pragma once
#include "CoreMinimal.h"
#include "PhysicsControlData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsControl -ObjectName=PhysicsControlNames -FallbackName=PhysicsControlNames
#include "PhysicsControlData.h"
#include "AnimPhysicSpaceControl.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPhysicSpaceControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsControlData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsControlSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPhysicsControlNames> LimbControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsControlNames AllControls;
    
    FAnimPhysicSpaceControl();
};


#pragma once
#include "CoreMinimal.h"
#include "CommonHitArgs.h"
#include "PhysicsHitArgs.h"
#include "PhysicsHitSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPhysicsHitSignature, const FCommonHitArgs&, Common, const FPhysicsHitArgs&, HitArgs);


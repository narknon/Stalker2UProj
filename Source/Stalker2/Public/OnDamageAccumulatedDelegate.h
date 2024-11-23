#pragma once
#include "CoreMinimal.h"
#include "UID.h"
#include "OnDamageAccumulatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDamageAccumulated, FUID, LastDamageDealerUID, bool, bProjectileFlownThroughObject);


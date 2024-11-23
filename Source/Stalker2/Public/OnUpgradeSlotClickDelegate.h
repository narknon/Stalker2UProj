#pragma once
#include "CoreMinimal.h"
#include "OnUpgradeSlotClickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpgradeSlotClick, int32, OutSlotIndex);


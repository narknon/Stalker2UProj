#pragma once
#include "CoreMinimal.h"
#include "ESlotDirection.h"
#include "OnRowChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRowChanged, const ESlotDirection, SlotDirection);


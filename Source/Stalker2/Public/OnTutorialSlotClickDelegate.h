#pragma once
#include "CoreMinimal.h"
#include "OnTutorialSlotClickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTutorialSlotClick, int32, OutSlotIndex);


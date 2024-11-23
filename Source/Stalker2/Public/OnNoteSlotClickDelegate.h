#pragma once
#include "CoreMinimal.h"
#include "OnNoteSlotClickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNoteSlotClick, int32, OutSlotIndex);


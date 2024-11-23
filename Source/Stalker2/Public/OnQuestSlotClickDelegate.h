#pragma once
#include "CoreMinimal.h"
#include "OnQuestSlotClickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestSlotClick, int32, OutSlotIndex);


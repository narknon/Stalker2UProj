#pragma once
#include "CoreMinimal.h"
#include "OnChangeSlotSelectQuestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeSlotSelectQuest, int32, OutSlotIndex);


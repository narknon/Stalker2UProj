#pragma once
#include "CoreMinimal.h"
#include "OnSlotClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlotClicked, int32, InIndexButton);


#pragma once
#include "CoreMinimal.h"
#include "ItemUID.h"
#include "OnSplitConfirmedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSplitConfirmed, int32, Count, FItemUID, ItemUID);


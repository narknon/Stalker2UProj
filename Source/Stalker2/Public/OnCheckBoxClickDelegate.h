#pragma once
#include "CoreMinimal.h"
#include "OnCheckBoxClickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCheckBoxClick, bool, bOutChecked);


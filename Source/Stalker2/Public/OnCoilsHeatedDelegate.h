#pragma once
#include "CoreMinimal.h"
#include "OnCoilsHeatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCoilsHeated, float, Value);


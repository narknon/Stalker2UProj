#pragma once
#include "CoreMinimal.h"
#include "OnChangeCheckDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeCheck, bool, bOutChecked);


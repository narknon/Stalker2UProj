#pragma once
#include "CoreMinimal.h"
#include "RightClickMenuItemData.h"
#include "OnMenuItemSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuItemSelected, const FRightClickMenuItemData&, Data);


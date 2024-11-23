#pragma once
#include "CoreMinimal.h"
#include "RightClickMenuItemData.h"
#include "OnMenuItemHoverDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMenuItemHover, const FRightClickMenuItemData&, Data, const bool, bInHovered);


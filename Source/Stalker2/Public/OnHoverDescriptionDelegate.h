#pragma once
#include "CoreMinimal.h"
#include "OnHoverDescriptionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoverDescription, bool, bIsHovered);


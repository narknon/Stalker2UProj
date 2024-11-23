#pragma once
#include "CoreMinimal.h"
#include "EDetailsElementType.h"
#include "OnHoveredDetailsElementDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHoveredDetailsElement, bool, bIsHovered, EDetailsElementType, ElementType);


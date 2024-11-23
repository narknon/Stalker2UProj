#pragma once
#include "CoreMinimal.h"
#include "OnUserMarkerButtonHoveredDelegate.generated.h"

class UUserMarkerSelectorButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserMarkerButtonHovered, UUserMarkerSelectorButton*, HoveredButton);


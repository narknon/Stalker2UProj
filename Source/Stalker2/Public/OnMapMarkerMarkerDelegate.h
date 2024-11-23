#pragma once
#include "CoreMinimal.h"
#include "OnMapMarkerMarkerDelegate.generated.h"

class UWorldMapMarker;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMapMarkerMarker, bool, bIsHovered, UWorldMapMarker*, InHoverMarkerWidget);


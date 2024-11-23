#pragma once
#include "CoreMinimal.h"
#include "SectorSelectionHandle.h"
#include "SectorEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSectorEvent, FSectorSelectionHandle, Handle);


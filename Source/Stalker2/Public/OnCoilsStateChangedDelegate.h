#pragma once
#include "CoreMinimal.h"
#include "ECoilsState.h"
#include "OnCoilsStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCoilsStateChanged, ECoilsState, State);


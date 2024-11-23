#pragma once
#include "CoreMinimal.h"
#include "OnStageChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStageChanged, int32, NewTargetStageIndex);


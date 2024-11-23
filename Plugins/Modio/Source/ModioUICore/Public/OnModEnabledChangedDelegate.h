#pragma once
#include "CoreMinimal.h"
#include "ModioModID.h"
#include "OnModEnabledChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnModEnabledChanged, FModioModID, Mod, bool, bNewStateIsEnabled);


#pragma once
#include "CoreMinimal.h"
#include "ModioModID.h"
#include "OnGetModEnabledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FOnGetModEnabled, FModioModID, Mod);


#pragma once
#include "CoreMinimal.h"
#include "OnConfirmPopupStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConfirmPopupStateChanged, bool, InVisible);


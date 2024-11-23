#pragma once
#include "CoreMinimal.h"
#include "OnNavigationButtonPressedDelegate.generated.h"

class USettingsNavigationButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNavigationButtonPressed, USettingsNavigationButton*, Button);


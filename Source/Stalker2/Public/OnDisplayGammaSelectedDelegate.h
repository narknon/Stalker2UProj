#pragma once
#include "CoreMinimal.h"
#include "OnDisplayGammaSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDisplayGammaSelected, const bool, InSelected);


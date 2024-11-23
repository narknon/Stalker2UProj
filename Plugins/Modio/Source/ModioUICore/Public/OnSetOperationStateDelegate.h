#pragma once
#include "CoreMinimal.h"
#include "EModioUIAsyncOperationWidgetState.h"
#include "OnSetOperationStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSetOperationState, EModioUIAsyncOperationWidgetState, NewState);


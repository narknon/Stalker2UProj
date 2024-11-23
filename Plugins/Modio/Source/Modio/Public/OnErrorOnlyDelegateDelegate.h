#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "OnErrorOnlyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnErrorOnlyDelegate, FModioErrorCode, ErrorCode);


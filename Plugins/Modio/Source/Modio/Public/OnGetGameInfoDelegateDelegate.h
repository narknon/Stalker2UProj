#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "ModioOptionalGameInfo.h"
#include "OnGetGameInfoDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetGameInfoDelegate, FModioErrorCode, ErrorCode, FModioOptionalGameInfo, GameInfo);


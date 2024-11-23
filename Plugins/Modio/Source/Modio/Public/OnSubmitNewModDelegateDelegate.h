#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "ModioOptionalModID.h"
#include "OnSubmitNewModDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSubmitNewModDelegate, FModioErrorCode, ErrorCode, FModioOptionalModID, NewModID);


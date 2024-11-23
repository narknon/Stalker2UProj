#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "ModioOptionalUserList.h"
#include "OnMuteUsersDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnMuteUsersDelegate, FModioErrorCode, ErrorCode, FModioOptionalUserList, NewUserList);


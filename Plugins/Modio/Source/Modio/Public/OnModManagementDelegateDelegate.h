#pragma once
#include "CoreMinimal.h"
#include "ModioModManagementEvent.h"
#include "OnModManagementDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnModManagementDelegate, FModioModManagementEvent, Event);


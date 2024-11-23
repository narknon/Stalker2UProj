#pragma once
#include "CoreMinimal.h"
#include "OnNotificationExpiredDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnNotificationExpired, UWidget*, NotificationWidget);


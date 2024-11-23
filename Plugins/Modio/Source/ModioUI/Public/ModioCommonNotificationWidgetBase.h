#pragma once
#include "CoreMinimal.h"
#include "ModioNotificationParams.h"
#include "ModioUINotification.h"
#include "OnNotificationExpiredDelegate.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonNotificationWidgetBase.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonNotificationWidgetBase : public UModioCommonActivatableWidget, public IModioUINotification {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotificationExpired ExpireDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpiryDuration;
    
public:
    UModioCommonNotificationWidgetBase();

    UFUNCTION(BlueprintCallable)
    static UWidget* CreateFromParams(TSubclassOf<UWidget> NotificationClass, const FModioNotificationParams& Params, UWidget* Outer);
    

    // Fix for true pure virtual functions not being implemented
};


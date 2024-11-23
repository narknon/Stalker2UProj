#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "NotificationWidget.generated.h"

class UQuestNotification;
class UQuestNotificationDataAsset;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UNotificationWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestNotification* MainQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestNotification* SecondaryQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* QuestVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    UQuestNotificationDataAsset* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UQuestNotification* NotificationWithActiveHint;
    
public:
    UNotificationWidget();

private:
    UFUNCTION(BlueprintCallable)
    void TryShowNextNotify();
    
    UFUNCTION(BlueprintCallable)
    void HideNotificationSecondary();
    
    UFUNCTION(BlueprintCallable)
    void HideNotificationMain();
    
};


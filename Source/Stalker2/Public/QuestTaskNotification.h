#pragma once
#include "CoreMinimal.h"
#include "EQuestTaskAnimationType.h"
#include "WidgetBase.h"
#include "QuestTaskNotification.generated.h"

class UImage;
class URichTextWidget;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UQuestTaskNotification : public UWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAnimStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAnimFinished);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextWidget* TextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TrackingStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CanceledStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FailedStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FinishedStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* UntrackingStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AppearAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FailAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FinishedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CancelAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LastAnim;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* QuestStateSwitcher;
    
public:
    UQuestTaskNotification();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostPlayTaskAnimation(const EQuestTaskAnimationType AnimationType);
    
    UFUNCTION(BlueprintCallable)
    void PlayTaskAnimation(const EQuestTaskAnimationType AnimationType, const bool bWithSound);
    
};


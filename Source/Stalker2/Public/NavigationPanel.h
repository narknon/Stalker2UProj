#pragma once
#include "CoreMinimal.h"
#include "OnChangeSelectSlotDelegate.h"
#include "OnSlotClickedDelegate.h"
#include "WidgetBase.h"
#include "NavigationPanel.generated.h"

class UHintInputController;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UNavigationPanel : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* SlotContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldEnableClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSelectDefaultSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldStopOthersInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBindClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveToNextSlotAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveToPreviousSlotAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreInputOnPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLoopMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PDASectionSwitch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeSelectSlot OnChangeSelectSlot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSlotClicked OnSlotClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* PrevPageHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* NextPageHint;
    
    UNavigationPanel();

    UFUNCTION(BlueprintCallable)
    void TransitToNextSlot();
    
    UFUNCTION(BlueprintCallable)
    void TransitSelectSlotRelease();
    
    UFUNCTION(BlueprintCallable)
    void TransitSelectSlotForward();
    
    UFUNCTION(BlueprintCallable)
    void TransitSelectSlotBack();
    
    UFUNCTION(BlueprintCallable)
    void MoveSelectSlotToPreviousSlot();
    
    UFUNCTION(BlueprintCallable)
    void MoveSelectSlotToNextSlot();
    
    UFUNCTION(BlueprintCallable)
    void InitClickTransition(FName ButtonId);
    
private:
    UFUNCTION(BlueprintCallable)
    void ClickMenuButton(const FName InButtonId);
    
};


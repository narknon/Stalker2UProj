#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChildViewBase.h"
#include "ESortGroup.h"
#include "QuickPanel.generated.h"

class UBorder;
class UCanvasPanelSlot;
class UHintAction;
class UHintInputController;
class UImage;
class UInventoryNew;
class UQuickSlot;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UQuickPanel : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFillQuickSlots;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESortGroup SlotADefaultEquipment;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESortGroup SlotBDefaultEquipment;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESortGroup SlotCDefaultEquipment;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESortGroup SlotDDefaultEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateShouldUseAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimPanelHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimPanelShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* NavBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* NavBorderSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultNavBorderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DraggingNavBorderColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* LeftHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* RightHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuickSlot* QuickSlot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuickSlot* QuickSlot3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuickSlot* QuickSlot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuickSlot* QuickSlot4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UQuickSlot*> QuickSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* HoldProgressLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* HoldProgressRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintAction* HintLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintAction* HintRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldInactiveOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldActiveOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HidePanelDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickSlotsFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickSlotsFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInventoryQuickPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuickSlot* CurrSelectedSlot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryNew* InventoryNew;
    
public:
    UQuickPanel();

    UFUNCTION(BlueprintCallable)
    void UpdateShouldUseAnimation() const;
    
    UFUNCTION()
    bool PlayShouldUseAnimationIfRequired(ESortGroup InSortGroup) const;
    
    UFUNCTION(BlueprintCallable)
    void OnQuickSlotMouseLeave(UQuickSlot* HoveredWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnQuickSlotMouseEnter(UQuickSlot* ItemWidget);
    
};


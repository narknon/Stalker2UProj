#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "EInventoryEquipmentSlot.h"
#include "ItemUID.h"
#include "RightClickMenuItemData.h"
#include "Templates/SubclassOf.h"
#include "ViewBaseExtended.h"
#include "InventoryNew.generated.h"

class UAkSwitchValue;
class UButton;
class UCanvasPanel;
class UCustomGrid;
class UCustomGridSlot;
class UDragDropZone;
class UEquipmentSlot;
class UEquipmentSlots;
class UHintInputController;
class UImage;
class UInteractableItemSlotBaseWidget;
class UItemDragWidget;
class UItemInfo;
class UOverlay;
class UQuickPanel;
class UStackSplitContextual;
class UStackSplittingWidget;
class UTextWidget;
class UUpgradeMenuWidget;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UInventoryNew : public UViewBaseExtended {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentSlots* EquipmentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuickPanel* QuickPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomGrid* InventoryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableItemSlotBaseWidget* CurrSelectedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableItemSlotBaseWidget* HoveredItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableItemSlotBaseWidget* CurrClickedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TakeAllIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* LootSeparator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomGrid* LootGridWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ButtonTakeAllItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDragDropZone* DropZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDragDropZone* RejectDropZoneInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDragDropZone* RejectDropZoneEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDragDropZone* RejectDropZoneLootSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDragDropZone* RejectDropZoneLootBig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDragDropZone* ContextualDropZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* HintsOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* SafeZoneOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintToggleEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintToggleDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintToggleAutoComparing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintUseItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintMoveToBackpack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintRemoveAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintUnload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintChangeCompareItemHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintDropItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintLootTakeItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintLootTakeAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintSortInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintShowContextualMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintMoveItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintPlaceItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintRemoveQuickAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseItemHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropItemHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUpgradeMenuWidget* UpgradeMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* SortButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* LootOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconTakeAllItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TooltipAndHintsPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHintInputController*> VisibleStateHints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHintInputController*> CommonHints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* ItemTypeSwitchValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TooltipDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UUserWidget*, ESlateVisibility> GridVisibilityMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* CurrGamepadNavigatedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemDragWidget* DragWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemDragWidget* DragWidgetGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemTooltipShowDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemTooltipCompareShowDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemInfo> ItemTooltipClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemDragWidget> DragWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemDragWidget> DragGridWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStackSplittingWidget> StackSplitWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStackSplitContextual* StackSplitContextual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStackSplittingWidget* StackSplit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ItemBacktDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ItemBackOk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ItemBackInterceptOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ItemBackInterceptTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ItemBackDepend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ItemBackHoveredCompatible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadNavigationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RadiationMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ToggleEquipmentIconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OverWeightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NormalWeightColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* RightClickMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableItemSlotBaseWidget* ItemSlotStartedDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableItemSlotBaseWidget* CurrGamepadSelectedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryEquipmentSlot CurrentCompareSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentSlot* EquipmentSlotToCompare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryEquipmentSlot CurrentCompareItemSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCustomGridSlot*> GridSlotsPool;
    
public:
    UInventoryNew();

    UFUNCTION(BlueprintCallable)
    void UseItemHoldReleased();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateInputDependent();
    
public:
    UFUNCTION(BlueprintCallable)
    void UIInventoryToggleItemInfo();
    
    UFUNCTION(BlueprintCallable)
    void UIInventoryToggleEquipment();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UIInventoryTakeItem();
    
public:
    UFUNCTION(BlueprintCallable)
    void UIInventorySort();
    
    UFUNCTION(BlueprintCallable)
    void UIInventoryNavigateUp();
    
    UFUNCTION(BlueprintCallable)
    void UIInventoryNavigateRight();
    
    UFUNCTION(BlueprintCallable)
    void UIInventoryNavigateLeft();
    
    UFUNCTION(BlueprintCallable)
    void UIInventoryNavigateDown();
    
    UFUNCTION(BlueprintCallable)
    void UIInventoryNavigateComparingUp();
    
    UFUNCTION(BlueprintCallable)
    void UIInventoryNavigateComparingRight();
    
    UFUNCTION(BlueprintCallable)
    void UIInventoryNavigateComparingLeft();
    
    UFUNCTION(BlueprintCallable)
    void UIInventoryNavigateComparingDown();
    
    UFUNCTION(BlueprintCallable)
    void UIInventoryItemAction();
    
    UFUNCTION(BlueprintCallable)
    void UIInventoryEnableAutoComparing();
    
    UFUNCTION(BlueprintCallable)
    void UIInventoryDropItem();
    
    UFUNCTION(BlueprintCallable)
    void UIInventoryCompareItem();
    
    UFUNCTION(BlueprintCallable)
    void UIInventoryChangeComparingItem();
    
    UFUNCTION(BlueprintCallable)
    void UIGamepadInventoryItemAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SortInventory();
    
    UFUNCTION(BlueprintCallable)
    void ShowTooltip();
    
    UFUNCTION(BlueprintCallable)
    void OnVisibilityChangedEvent(ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void OnUseItemHoldTriggered();
    
    UFUNCTION(BlueprintCallable)
    void OnTakeAllHoldTriggered();
    
    UFUNCTION(BlueprintCallable)
    void OnSplitConfirmed(int32 ItemAmountSplitForDrop, const FItemUID ItemUID);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSplitCanceled();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRightClickMenuItemSelected(const FRightClickMenuItemData& ItemData);
    
    UFUNCTION(BlueprintCallable)
    void OnRightClickMenuItemHover(const FRightClickMenuItemData& ItemData, const bool bInHover);
    
    UFUNCTION(BlueprintCallable)
    void OnRightClickMenuCanceled();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRejectDrop(const FVector2D Pos);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMoveToBackpackHoldTriggered();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGamepadSelectItemRelease();
    
    UFUNCTION(BlueprintCallable)
    void OnGamepadSelectItemForMoveRepeat();
    
    UFUNCTION(BlueprintCallable)
    void OnGamepadSelectItemForMovePress();
    
    UFUNCTION(BlueprintCallable)
    void OnGamepadItemSelectHoldFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGamepadEquipItem();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGamepadContextMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnGamepadCompareItemRepeat();
    
    UFUNCTION(BlueprintCallable)
    void OnGamepadCompareItemRelease();
    
    UFUNCTION(BlueprintCallable)
    void OnGamepadCompareItemPress();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnExitClick(FName ButtonId);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipHoldTriggered();
    
    UFUNCTION(BlueprintCallable)
    void OnDropToEmptyPlace(const FVector2D Pos);
    
    UFUNCTION(BlueprintCallable)
    void OnDropItemHoldTriggered();
    
    UFUNCTION(BlueprintCallable)
    void OnDragDropCanceled(const FVector2D Pos);
    
public:
    UFUNCTION(BlueprintCallable)
    void LootTakeItemAction();
    
    UFUNCTION(BlueprintCallable)
    void LootTakeAllHoldStarted();
    
    UFUNCTION(BlueprintCallable)
    void LootTakeAllHoldReleased();
    
    UFUNCTION(BlueprintCallable)
    void InventoryWidgetTakeAllItems();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HideRightClickMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void GamepadDragStop();
    
    UFUNCTION(BlueprintCallable)
    void DropItemHoldReleased();
    
};


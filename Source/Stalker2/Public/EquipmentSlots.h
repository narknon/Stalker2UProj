#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DragDropZone.h"
#include "EInventoryEquipmentSlot.h"
#include "EquipmentNavigationPaths.h"
#include "EquipmentSlots.generated.h"

class UBorder;
class UCanvasPanel;
class UCanvasPanelSlot;
class UEquipmentSlot;
class UInteractableItemSlotBaseWidget;
class UInventoryNew;
class UItemDragWidget;
class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UEquipmentSlots : public UDragDropZone {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentSlot* MainHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentSlot* SecondHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentSlot* Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentSlot* Detector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentSlot* Artifact1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentSlot* Artifact2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentSlot* Artifact3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentSlot* Artifact4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentSlot* Artifact5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentSlot* Pistol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentSlot* Torso;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* NavBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* HeaderText;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultNavBorderColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DraggingNavBorderColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryNew* InventoryNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UEquipmentSlot*> ItemSlotsWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInventoryEquipmentSlot, FEquipmentNavigationPaths> NavigationPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UItemDragWidget* CurrMovingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEquipmentSlot* CurrPickedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* NavBorderSlot;
    
public:
    UEquipmentSlots();

    UFUNCTION(BlueprintCallable)
    void OnItemMouseLeave(UInteractableItemSlotBaseWidget* ItemWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnItemMouseEnter(UInteractableItemSlotBaseWidget* ItemWidget);
    
};


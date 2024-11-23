#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDpadNavigation.h"
#include "ItemSelectorSlotBase.h"
#include "ItemSelectorEquipSlot.generated.h"

class UHintSwitcher;
class UOverlay;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UItemSelectorEquipSlot : public UItemSelectorSlotBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* SlotHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* SlotHighlightWhite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SlotSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintSwitcher* HintSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDpadNavigation DpadNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexEquipSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SlotSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlipHintLetter;
    
    UItemSelectorEquipSlot();

};


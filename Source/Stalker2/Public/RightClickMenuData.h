#pragma once
#include "CoreMinimal.h"
#include "RightClickMenuData.generated.h"

class UItemSlotBaseWidget;

USTRUCT(BlueprintType)
struct FRightClickMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UItemSlotBaseWidget* ClickedItemSlot;
    
    STALKER2_API FRightClickMenuData();
};


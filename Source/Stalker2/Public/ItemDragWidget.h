#pragma once
#include "CoreMinimal.h"
#include "ItemSlotBaseWidget.h"
#include "ItemDragWidget.generated.h"

class UBorder;
class UImage;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UItemDragWidget : public UItemSlotBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* ItemImageSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ReturnEquipSlot;
    
public:
    UItemDragWidget();

};


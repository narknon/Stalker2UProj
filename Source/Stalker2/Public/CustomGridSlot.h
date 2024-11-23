#pragma once
#include "CoreMinimal.h"
#include "InteractableItemSlotBaseWidget.h"
#include "CustomGridSlot.generated.h"

class UImage;
class USizeBox;
class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UCustomGridSlot : public UInteractableItemSlotBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* ItemImageSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* StackAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Broken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Attach;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSlotSize;
    
    UCustomGridSlot();

};


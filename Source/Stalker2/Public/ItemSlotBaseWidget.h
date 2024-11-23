#pragma once
#include "CoreMinimal.h"
#include "IconSettings.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "ItemSlotBaseWidget.generated.h"

class UImageWidget;
class UItemSlotState;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UItemSlotBaseWidget : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ItemAndAttachesOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* AttachesOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* ItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemSlotState* SlotState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIconSettings IconSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UImageWidget> AttachImageWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImageWidget*> AttachesImages;
    
public:
    UItemSlotBaseWidget();

};


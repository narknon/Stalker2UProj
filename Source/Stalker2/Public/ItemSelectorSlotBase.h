#pragma once
#include "CoreMinimal.h"
#include "EMainHandEquipmentType.h"
#include "WidgetBase.h"
#include "ItemSelectorSlotBase.generated.h"

class UImageWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UItemSelectorSlotBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* WeaponIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AlternativeIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainHandEquipmentType DisplaySlotType;
    
    UItemSelectorSlotBase();

};


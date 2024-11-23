#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnUpgradeSlotClickDelegate.h"
#include "PDASlotBase.h"
#include "PDAUpgradesSlot.generated.h"

class UImageWidget;
class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDAUpgradesSlot : public UPDASlotBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpgradeSlotClick OnUpgradeSlotClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* RegionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* ButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultIconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StyleIdWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StyleArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StyleHelmet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StyleDetector;
    
    UPDAUpgradesSlot();

};


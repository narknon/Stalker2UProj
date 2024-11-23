#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PDASlotPanelBase.h"
#include "PDAUpgradePanel.generated.h"

class UPDATextBorder;
class UUpgradeMenuWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDAUpgradePanel : public UPDASlotPanelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUpgradeMenuWidget* UpgradeMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDATextBorder* EquipedBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDATextBorder* UnEquipedBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EquipedBorderLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnEquipedBorderLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UpgradeColor;
    
    UPDAUpgradePanel();

};


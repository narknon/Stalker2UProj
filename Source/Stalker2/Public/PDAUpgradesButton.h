#pragma once
#include "CoreMinimal.h"
#include "PDAButtonBase.h"
#include "UpgradeFilterSettings.h"
#include "PDAUpgradesButton.generated.h"

class UImageWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDAUpgradesButton : public UPDAButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* ButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpgradeFilterSettings FilterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldEnableStailManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPDAUpgradesButton();

};


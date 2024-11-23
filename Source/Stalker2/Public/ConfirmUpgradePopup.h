#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "ConfirmUpgradePopup.generated.h"

class UHintInputController;
class URichTextWidget;
class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UConfirmUpgradePopup : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextWidget* RichDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ConfirmHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* CancelHint;
    
public:
    UConfirmUpgradePopup();

};


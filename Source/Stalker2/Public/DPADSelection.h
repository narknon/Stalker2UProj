#pragma once
#include "CoreMinimal.h"
#include "EDpadNavigation.h"
#include "WidgetBase.h"
#include "DPADSelection.generated.h"

class UImageWidget;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UDPADSelection : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDpadNavigation DpadNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DPadStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLoadWidgetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidgetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* Dpad_Active;
    
    UDPADSelection();

};


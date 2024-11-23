#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "SettingsNavigationPanel.generated.h"

class UPanelWidget;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API USettingsNavigationPanel : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* SlotContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* NavPanelScroll;
    
    USettingsNavigationPanel();

};


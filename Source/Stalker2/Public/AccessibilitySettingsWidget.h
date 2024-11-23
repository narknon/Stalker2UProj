#pragma once
#include "CoreMinimal.h"
#include "SettingsPage.h"
#include "AccessibilitySettingsWidget.generated.h"

class USettingElementSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UAccessibilitySettingsWidget : public USettingsPage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingElementSwitcher* ColorBlindness;
    
public:
    UAccessibilitySettingsWidget();

};


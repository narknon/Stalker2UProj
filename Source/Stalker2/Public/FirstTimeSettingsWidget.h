#pragma once
#include "CoreMinimal.h"
#include "OnGammaSelectedDelegate.h"
#include "SettingsPage.h"
#include "FirstTimeSettingsWidget.generated.h"

class USettingElementSwitcher;
class USettingsElementPercent;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UFirstTimeSettingsWidget : public USettingsPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingElementSwitcher* ColorBlindness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingElementSwitcher* InterfaceLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingElementSwitcher* VoicingLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsElementPercent* Gamma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingElementSwitcher* DynamicRange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGammaSelected OnGammaSelectedDelegate;
    
    UFirstTimeSettingsWidget();

};


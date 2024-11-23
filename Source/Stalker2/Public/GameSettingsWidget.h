#pragma once
#include "CoreMinimal.h"
#include "SettingsPage.h"
#include "GameSettingsWidget.generated.h"

class USettingElementOnOff;
class USettingElementSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UGameSettingsWidget : public USettingsPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingElementOnOff* AutoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingElementOnOff* Tutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingElementOnOff* InteractPaint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingElementSwitcher* Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingElementSwitcher* InterfaceLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingElementSwitcher* VoicingLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingElementOnOff* EnableStreamerMode;
    
    UGameSettingsWidget();

};


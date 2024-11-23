#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PressBuildControlSettingsWidget.generated.h"

class ULocalizedImage;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPressBuildControlSettingsWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocalizedImage* Gamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocalizedImage* Keyboard;
    
public:
    UPressBuildControlSettingsWidget();

};


#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MenuNavigationPanelBase.generated.h"

class UPanelWidget;
class USettingsNavigationButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UMenuNavigationPanelBase : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* SlotContainer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USettingsNavigationButton* HoveredButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USettingsNavigationButton*> Buttons;
    
public:
    UMenuNavigationPanelBase();

    UFUNCTION(BlueprintCallable)
    void OnButtonPressed(USettingsNavigationButton* PressedButton);
    
};


#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ModioFilterNavigationPanel.generated.h"

class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioFilterNavigationPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* SlotContainer;
    
public:
    UModioFilterNavigationPanel();

private:
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked(const int32 ButtonIndex);
    
};


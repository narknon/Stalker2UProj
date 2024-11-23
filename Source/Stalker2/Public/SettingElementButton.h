#pragma once
#include "CoreMinimal.h"
#include "ENestingIndex.h"
#include "SettingElement.h"
#include "SettingElementButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API USettingElementButton : public USettingElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENestingIndex NestingWindowIndex;
    
public:
    USettingElementButton();

private:
    UFUNCTION(BlueprintCallable)
    void ChangeLegendOnUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void ChangeLegendOnHovered();
    
};


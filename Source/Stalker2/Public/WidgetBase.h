#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWidget();
    
};


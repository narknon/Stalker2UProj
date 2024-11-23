#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "DialogActionWidget.generated.h"

class UImageWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UDialogActionWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* Icon;
    
public:
    UDialogActionWidget();

};


#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PopupHintImage.generated.h"

class UHintImageKeyboard;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPopupHintImage : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintImageKeyboard* HintImageKeyboard;
    
public:
    UPopupHintImage();

};


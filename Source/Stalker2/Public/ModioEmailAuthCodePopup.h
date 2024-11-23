#pragma once
#include "CoreMinimal.h"
#include "ModioCommonEmailAuthCodeViewBase.h"
#include "ModioEmailAuthCodePopup.generated.h"

class UModioCommonCodeInputTextBox;
class UTextWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioEmailAuthCodePopup : public UModioCommonEmailAuthCodeViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* ValidationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonCodeInputTextBox* CodeInputTextBox;
    
public:
    UModioEmailAuthCodePopup();

};


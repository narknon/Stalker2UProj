#pragma once
#include "CoreMinimal.h"
#include "HintBase.h"
#include "CommonHint.generated.h"

class UHintSwitcher;
class ULocalizationWidget;
class URichTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UCommonHint : public UHintBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocalizationWidget* LocalizationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintSwitcher* HintSwitcherWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextWidget* RichTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateLocalization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalizationSID;
    
    UCommonHint();

};


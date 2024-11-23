#pragma once
#include "CoreMinimal.h"
#include "ModioCommonTermsOfUseViewBase.h"
#include "ModioTermsOfUsePopup.generated.h"

class UHyperlinkButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioTermsOfUsePopup : public UModioCommonTermsOfUseViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHyperlinkButton* PrivacyPolicyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHyperlinkButton* TermsOfUseButton;
    
public:
    UModioTermsOfUsePopup();

};


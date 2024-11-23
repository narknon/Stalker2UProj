#pragma once
#include "CoreMinimal.h"
#include "ModioTerms.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonTermsOfUseViewBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonTermsOfUseViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModioCommonTermsOfUseViewSubmitClicked OnSubmitClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModioCommonTermsOfUseViewCancelClicked OnCancelClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModioCommonTermsOfUseLinkClicked OnLinkClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FModioTerms Terms;
    
    UModioCommonTermsOfUseViewBase();

};


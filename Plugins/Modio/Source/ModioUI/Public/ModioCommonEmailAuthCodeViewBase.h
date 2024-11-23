#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonEmailAuthCodeViewBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonEmailAuthCodeViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModioCommonEmailAuthCodeViewBackClicked OnBackClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModioCommonEmailAuthCodeViewSubmitClicked OnSubmitClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModioCommonEmailAuthCodeViewCancelClicked OnCancelClicked;
    
    UModioCommonEmailAuthCodeViewBase();

};


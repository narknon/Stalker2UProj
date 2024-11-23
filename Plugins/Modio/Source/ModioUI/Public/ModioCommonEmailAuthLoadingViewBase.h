#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonEmailAuthLoadingViewBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonEmailAuthLoadingViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModioCommonEmailAuthLoadingViewCancelClicked OnCancelClicked;
    
    UModioCommonEmailAuthLoadingViewBase();

};


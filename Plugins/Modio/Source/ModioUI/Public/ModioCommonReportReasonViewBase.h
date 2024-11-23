#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonReportReasonViewBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonReportReasonViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModioCommonReportReasonViewProceedClicked OnProceedClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModioCommonReportReasonViewCancelClicked OnCancelClicked;
    
    UModioCommonReportReasonViewBase();

};


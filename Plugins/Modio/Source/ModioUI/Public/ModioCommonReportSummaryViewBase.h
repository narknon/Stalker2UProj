#pragma once
#include "CoreMinimal.h"
#include "ModioReportParams.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonReportSummaryViewBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonReportSummaryViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnModioCommonReportSummaryViewSubmitClicked);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnModioCommonReportSummaryViewCancelClicked);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnModioCommonReportSummaryViewBackClicked);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModioCommonReportSummaryViewBackClicked OnBackClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModioCommonReportSummaryViewCancelClicked OnCancelClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModioCommonReportSummaryViewSubmitClicked OnSubmitClicked;
    
    UModioCommonReportSummaryViewBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetReportParams(const FModioReportParams& ReportParams);
    
};


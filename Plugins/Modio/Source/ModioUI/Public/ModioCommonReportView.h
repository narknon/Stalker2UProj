#pragma once
#include "CoreMinimal.h"
#include "EModioReportType.h"
#include "ModioErrorCode.h"
#include "ModioReportParams.h"
#include "ModioCommonReportViewBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonReportView.generated.h"

class UModioCommonReportEmailViewBase;
class UModioCommonReportMessageViewBase;
class UModioCommonReportReasonViewBase;
class UModioCommonReportSummaryViewBase;
class UModioCommonWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonReportView : public UModioCommonReportViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonWidgetSwitcher* ReportSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonReportReasonViewBase> ReportReasonViewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonReportEmailViewBase> ReportEmailViewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonReportMessageViewBase> ReportMessageViewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonReportSummaryViewBase> ReportSummaryViewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FModioReportParams ReportParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UModioCommonReportReasonViewBase* ReportReasonView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UModioCommonReportEmailViewBase* ReportEmailView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UModioCommonReportMessageViewBase* ReportMessageView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UModioCommonReportSummaryViewBase* ReportSummaryView;
    
public:
    UModioCommonReportView();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportSummaryViewSubmitClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportSummaryViewCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportSummaryViewBackClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportReasonViewProceedClicked(EModioReportType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportReasonViewCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportMessageViewSubmitClicked(const FString& message);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportMessageViewCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportMessageViewBackClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportEmailViewSubmitClicked(const FString& Email);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportEmailViewCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportEmailViewBackClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleReportSubmit(FModioErrorCode ErrorCode);
    
};


#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonReportEmailViewBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonReportEmailViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnModioCommonReportEmailViewSubmitClicked, const FString&, EmailAddress);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnModioCommonReportEmailViewCancelClicked);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnModioCommonReportEmailViewBackClicked);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModioCommonReportEmailViewBackClicked OnBackClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModioCommonReportEmailViewCancelClicked OnCancelClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModioCommonReportEmailViewSubmitClicked OnSubmitClicked;
    
    UModioCommonReportEmailViewBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEmailValid(const FString& Email);
    
};


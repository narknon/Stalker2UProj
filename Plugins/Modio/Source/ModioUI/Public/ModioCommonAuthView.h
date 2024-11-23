#pragma once
#include "CoreMinimal.h"
#include "ModioErrorCode.h"
#include "ModioCommonAuthViewBase.h"
#include "ModioCommonAuthView.generated.h"

class UModioCommonEmailAuthCodeViewBase;
class UModioCommonEmailAuthLoadingViewBase;
class UModioCommonEmailAuthViewBase;
class UModioCommonTermsOfUseViewBase;
class UModioCommonWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonAuthView : public UModioCommonAuthViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonWidgetSwitcher* AuthSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UModioCommonTermsOfUseViewBase* TermsOfUseView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UModioCommonEmailAuthViewBase* EmailAuthView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UModioCommonEmailAuthLoadingViewBase* EmailAuthLoadingView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UModioCommonEmailAuthCodeViewBase* EmailAuthCodeView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAuthCancelled;
    
public:
    UModioCommonAuthView();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetShowTermsOfView(bool bShow);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTermsOfUseViewSubmitClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTermsOfUseViewLinkClicked(const FString& URL);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTermsOfUseViewCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmailAuthViewSubmitClicked(const FString& EmailAddress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmailAuthViewCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmailAuthViewBackClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmailAuthLoadingViewCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmailAuthCodeViewSubmitClicked(const FString& AuthCode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmailAuthCodeViewCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmailAuthCodeViewBackClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleEmailAuthenticated(FModioErrorCode ErrorCode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleEmailAuthCodeSent(FModioErrorCode ErrorCode);
    
};


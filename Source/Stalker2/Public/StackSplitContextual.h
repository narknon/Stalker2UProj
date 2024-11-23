#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "ItemUID.h"
#include "StackSplitContextual.generated.h"

class UButton;
class UCurveFloat;
class UHintInputController;
class UImage;
class UOverlay;
class UPlatformSwitcherBase;
class USizeBox;
class USlider;
class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UStackSplitContextual : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSplitConfirmed, int32, Count, FItemUID, ItemUID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSplitCanceled);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ConfirmHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ConfirmAllHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* CancelHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SignCaptionPressedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SignCaptionDefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* Slider_ItemSplit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* SplitTextTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBoxSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OverlayNumbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OverlaySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SliderImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MovementCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ArrowLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ArrowRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlatformSwitcherBase* ArrowRightPlatformSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlatformSwitcherBase* ArrowLeftPlatformSwitcher;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* MainOverlay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ActiveBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NonActiveBarColor;
    
public:
    UStackSplitContextual();

private:
    UFUNCTION(BlueprintCallable)
    void PressChangeAmmount();
    
    UFUNCTION(BlueprintCallable)
    void OnSplitValueChanged(float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSplitButtonClicked();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlusButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnPlusButtonPressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlusButtonClicked();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMinusButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnMinusButtonPressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMinusButtonClicked();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHoldTimerTriggered();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDropAllButtonClicked();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCancelButtonClicked();
    
};


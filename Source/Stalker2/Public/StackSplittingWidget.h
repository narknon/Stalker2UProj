#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "StackSplittingWidget.generated.h"

class UButton;
class UImageWidget;
class USlider;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UStackSplittingWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_AmountToDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* Slider_ItemSplit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_FullAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button_Split;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_Split;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* ItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemName;
    
public:
    UStackSplittingWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnSplitValueChanged(float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSplitButtonClicked();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCancelButtonClicked();
    
};


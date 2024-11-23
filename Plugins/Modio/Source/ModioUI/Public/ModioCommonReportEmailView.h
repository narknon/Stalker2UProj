#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "ModioCommonReportEmailViewBase.h"
#include "ModioCommonReportEmailView.generated.h"

class UModioCommonButtonBase;
class UModioCommonEditableTextBox;
class UModioCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonReportEmailView : public UModioCommonReportEmailViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* TitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* DescriptionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* ValidationTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonEditableTextBox* EmailTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* BackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* SubmitButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* CancelButton;
    
public:
    UModioCommonReportEmailView();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetValidationTextVisibility(ESlateVisibility EVisbility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEditableTextBoxTextChanged(const FText& InText);
    
};


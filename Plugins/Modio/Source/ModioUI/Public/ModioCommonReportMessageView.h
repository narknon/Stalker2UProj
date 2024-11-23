#pragma once
#include "CoreMinimal.h"
#include "ModioCommonReportMessageViewBase.h"
#include "ModioCommonReportMessageView.generated.h"

class UModioCommonButtonBase;
class UModioCommonMultiLineEditableTextBox;
class UModioCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonReportMessageView : public UModioCommonReportMessageViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* TitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* DescriptionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* CharactersTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* ValidationTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* ErrorMessageTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonMultiLineEditableTextBox* MessageTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* BackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* SubmitButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* CancelButton;
    
public:
    UModioCommonReportMessageView();

    UFUNCTION(BlueprintCallable)
    void OnMultiLineTextBoxTextChanged(const FText& Text);
    
};


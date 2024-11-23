#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "ModioCommonEmailAuthViewBase.h"
#include "ModioCommonEmailAuthView.generated.h"

class UModioCommonButtonBase;
class UModioCommonEditableTextBox;
class UModioCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonEmailAuthView : public UModioCommonEmailAuthViewBase {
    GENERATED_BODY()
public:
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
    
    UModioCommonEmailAuthView();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetValidationTextVisibility(ESlateVisibility Visbility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEditableTextBoxTextChanged(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEmailValid(const FString& Email);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Components/SlateWrapperTypes.h"
#include "ModioCommonEmailAuthCodeViewBase.h"
#include "ModioCommonEmailAuthCodeView.generated.h"

class UEditableTextBox;
class UModioCommonButtonBase;
class UModioCommonCodeInputTextBox;
class UModioCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonEmailAuthCodeView : public UModioCommonEmailAuthCodeViewBase {
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
    UModioCommonButtonBase* BackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* SubmitButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* CancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonCodeInputTextBox* CodeInputTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* CustomCodeInputTextBox;
    
public:
    UModioCommonEmailAuthCodeView();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetValidationTextVisibility(ESlateVisibility Visbility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsBusy(bool bBusy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCodeValid(const FString& Code);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOnSubmitClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOnCustomSubmitClicked(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetInputText() const;
    
};


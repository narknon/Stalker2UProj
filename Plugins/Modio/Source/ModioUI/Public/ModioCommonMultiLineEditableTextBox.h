#pragma once
#include "CoreMinimal.h"
#include "Widgets/Text/ISlateEditableTextWidget.h"
#include "Styling/SlateTypes.h"
#include "Components/MultiLineEditableTextBox.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonMultiLineEditableTextBox.generated.h"

class UModioCommonMultiLineEditableTextBoxStyle;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonMultiLineEditableTextBox : public UMultiLineEditableTextBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonMultiLineEditableTextBoxStyle> ModioStyle;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMultiLineEditableTextBox::FOnMultiLineEditableTextBoxChangedEvent OnMultiLineEditableTextChanged;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCaretMovedWhenGainFocus;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SelectAllTextWhenFocused;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RevertTextOnEscape;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClearKeyboardFocusOnCommit;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SelectAllTextOnCommit;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysShowScrollbars;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowMultiLine;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVirtualKeyboardTrigger VirtualKeyboardTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextOverflowPolicy OverflowPolicy;
    
public:
    UModioCommonMultiLineEditableTextBox();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonMultiLineEditableTextBoxStyle> InStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTextBoxFocused() const;
    
};


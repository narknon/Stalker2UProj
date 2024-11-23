#pragma once
#include "CoreMinimal.h"
#include "ModioCommonEmailAuthViewBase.h"
#include "ModioEmailAuthPopup.generated.h"

class UModioCommonEditableTextBox;
class UTextWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioEmailAuthPopup : public UModioCommonEmailAuthViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* ValidationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonEditableTextBox* EmailTextBox;
    
public:
    UModioEmailAuthPopup();

private:
    UFUNCTION(BlueprintCallable)
    void OnEditableTextBoxTextChanged(const FText& Text);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEmail() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Widgets/Text/ISlateEditableTextWidget.h"
#include "Widgets/Text/ISlateEditableTextWidget.h"
#include "Widgets/Input/IVirtualKeyboardEntry.h"
#include "Components/Widget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonCodeInputTextBox.generated.h"

class UModioCommonCodeInputTextBoxStyle;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonCodeInputTextBox : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCodeSubmitDynamic);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonCodeInputTextBoxStyle> ModioStyle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextFlowDirection TextFlowDirection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVirtualKeyboardOptions VirtualKeyboardOptions;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVirtualKeyboardTrigger VirtualKeyboardTrigger;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfCharacters;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCodeSubmitDynamic OnCodeSubmitDynamic;
    
    UModioCommonCodeInputTextBox();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonCodeInputTextBoxStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetCodeString(const FString& InCodeString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCodeString() const;
    
};


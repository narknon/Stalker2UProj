#pragma once
#include "CoreMinimal.h"
#include "OnS2ButtonClickedDelegate.h"
#include "WidgetBase.h"
#include "ButtonBase.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UButtonBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnS2ButtonClicked OnButtonClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldEnableClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldEnableHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ButtonId;
    
    UButtonBase();

protected:
    UFUNCTION(BlueprintCallable)
    void ButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void ButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void ButtonClicked();
    
};


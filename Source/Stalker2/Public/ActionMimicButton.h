#pragma once
#include "CoreMinimal.h"
#include "ActionMimicSettings.h"
#include "WidgetBase.h"
#include "ActionMimicButton.generated.h"

class UButton;
class UInputAction;
class UInputTrigger;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UActionMimicButton : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializeAutomatically;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionMimicSettings MimicSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ButtonElement;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputTrigger* InputTrigger;
    
public:
    UActionMimicButton();

    UFUNCTION(BlueprintCallable)
    void OnMouseButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnMouseButtonPressed();
    
};


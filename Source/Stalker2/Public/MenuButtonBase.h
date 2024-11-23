#pragma once
#include "CoreMinimal.h"
#include "ShortcutData.h"
#include "WidgetBase.h"
#include "MenuButtonBase.generated.h"

class UButton;
class UMenuButtonActionBase;
class UMenuButtonStateDefiner;
class UTextWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UMenuButtonBase : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HoverAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PressAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoverAnimationSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideHoverAnimationSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressButtonAnimationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IsNotActiveOpacity;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMenuButtonActionBase* ButtonAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FShortcutData> ButtonShortcuts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMenuButtonStateDefiner*> ButtonStateDefiners;
    
public:
    UMenuButtonBase();

    UFUNCTION(BlueprintCallable)
    void OnPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnMousePressed();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonHovered();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteAction();
    
};


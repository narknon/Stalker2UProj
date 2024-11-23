#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "HudHintsPanel.generated.h"

class UHintInputController;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UHudHintsPanel : public UChildViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HintHudRestoreHideTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HintRestoreHUDNonActiveOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintRestoreHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* CommonHintBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ChangeAmmoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ItemSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* OpenInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* OpenMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* OpenPDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CommonHintsOpacitySpeedChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestoreOpacitySpeedChange;
    
public:
    UHudHintsPanel();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateInputDependent();
    
};


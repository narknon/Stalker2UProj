#pragma once
#include "CoreMinimal.h"
#include "PDAPage.h"
#include "UpgradePage.generated.h"

class UHintActionRichText;
class UHintInputController;
class UPDAUpgradePanel;
class UPDAUpgradesButton;
class URepairPriceWidget;
class UUpgradeMenuWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UUpgradePage : public UPDAPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDAUpgradePanel* UpgradePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDAUpgradesButton* ButtonAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDAUpgradesButton* ButtonWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDAUpgradesButton* ButtonArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPDAUpgradesButton* ButtonHelmet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUpgradeMenuWidget* UpgradeMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintNavLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintNavRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HideInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* RepairButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* RemoveAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* SelectInstalAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ButtonHintExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* NavigationHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* UpgradeSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintActionRichText* DisassembleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URepairPriceWidget* RepairPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpgradesIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EmptyScreenIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GreyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExitTextHintl10nSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BackTextHintl10nSID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPDAUpgradesButton*> MenuButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HintHoldTime;
    
public:
    UUpgradePage();

    UFUNCTION(BlueprintCallable)
    void UpdatePanel();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UnbindUpgradesNavigation();
    
    UFUNCTION(BlueprintCallable)
    void UnbindConfirmPopup();
    
public:
    UFUNCTION(BlueprintCallable)
    void UIPDAUpgradesTreeNavigationUp();
    
    UFUNCTION(BlueprintCallable)
    void UIPDAUpgradesTreeNavigationSelect();
    
    UFUNCTION(BlueprintCallable)
    void UIPDAUpgradesTreeNavigationRight();
    
    UFUNCTION(BlueprintCallable)
    void UIPDAUpgradesTreeNavigationLeft();
    
    UFUNCTION(BlueprintCallable)
    void UIPDAUpgradesTreeNavigationDown();
    
    UFUNCTION(BlueprintCallable)
    void UIPDAUpgradesTreeNavigationBack();
    
    UFUNCTION(BlueprintCallable)
    void UIPDAUpgradesDisassemble();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationUp();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationRight();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationLeft();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationDown();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationButtonRelease();
    
    UFUNCTION(BlueprintCallable)
    void Repair();
    
    UFUNCTION(BlueprintCallable)
    void Remove();
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleConfirmPopupBindings(bool InBind);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisassembleItemHoldStarted();
    
    UFUNCTION(BlueprintCallable)
    void DisassembleItemHoldReleased();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClickButtonMenu(const FName ButtonId);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearInput();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindUpgradesNavigation();
    
    UFUNCTION(BlueprintCallable)
    void BindConfirmPopup();
    
};


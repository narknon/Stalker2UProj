#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "EUpgradeTargetPartType.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "UpgradeMenuWidget.generated.h"

class UCanvasPanel;
class UConfirmUpgradePopup;
class UHintActionRichText;
class UHintInputController;
class UHorizontalBox;
class UImage;
class UImageWidget;
class UItemsStatsUpgrades;
class ULayeredItemImage;
class UOverlay;
class URepairPriceWidget;
class UTextWidget;
class UTexture2D;
class UUpgradeItemTooltipWidget;
class UUpgradePriceWidget;
class UUpgradeSection;
class UUpgradeSlot;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UUpgradeMenuWidget : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EUpgradeTargetPartType, UUpgradeSection*> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUpgradeSection*> SectionWidgetsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BlackFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConfirmWarningPopupL10n;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> UpgradeTooltipWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHintInputController* RepairButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URepairPriceWidget* RepairPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHintInputController* HideInformationButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHintInputController* RemoveAttachmentButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHintActionRichText* DisassembleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHintInputController* InSelectInstallAttachmentButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUpgradeSlot* CurrentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUpgradePriceWidget* PriceWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* ItemNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* PlayerMoneyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULayeredItemImage* UpgradedItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemsStatsUpgrades* ItemTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUpgradeItemTooltipWidget* UpgradeTooltipWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ConfirmPopupContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UConfirmUpgradePopup* ConfirmUpgradePopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* IconDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* PlayerMoneyBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TensileStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RepairButtonL10N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PriceStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrencyImageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUpgradeSection* LastActiveSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInfoOnClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPriceWidgetEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUpgradeSection* LastHoveredSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* SectionsCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BlackWeaponFade;
    
public:
    UUpgradeMenuWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponFadeProgress(const float Alpha, const bool bIsShowing);
    
    UFUNCTION(BlueprintCallable)
    void OnUpgradeMouseExit();
    
    UFUNCTION(BlueprintCallable)
    void OnUpgradeMouseEnter(const FString& UpgradeID);
    
    UFUNCTION(BlueprintCallable)
    void OnUpgradeClick(const FString& UpgradeID, UUpgradeSlot* InCurrentSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnSectionFadeProgress(const float Alpha, const bool bIsShowing);
    
    UFUNCTION(BlueprintCallable)
    void OnSectionClicked(UUpgradeSection* Section);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRevertLastUpgrade();
    
    UFUNCTION(BlueprintCallable)
    void OnRepair();
    
private:
    UFUNCTION(BlueprintCallable)
    FEventReply OnMouseBlackFadeDown(FGeometry InGeometry, const FPointerEvent& InMouseEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnApplyUpgrade(const FString& UpgradeID, UUpgradeSlot* InCurrentSlot);
    
    UFUNCTION(BlueprintCallable)
    void LogSectionPositions() const;
    
    UFUNCTION(BlueprintCallable)
    void LoadPrototypeEditor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawAttaches(UTexture2D* Texture, int32 AttachIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisassembleItem();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearAttaches();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeUpgradeModule();
    
};


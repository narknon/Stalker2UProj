#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELineDirection.h"
#include "EUpgradeTargetPartType.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "UpgradeSection.generated.h"

class UButton;
class UImage;
class UTextBlock;
class UUpgradeSection;
class UUpgradeSlot;
class UUpgradesSettings;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UUpgradeSection : public UWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSectionClicked, UUpgradeSection*, ClickedSection);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAnimationProgress, const float, Alpha, const bool, bShowing);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSectionClicked OnSectionClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabledSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUpgradeTargetPartType TargetPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELineDirection UpgradesLineDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELineDirection ModulesLineDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DotHoverSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DotNormalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimationProgress OnAnimationProgress;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVerticalBox*> ModulesVerticalBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVerticalBox*> UpgradesVerticalBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ConnectionLineUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* UpgradesPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ConnectionLineModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ModulesPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NewUpgradeNotification;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* UpgradesTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ModulesTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Dot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* DotButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUpgradeSlot> SlotWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUpgradesSettings* SettingsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUpgradeSlot*> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UpgradeL10n;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModulesL10n;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NewNotificationL10n;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUpgradeSlot* LastHighlightedSlot;
    
public:
    UUpgradeSection();

    UFUNCTION(BlueprintCallable)
    void ToggleSection();
    
    UFUNCTION(BlueprintCallable)
    void SectionUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void SectionHovered();
    
    UFUNCTION(BlueprintCallable)
    void SectionClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RebuildSections();
    
};


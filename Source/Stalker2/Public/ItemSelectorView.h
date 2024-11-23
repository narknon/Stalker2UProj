#pragma once
#include "CoreMinimal.h"
#include "EFireType.h"
#include "EMainHandEquipmentType.h"
#include "FireTypeDisplayInfo.h"
#include "ViewBaseExtended.h"
#include "ItemSelectorView.generated.h"

class UHintSwitcher;
class UImage;
class UImageWidget;
class UItemSelectorEquipSlot;
class UItemSelectorWeaponSlot;
class UTextWidget;
class UWidget;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UItemSelectorView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageWidget* AmmoIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* AmmoIconSwipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FireTypeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GrenadeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GrenadeIconSwipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NavigateArrowLeftGrenade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NavigateArrowRightGrenade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NavigateArrowLeftAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NavigateArrowRightAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* TextAmmoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* MidleSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* TextShutType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintSwitcher* ModeHintSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintSwitcher* AmmoHintSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintSwitcher* GrenadeHintSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* HintUseGuitar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ItemSelectorChangeGrenade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ItemSelectorChangeAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ItemSelectorChangeFireMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ItemSelectorRestoreState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastChangeSlotTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastChangeUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemSelectorChangeAmmoSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemSelectorChangeFireModeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemSelectorChangeGrenadeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainHandEquipmentType DefoultSelectSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldIgnoreEmptySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFireType, FFireTypeDisplayInfo> FireTypesInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemSelectorEquipSlot* SideSlotDetector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemSelectorEquipSlot* SideSlotFlashlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemSelectorEquipSlot* SideSlotUnarmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemSelectorEquipSlot* SideSlotLauncher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UItemSelectorWeaponSlot* SelectedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UItemSelectorWeaponSlot* HoveredSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UItemSelectorEquipSlot* SelectedEquipSlot;
    
public:
    UItemSelectorView();

    UFUNCTION(BlueprintCallable)
    void UIItemSelectorUnarm();
    
    UFUNCTION(BlueprintCallable)
    void UIItemSelectorGrenadeLauncher();
    
    UFUNCTION(BlueprintCallable)
    void UIItemSelectorFlashlight();
    
    UFUNCTION(BlueprintCallable)
    void UIItemSelectorDetector();
    
    UFUNCTION(BlueprintCallable)
    void ToggleAttachMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UItemSelectorWeaponSlot*> GetSlotsBP();
    
    UFUNCTION(BlueprintCallable)
    void ChangeFireType();
    
    UFUNCTION(BlueprintCallable)
    void ChangeAmmoType();
    
};


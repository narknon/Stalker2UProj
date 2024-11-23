#pragma once
#include "CoreMinimal.h"
#include "UpgradeSlotData.h"
#include "WidgetBase.h"
#include "UpgradeSlot.generated.h"

class UButton;
class UImage;
class UUpgradeSlot;
class UUpgradesSettings;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UUpgradeSlot : public UWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpgradeClick, const FString&, UgradeId, UUpgradeSlot*, InCurrentSlot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemMouseLeave);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemMouseEnter, const FString&, UgradeId);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* UpgradeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TopConnectionLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MiddleConnectionLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DownConnectionLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Locked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Blueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Highlighted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Mod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Border;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Discount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* UpgradeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUpgradesSettings* SettingsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUpgradeSlotData Data;
    
public:
    UUpgradeSlot();

    UFUNCTION(BlueprintCallable)
    void Unhighlight();
    
    UFUNCTION(BlueprintCallable)
    void OnUpgradeButtonClick();
    
    UFUNCTION(BlueprintCallable)
    void Highlight();
    
};


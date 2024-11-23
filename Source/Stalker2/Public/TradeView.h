#pragma once
#include "CoreMinimal.h"
#include "InventoryNew.h"
#include "TradeView.generated.h"

class UCustomGrid;
class UHintInputController;
class UPlatformSwitcher;
class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UTradeView : public UInventoryNew {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomGrid* TraderGridWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomGrid* SellGridWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomGrid* BuyGridWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* TradeConfirmInfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* TradeResultMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* TradeResultWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* TradeResultWeightUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlatformSwitcher* TraderButtonSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ButtonHintConfirmTrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ButtonHintCancelTrade;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintBuy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintSell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HintReturn;
    
public:
    UTradeView();

    UFUNCTION(BlueprintCallable)
    void SellOrBuyReturnItemAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnConfirmTradeHoldTriggered();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnConfirmTradeHoldReleased();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCancelTradeHoldTriggered();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCancelTradeHoldReleased();
    
};


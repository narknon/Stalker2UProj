#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerYK.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerYK : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerYK();

    UFUNCTION(BlueprintCallable, Exec)
    void XTestSetDiscount(const bool InbDiscount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XBlockItemSelectorSlots(const bool InBlock) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XBlockItemSelectorSlot(const bool InBlock, const int32 InSlotNum) const;
    
};


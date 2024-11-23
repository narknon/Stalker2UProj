#pragma once
#include "CoreMinimal.h"
#include "ItemContainerUID.h"
#include "UIBaseManager.h"
#include "UIManagerEx.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UUIManagerEx : public UUIBaseManager {
    GENERATED_BODY()
public:
    UUIManagerEx();

private:
    UFUNCTION(BlueprintCallable)
    void OnOpenLootMenu(const FItemContainerUID InStorageItemContainerUID);
    
};


#pragma once
#include "CoreMinimal.h"
#include "MenuButtonStateDefiner.h"
#include "StoreButtonStateDefiner.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UStoreButtonStateDefiner : public UMenuButtonStateDefiner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExcludeSubsystems;
    
    UStoreButtonStateDefiner();

protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetSubsystemOptions() const;
    
};


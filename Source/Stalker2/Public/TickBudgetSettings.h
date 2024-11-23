#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "InitialCollectionSize.h"
#include "TimeBudget.h"
#include "TickBudgetSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=TickBudget)
class STALKER2_API UTickBudgetSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeBudget TimeBudget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInitialCollectionSize InitialCollectionSize;
    
    UTickBudgetSettings();

};


#pragma once
#include "CoreMinimal.h"
#include "OverridableProperty.h"
#include "PossibleInhabitantFaction.h"
#include "PossibleInhabitantFactionsOverridableProperty.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FPossibleInhabitantFactionsOverridableProperty : public FOverridableProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPossibleInhabitantFaction> DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPossibleInhabitantFaction> CurrentValue;
    
    FPossibleInhabitantFactionsOverridableProperty();
};


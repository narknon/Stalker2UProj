#pragma once
#include "CoreMinimal.h"
#include "FactionSelector.h"
#include "OverridableProperty.h"
#include "FactionOverridableProperty.generated.h"

USTRUCT(BlueprintType)
struct FFactionOverridableProperty : public FOverridableProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSelector DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSelector CurrentValue;
    
    STALKER2_API FFactionOverridableProperty();
};


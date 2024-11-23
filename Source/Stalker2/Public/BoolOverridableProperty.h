#pragma once
#include "CoreMinimal.h"
#include "OverridableProperty.h"
#include "BoolOverridableProperty.generated.h"

USTRUCT(BlueprintType)
struct FBoolOverridableProperty : public FOverridableProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CurrentValue;
    
    STALKER2_API FBoolOverridableProperty();
};


#pragma once
#include "CoreMinimal.h"
#include "OverridableProperty.h"
#include "StringOverridableProperty.generated.h"

USTRUCT(BlueprintType)
struct FStringOverridableProperty : public FOverridableProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentValue;
    
    STALKER2_API FStringOverridableProperty();
};


#pragma once
#include "CoreMinimal.h"
#include "CodelockInteractionAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCodelockInteractionAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CodelockMontage;
    
    STALKER2_API FCodelockInteractionAnimations();
};


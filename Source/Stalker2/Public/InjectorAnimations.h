#pragma once
#include "CoreMinimal.h"
#include "InjectorAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FInjectorAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayerHealAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HumanHealAnimation;
    
    STALKER2_API FInjectorAnimations();
};


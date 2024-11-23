#pragma once
#include "CoreMinimal.h"
#include "InteractableAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FInteractableAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CharacterWithDetector;
    
    STALKER2_API FInteractableAnimations();
};


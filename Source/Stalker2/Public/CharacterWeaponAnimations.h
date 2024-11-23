#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCharacterWeaponAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CharacterLeftHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    STALKER2_API FCharacterWeaponAnimations();
};


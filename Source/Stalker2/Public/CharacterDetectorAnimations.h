#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.h"
#include "CharacterDetectorAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCharacterDetectorAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCharacterWeaponAnimations> CharacterWithWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Detector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Weapon;
    
    STALKER2_API FCharacterDetectorAnimations();
};


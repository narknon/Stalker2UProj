#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.h"
#include "EFireType.h"
#include "ChangeFireTypeAnimation.generated.h"

USTRUCT(BlueprintType)
struct FChangeFireTypeAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireType FromFireType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireType ToFireType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations Animations;
    
    STALKER2_API FChangeFireTypeAnimation();
};


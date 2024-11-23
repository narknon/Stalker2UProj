#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.h"
#include "EAnimationReloadTypes.h"
#include "MagazineReloadAnimations.generated.h"

USTRUCT(BlueprintType)
struct FMagazineReloadAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimationReloadTypes, FCharacterWeaponAnimations> MagazineReloadAnimations;
    
    STALKER2_API FMagazineReloadAnimations();
};


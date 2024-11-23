#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.h"
#include "EAnimationStates.h"
#include "HumanStateReloadAnimations.h"
#include "HumanFirearmInternalAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FHumanFirearmInternalAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations ShootingInHip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimationStates, FHumanStateReloadAnimations> Reloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimationStates, FHumanStateReloadAnimations> ReloadingInCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Melee;
    
    STALKER2_API FHumanFirearmInternalAnimations();
};


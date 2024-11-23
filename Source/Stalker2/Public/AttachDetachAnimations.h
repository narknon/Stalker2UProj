#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.h"
#include "AttachDetachAnimations.generated.h"

USTRUCT(BlueprintType)
struct FAttachDetachAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations AttachAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations DetachAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations DetachTwinMagazineShifted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AttachAnimBlueprint;
    
    STALKER2_API FAttachDetachAnimations();
};


#pragma once
#include "CoreMinimal.h"
#include "CharacterItemWeightedAnimations.h"
#include "PlayerWeaponIdlingAnimations.generated.h"

USTRUCT(BlueprintType)
struct FPlayerWeaponIdlingAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToLaunchInactiveIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterItemWeightedAnimations> Idles;
    
    STALKER2_API FPlayerWeaponIdlingAnimations();
};


#pragma once
#include "CoreMinimal.h"
#include "CharacterItemWeightedAnimations.h"
#include "ELongIdleType.h"
#include "AnimPlayerBaseWeaponData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerBaseWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELongIdleType LongIdleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterItemWeightedAnimations InactiveIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InactiveIdleFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActionSlotActive;
    
    FAnimPlayerBaseWeaponData();
};


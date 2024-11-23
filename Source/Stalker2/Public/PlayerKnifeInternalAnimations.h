#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.h"
#include "EAnimStealthKillPose.h"
#include "PlayerKnifeInternalAnimations.generated.h"

USTRUCT(BlueprintType)
struct FPlayerKnifeInternalAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations Hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations OneHandHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimStealthKillPose, FCharacterWeaponAnimations> StealthKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations PlayingWithKnife;
    
    STALKER2_API FPlayerKnifeInternalAnimations();
};


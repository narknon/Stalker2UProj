#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnimWeaponSwingContainer.h"
#include "CharacterDetectorAnimations.h"
#include "CharacterDetectorFailedLandingAnimations.h"
#include "CharacterDetectorWeaponAnimations.h"
#include "DetectorToggleFlashlightAnimations.h"
#include "WeaponInertiaContainer.h"
#include "PlayerDetectorAnimCollection.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UPlayerDetectorAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDetectorAnimations Equip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDetectorAnimations Unequip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDetectorAnimations EquipBothHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDetectorWeaponAnimations WeaponSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDetectorWeaponAnimations WeaponShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDetectorWeaponAnimations WeaponAimShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDetectorFailedLandingAnimations FailedLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetectorToggleFlashlightAnimations ToggleFlashlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PlayerAnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimWeaponSwingContainer SwingConfigContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponInertiaContainer StopSwingInertia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponInertiaContainer StopSprintInertia;
    
public:
    UPlayerDetectorAnimCollection();

};


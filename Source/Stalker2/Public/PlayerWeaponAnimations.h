#pragma once
#include "CoreMinimal.h"
#include "AnimWeaponSwingContainer.h"
#include "CharacterWeaponAnimations.h"
#include "EquipUnequipAnimations.h"
#include "PlayerWeaponIdlingAnimations.h"
#include "WeaponInertiaContainer.h"
#include "WeaponPushbackContainer.h"
#include "PlayerWeaponAnimations.generated.h"

class UAnimMontage;
class UPlayerAnimCollection;
class UPlayerFirearmAnimCollection;

USTRUCT(BlueprintType)
struct FPlayerWeaponAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerAnimCollection* AnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UPlayerFirearmAnimCollection*> AttachWeaponAnimCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PlayerAnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations EquipWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations UnequipWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AttachSelectorUnequip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipUnequipAnimations RemoveReturnLeftHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimWeaponSwingContainer WeaponSwingConfigInHip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimWeaponSwingContainer WeaponSwingConfigInAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponInertiaContainer StopHipSwingInertia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponInertiaContainer StopAimSwingInertia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponInertiaContainer SprintStopInertia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponPushbackContainer HipPushback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FWeaponPushbackContainer> AimPushback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerWeaponIdlingAnimations InactiveLongIdles;
    
    STALKER2_API FPlayerWeaponAnimations();
};


#pragma once
#include "CoreMinimal.h"
#include "AttachDetachAnimations.h"
#include "ChangeFireTypeAnimations.h"
#include "CharacterWeaponAnimations.h"
#include "EAnimSwitchFireTypeMode.h"
#include "EAnimationShootingTypes.h"
#include "MagazineReloadAnimations.h"
#include "PlayerFirearmInternalAnimations.generated.h"

class UAnimMontage;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FPlayerFirearmInternalAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations ShootingInHip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations ShootingInAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimationShootingTypes, FCharacterWeaponAnimations> Shooting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCharacterWeaponAnimations> ShootingWithScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FAttachDetachAnimations> AttachingBySID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterWeaponAnimations> Jamming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCharacterWeaponAnimations> UniqueAttachJamming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMagazineReloadAnimations> Reloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMagazineReloadAnimations> OneHandReloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations MeleeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimSwitchFireTypeMode, FChangeFireTypeAnimations> SwitchFireType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PickUpItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CharacterHipIdleSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* WeaponHipIdleSequence;
    
    STALKER2_API FPlayerFirearmInternalAnimations();
};


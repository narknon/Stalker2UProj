#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.h"
#include "HumanHumanAttachAnimBlueprintsBySID.h"
#include "HumanWeaponAnimations.generated.h"

class UHumanAnimCollection;

USTRUCT(BlueprintType)
struct FHumanWeaponAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHumanAnimCollection* AnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* HumanAnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FHumanHumanAttachAnimBlueprintsBySID> AttachBlueprintbySID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations EquipWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations UnequipWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations EquipWeaponFast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations UnequipWeaponFast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations EquipWeaponRelax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations UnequipWeaponRelax;
    
    STALKER2_API FHumanWeaponAnimations();
};


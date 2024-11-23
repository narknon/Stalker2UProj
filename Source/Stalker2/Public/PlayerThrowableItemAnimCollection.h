#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterWeaponAnimations.h"
#include "PlayerThrowableItemInternalAnimations.h"
#include "PlayerWeaponAnimCollectionInterface.h"
#include "PlayerWeaponAnimations.h"
#include "PlayerThrowableItemAnimCollection.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UPlayerThrowableItemAnimCollection : public UObject, public IPlayerWeaponAnimCollectionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerThrowableItemInternalAnimations InternalAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerWeaponAnimations WeaponAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations ToggleFlashlight;
    
public:
    UPlayerThrowableItemAnimCollection();


    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnimWeaponSwingContainer.h"
#include "CharacterWeaponAnimations.h"
#include "PlayerWeaponAnimCollectionInterface.h"
#include "PlayerWeaponAnimations.h"
#include "WeaponInertiaContainer.h"
#include "ItemAnimCollection.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UItemAnimCollection : public UObject, public IPlayerWeaponAnimCollectionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations UseItemAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponAnimations UseItemFastAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimWeaponSwingContainer SwingConfigContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponInertiaContainer StopSwingInertia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerWeaponAnimations WeaponAnimations;
    
public:
    UItemAnimCollection();


    // Fix for true pure virtual functions not being implemented
};


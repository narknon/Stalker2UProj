#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayerKnifeInternalAnimations.h"
#include "PlayerWeaponAnimCollectionInterface.h"
#include "PlayerWeaponAnimations.h"
#include "PlayerKnifeAnimCollection.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UPlayerKnifeAnimCollection : public UObject, public IPlayerWeaponAnimCollectionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerKnifeInternalAnimations InternalAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerWeaponAnimations WeaponAnimations;
    
public:
    UPlayerKnifeAnimCollection();


    // Fix for true pure virtual functions not being implemented
};


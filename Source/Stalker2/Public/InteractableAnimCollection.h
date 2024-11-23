#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnimInteractableData.h"
#include "InteractableAnimations.h"
#include "PlayerWeaponAnimCollectionInterface.h"
#include "PlayerWeaponAnimations.h"
#include "InteractableAnimCollection.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UInteractableAnimCollection : public UObject, public IPlayerWeaponAnimCollectionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableAnimations InteractableAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimInteractableData InteractableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerWeaponAnimations WeaponAnimations;
    
public:
    UInteractableAnimCollection();


    // Fix for true pure virtual functions not being implemented
};


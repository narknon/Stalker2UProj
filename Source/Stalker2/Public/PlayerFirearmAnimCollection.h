#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "PlayerAutoCoverAnimations.h"
#include "PlayerFirearmInternalAnimations.h"
#include "PlayerWeaponAnimCollectionInterface.h"
#include "PlayerWeaponAnimations.h"
#include "PlayerFirearmAnimCollection.generated.h"

class UCurveVector;

UCLASS(Blueprintable)
class STALKER2_API UPlayerFirearmAnimCollection : public UObject, public IPlayerWeaponAnimCollectionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerFirearmInternalAnimations InternalAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector> SocketLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* IdleSwayCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerWeaponAnimations WeaponAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerAutoCoverAnimations AutoCoverAnimations;
    
public:
    UPlayerFirearmAnimCollection();


    // Fix for true pure virtual functions not being implemented
};


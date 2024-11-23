#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "HumanFirearmInternalAnimations.h"
#include "HumanWeaponAnimations.h"
#include "HumanWeaponExternalAnimations.h"
#include "HumanFirearmAnimCollection.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UHumanFirearmAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHumanFirearmInternalAnimations InternalAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHumanWeaponExternalAnimations ExternalAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector> SocketLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOneHanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHumanWeaponAnimations WeaponAnimations;
    
public:
    UHumanFirearmAnimCollection();

};


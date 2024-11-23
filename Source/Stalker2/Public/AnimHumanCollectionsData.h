#pragma once
#include "CoreMinimal.h"
#include "HumanExternalAnimations.h"
#include "HumanWeaponExternalAnimations.h"
#include "AnimHumanCollectionsData.generated.h"

class UHumanAnimCollection;
class UHumanDefaultAnimCollection;
class UHumanFirearmAnimCollection;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHumanCollectionsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHumanDefaultAnimCollection* DefaultAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHumanAnimCollection* AnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHumanFirearmAnimCollection* FirearmAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHumanExternalAnimations ExternalAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHumanWeaponExternalAnimations WeaponExternalAnimations;
    
    FAnimHumanCollectionsData();
};


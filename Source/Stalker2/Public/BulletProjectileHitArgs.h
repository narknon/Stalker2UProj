#pragma once
#include "CoreMinimal.h"
#include "EAmmoCaliber.h"
#include "EAmmoType.h"
#include "BulletProjectileHitArgs.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FBulletProjectileHitArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAmmoType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAmmoCaliber Caliber;
    
    FBulletProjectileHitArgs();
};


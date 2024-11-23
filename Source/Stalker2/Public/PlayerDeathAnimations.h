#pragma once
#include "CoreMinimal.h"
#include "EAnimDirections.h"
#include "EPlayerAnimDamageSource.h"
#include "PlayerDeathAnimArray.h"
#include "PlayerDeathAnimations.generated.h"

USTRUCT(BlueprintType)
struct FPlayerDeathAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimDirections, FPlayerDeathAnimArray> BulletDeathAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimDirections, FPlayerDeathAnimArray> ExplosionDeathAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerAnimDamageSource, FPlayerDeathAnimArray> DeathAnimations;
    
    STALKER2_API FPlayerDeathAnimations();
};


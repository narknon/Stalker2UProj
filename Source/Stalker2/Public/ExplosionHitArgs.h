#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UID.h"
#include "ExplosionHitArgs.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct STALKER2_API FExplosionHitArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExplosionLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ExplosiveActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExplosiveActorPrototypeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUID ExplosionInstigatorUID;
    
    FExplosionHitArgs();
};


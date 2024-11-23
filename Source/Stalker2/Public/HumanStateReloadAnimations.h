#pragma once
#include "CoreMinimal.h"
#include "MagazineReloadAnimations.h"
#include "HumanStateReloadAnimations.generated.h"

USTRUCT(BlueprintType)
struct FHumanStateReloadAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMagazineReloadAnimations> MagazineReload;
    
    STALKER2_API FHumanStateReloadAnimations();
};


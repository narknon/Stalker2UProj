#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimHumanWeaponConfig.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHumanWeaponConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseToBodyWeaponMinShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseToBodyWeaponMaxShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WeaponIKEffectorOffset;
    
    FAnimHumanWeaponConfig();
};


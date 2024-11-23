#pragma once
#include "CoreMinimal.h"
#include "LookAtMutantData.generated.h"

USTRUCT(BlueprintType)
struct FLookAtMutantData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AimingYaw;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AimingPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRotationAngleYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRotationAnglePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    STALKER2_API FLookAtMutantData();
};


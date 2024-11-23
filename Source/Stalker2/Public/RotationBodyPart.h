#pragma once
#include "CoreMinimal.h"
#include "ERotationPartType.h"
#include "RotationBodyPart.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FRotationBodyPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERotationPartType BodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinalRotation;
    
    FRotationBodyPart();
};


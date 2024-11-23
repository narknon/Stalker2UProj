#pragma once
#include "CoreMinimal.h"
#include "EAnimHitBodyPart.h"
#include "AnimBodyPartBonesConfig.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimBodyPartBonesConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimHitBodyPart HitBodyPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> Bones;
    
    FAnimBodyPartBonesConfig();
};


#pragma once
#include "CoreMinimal.h"
#include "AnimationSingleHit.h"
#include "EAnimHitBodyPartType.h"
#include "AnimHitBodyPart.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHitBodyPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationSingleHit FirstHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationSingleHit SecondHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimalAngleBetweenHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextHitAvailableCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AvailiableParentBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExcludedParentBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimHitBodyPartType BodyType;
    
    FAnimHitBodyPart();
};


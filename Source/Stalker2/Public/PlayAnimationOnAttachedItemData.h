#pragma once
#include "CoreMinimal.h"
#include "PlayAnimationOnAttachedItemData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct STALKER2_API FPlayAnimationOnAttachedItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachmentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* AnimationAsset;
    
    FPlayAnimationOnAttachedItemData();
};


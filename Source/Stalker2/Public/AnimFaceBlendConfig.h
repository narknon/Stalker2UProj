#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AlphaBlend.h"
#include "AnimFaceBlendConfig.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimFaceBlendConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend BlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDynamicBlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FaceBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FaceBlendOutTriggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange AnimationLengthRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange BlendOutTriggerTimeRange;
    
    FAnimFaceBlendConfig();
};


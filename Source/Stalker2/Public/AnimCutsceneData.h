#pragma once
#include "CoreMinimal.h"
#include "AnimCutsceneData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimCutsceneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CacheToggleFlag;
    
    FAnimCutsceneData();
};


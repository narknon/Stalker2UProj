#pragma once
#include "CoreMinimal.h"
#include "AnimCutsceneData.h"
#include "AnimHumanFaceData.h"
#include "AnimHumanStateData.h"
#include "AnimInstanceBase.h"
#include "AnimSleepData.h"
#include "AnimWoundedData.h"
#include "AnimInstanceFace.generated.h"

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UAnimInstanceFace : public UAnimInstanceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanStateData StateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanFaceData FaceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimWoundedData WoundedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimSleepData SleepData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimCutsceneData CutsceneData;
    
    UAnimInstanceFace();

};


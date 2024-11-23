#pragma once
#include "CoreMinimal.h"
#include "RootMotionModifier_SkewWarp.h"
#include "RootMotionModifier_WarpWithScale.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class URootMotionModifier_WarpWithScale : public URootMotionModifier_SkewWarp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScaleWarpTargetName;
    
    URootMotionModifier_WarpWithScale();

};


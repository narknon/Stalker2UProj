#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_MotionWarping.h"
#include "AnimNotifyState_Fly.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FLYCORRIDOR_API UAnimNotifyState_Fly : public UAnimNotifyState_MotionWarping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrackBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootBoneName;
    
    UAnimNotifyState_Fly();

};


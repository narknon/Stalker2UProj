#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PoseSearchLocomotionMoveData.h"
#include "PoseSearchLocomotionDescriptor.generated.h"

UCLASS(Blueprintable)
class POSESEARCHLOCOMOTION_API UPoseSearchLocomotionDescriptor : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseSearchLocomotionMoveData> Container;
    
public:
    UPoseSearchLocomotionDescriptor();

};


#pragma once
#include "CoreMinimal.h"
#include "ModelCharacterMovementComponent.h"
#include "PoseSearchLocomotionCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPoseSearchLocomotionCharacterMovementComponent : public UModelCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavWalkingSearchFloorScale;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNavWalkingOrientToSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavWalkingOrientToSlopeInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FutureLocationPredictionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PredictionBlockedAngle;
    
public:
    UPoseSearchLocomotionCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

};


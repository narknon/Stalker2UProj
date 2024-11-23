#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CriticalHitAnimations.h"
#include "EAnimStealthKillPose.h"
#include "EAnimationTargetType.h"
#include "EAnomalyAnimInteraction.h"
#include "HumanExternalAnimations.h"
#include "PoseSearchLocomotionAnimCollectionData.h"
#include "HumanAnimCollection.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class STALKER2_API UHumanAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnomalyAnimInteraction, UAnimMontage*> AnomalyInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimationTargetType, UAnimMontage*> AnimationTargetTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHumanExternalAnimations ExternalAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimStealthKillPose, UAnimMontage*> StealthDeaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCriticalHitAnimations> CriticalHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSearchLocomotionAnimCollectionData PoseSearchLocomotionAnimCollectionData;
    
public:
    UHumanAnimCollection();

};


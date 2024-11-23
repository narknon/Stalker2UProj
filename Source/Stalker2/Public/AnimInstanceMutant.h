#pragma once
#include "CoreMinimal.h"
#include "AnimAbilityData.h"
#include "AnimHitData.h"
#include "AnimInstanceBase.h"
#include "AnimMutantCollectionsData.h"
#include "AnimMutantStateData.h"
#include "AnimPhysicalData.h"
#include "AnimPoseSearchLocomotionData.h"
#include "LookAtMutantData.h"
#include "TwoLegIKData.h"
#include "AnimInstanceMutant.generated.h"

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UAnimInstanceMutant : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHitData HitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimMutantStateData StateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimMutantCollectionsData CollectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPoseSearchLocomotionData PoseSearchLocomotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPhysicalData PhysicalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTwoLegIKData LegsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimAbilityData AbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtMutantData LookAtData;
    
public:
    UAnimInstanceMutant();

};


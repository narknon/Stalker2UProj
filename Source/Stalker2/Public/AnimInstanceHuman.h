#pragma once
#include "CoreMinimal.h"
#include "AnimAbilityData.h"
#include "AnimCutsceneData.h"
#include "AnimHitData.h"
#include "AnimHumanCollectionsData.h"
#include "AnimHumanDialogData.h"
#include "AnimHumanFaceData.h"
#include "AnimHumanLookAtData.h"
#include "AnimHumanStateData.h"
#include "AnimHumanWeaponData.h"
#include "AnimInstanceBase.h"
#include "AnimKnockDownData.h"
#include "AnimPhysicalData.h"
#include "AnimPoseSearchLocomotionData.h"
#include "AnimTwoHandsIKData.h"
#include "AnimWoundedData.h"
#include "TwoLegIKData.h"
#include "AnimInstanceHuman.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UAnimInstanceHuman : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanWeaponData WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHitData HitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimWoundedData WoundedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimKnockDownData KnockDownData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanCollectionsData CollectionsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanStateData StateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimTwoHandsIKData HandsIKData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanFaceData FaceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanLookAtData LookAtData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanDialogData DialogData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPoseSearchLocomotionData PoseSearchLocomotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPhysicalData PhysicalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTwoLegIKData LegsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimCutsceneData CutsceneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* LastGestureAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimAbilityData AbilityData;
    
public:
    UAnimInstanceHuman();

};


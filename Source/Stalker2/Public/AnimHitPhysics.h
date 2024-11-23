#pragma once
#include "CoreMinimal.h"
#include "PhysicsControlLimbData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsControl -ObjectName=PhysicsControlNames -FallbackName=PhysicsControlNames
#include "AnimBonesArray.h"
#include "AnimHitPhysCurves.h"
#include "AnimPhysicSpaceControl.h"
#include "EAnimConstraintProfile.h"
#include "EDamageSource.h"
#include "AnimHitPhysics.generated.h"

class UPhysicsControlComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHitPhysics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsControlComponent* Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsControlNames AllBodyModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPhysicsControlNames> LimbBodyModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimConstraintProfile HitConstraintProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPhysicSpaceControl WorldSpaceControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPhysicSpaceControl ParentSpaceControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicsControlLimbSetupData> LimbSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FAnimHitPhysCurves> HitCurvesForLimbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadHitStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageSource, float> DeathDamageSourceImpulses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FAnimBonesArray> SetsOfBoneModifiersArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BodyModifierForKinematicMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAllControlsOnHit;
    
    FAnimHitPhysics();
};


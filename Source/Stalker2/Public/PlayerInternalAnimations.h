#pragma once
#include "CoreMinimal.h"
#include "EAgentType.h"
#include "EquipUnequipAnimations.h"
#include "PlayerInternalAnimations.generated.h"

class UAnimMontage;
class UCurveFloat;

USTRUCT(BlueprintType)
struct FPlayerInternalAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PickingUpItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* JumpLand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* JumpLandLowCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FailedLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ToggleFlashlightStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ToggleFlashlightLowCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* EnterRagdollCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipUnequipAnimations EquipUnequip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipUnequipAnimations RemoveReturnLeftHand;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAgentType, UAnimMontage*> DragWeaponByNPC;
    
    STALKER2_API FPlayerInternalAnimations();
};


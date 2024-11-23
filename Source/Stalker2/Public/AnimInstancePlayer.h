#pragma once
#include "CoreMinimal.h"
#include "AnimCutsceneData.h"
#include "AnimHandItemData.h"
#include "AnimInstanceBase.h"
#include "AnimLocomotionData.h"
#include "AnimPlayerAutoCoverData.h"
#include "AnimPlayerCameraData.h"
#include "AnimPlayerClimbingData.h"
#include "AnimPlayerCollectionsData.h"
#include "AnimPlayerDetectorData.h"
#include "AnimPlayerDialogData.h"
#include "AnimPlayerDodgeData.h"
#include "AnimPlayerGuitarData.h"
#include "AnimPlayerHitData.h"
#include "AnimPlayerIdleSwayData.h"
#include "AnimPlayerLookAtData.h"
#include "AnimPlayerMaterialData.h"
#include "AnimPlayerShadowData.h"
#include "AnimPlayerStateData.h"
#include "AnimPlayerStealthData.h"
#include "AnimPlayerTransitionData.h"
#include "AnimPlayerUnfocusableTargetData.h"
#include "AnimPlayerVaultingData.h"
#include "AnimPlayerWeaponData.h"
#include "AnimPlayerWeaponInertiaData.h"
#include "AnimPlayerWeaponPushbackData.h"
#include "AnimPlayerWeaponSwingData.h"
#include "AnimTwoHandsIKData.h"
#include "TwoLegIKData.h"
#include "AnimInstancePlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UAnimInstancePlayer : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimLocomotionData LocomotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerWeaponData WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerCameraData CameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerTransitionData TransitionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerStateData StateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerCollectionsData CollectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimTwoHandsIKData HandsIKData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTwoLegIKData LegsIKData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerIdleSwayData IdleSwayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerClimbingData ClimbingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerWeaponSwingData WeaponSwingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerWeaponInertiaData WeaponInertiaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerWeaponPushbackData WeaponPushbackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerDetectorData DetectorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHandItemData HandItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerMaterialData MaterialData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerLookAtData LookAtData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerAutoCoverData AutoCoverData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerHitData HitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerGuitarData GuitarData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerDodgeData DodgeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerDialogData DialogData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerUnfocusableTargetData AnimPlayerUnfocusableTargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerVaultingData VaultingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerShadowData ShadowData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerStealthData StealthData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimCutsceneData CutsceneData;
    
public:
    UAnimInstancePlayer();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimNotify_InteractionEvent();
    
};


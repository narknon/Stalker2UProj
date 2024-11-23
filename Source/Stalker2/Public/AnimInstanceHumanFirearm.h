#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimHumanAimingData.h"
#include "AnimHumanWeaponConfig.h"
#include "AnimInstanceBase.h"
#include "AnimPoseSearchLocomotionData.h"
#include "ESmartCoverType.h"
#include "AnimInstanceHumanFirearm.generated.h"

class UHumanFirearmAnimCollection;

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UAnimInstanceHumanFirearm : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHumanFirearmAnimCollection* WeaponAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath WeaponAnimCollectionAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHumanFirearmAnimCollection* ZombieWeaponAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ZombieWeaponAnimCollectionAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanWeaponConfig WeaponConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanWeaponConfig RelaxedWeaponConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanAimingData AimingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPoseSearchLocomotionData PoseSearchLocomotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsZombie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingSmartCoverAnimPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESmartCoverType SmartCoverType;
    
public:
    UAnimInstanceHumanFirearm();

};


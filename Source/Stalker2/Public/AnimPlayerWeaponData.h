#pragma once
#include "CoreMinimal.h"
#include "AnimPlayerAimingData.h"
#include "AnimPlayerBaseWeaponData.h"
#include "AnimPlayerFirearmData.h"
#include "AnimPlayerWeaponData.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasWeaponInHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* WeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* AttachMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerBaseWeaponData BaseWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerAimingData AimingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerFirearmData FirearmData;
    
    FAnimPlayerWeaponData();
};


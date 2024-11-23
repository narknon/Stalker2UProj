#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceBase.h"
#include "AnimPlayerAimingData.h"
#include "AnimPlayerFirearmData.h"
#include "AnimInstancePlayerWeaponAttach.generated.h"

class UWeaponAttachAnimCollection;

UCLASS(Abstract, Blueprintable, NonTransient)
class STALKER2_API UAnimInstancePlayerWeaponAttach : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponAttachAnimCollection* AttachAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerFirearmData FirearmData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerAimingData AimingData;
    
public:
    UAnimInstancePlayerWeaponAttach();

};


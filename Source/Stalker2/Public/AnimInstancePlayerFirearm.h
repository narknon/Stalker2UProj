#pragma once
#include "CoreMinimal.h"
#include "AnimInstancePlayerWeaponBase.h"
#include "AnimPlayerAimingData.h"
#include "AnimPlayerFirearmData.h"
#include "AnimInstancePlayerFirearm.generated.h"

class UPlayerFirearmAnimCollection;

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UAnimInstancePlayerFirearm : public UAnimInstancePlayerWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerFirearmAnimCollection* WeaponAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerAimingData AimingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerFirearmData FirearmData;
    
public:
    UAnimInstancePlayerFirearm();

};


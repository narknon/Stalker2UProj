#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceBase.h"
#include "AnimPlayerBaseWeaponData.h"
#include "AnimInstancePlayerWeaponBase.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class STALKER2_API UAnimInstancePlayerWeaponBase : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerBaseWeaponData BaseData;
    
public:
    UAnimInstancePlayerWeaponBase();

};


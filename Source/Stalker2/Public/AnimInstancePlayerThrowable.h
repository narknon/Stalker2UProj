#pragma once
#include "CoreMinimal.h"
#include "AnimInstancePlayerWeaponBase.h"
#include "AnimPlayerAimingData.h"
#include "AnimInstancePlayerThrowable.generated.h"

class UPlayerThrowableItemAnimCollection;

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UAnimInstancePlayerThrowable : public UAnimInstancePlayerWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerThrowableItemAnimCollection* WeaponAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerAimingData AimingData;
    
public:
    UAnimInstancePlayerThrowable();

};


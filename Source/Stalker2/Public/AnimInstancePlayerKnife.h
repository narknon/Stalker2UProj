#pragma once
#include "CoreMinimal.h"
#include "AnimInstancePlayerWeaponBase.h"
#include "AnimPlayerStealthData.h"
#include "AnimInstancePlayerKnife.generated.h"

class UPlayerKnifeAnimCollection;

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UAnimInstancePlayerKnife : public UAnimInstancePlayerWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerKnifeAnimCollection* WeaponAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimPlayerStealthData StealthData;
    
public:
    UAnimInstancePlayerKnife();

};


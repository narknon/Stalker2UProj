#pragma once
#include "CoreMinimal.h"
#include "WeaponFireEvents.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FWeaponFireEvents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FireEventOneShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FireEventLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FireEventBreak;
    
    STALKER2_API FWeaponFireEvents();
};


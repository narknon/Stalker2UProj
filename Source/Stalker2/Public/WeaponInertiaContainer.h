#pragma once
#include "CoreMinimal.h"
#include "WeaponInertiaContainer.generated.h"

class UCurveFloat;
class UCurveVector;

USTRUCT(BlueprintType)
struct FWeaponInertiaContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* InertiaRotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* InertiaTranslationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* InertiaTimeScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AmplitudeScaleCurve;
    
    STALKER2_API FWeaponInertiaContainer();
};


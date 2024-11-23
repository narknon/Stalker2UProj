#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.h"
#include "EAnimationThrowingType.h"
#include "PlayerThrowableItemInternalAnimations.generated.h"

class UCurveFloat;
class UCurveVector;

USTRUCT(BlueprintType)
struct FPlayerThrowableItemInternalAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimationThrowingType, FCharacterWeaponAnimations> Throw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimationThrowingType, FCharacterWeaponAnimations> CancelThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* StrongThrowForceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LightThrowForceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* StrongThrowDirectionOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* LightThrowDirectionOffsetCurve;
    
    STALKER2_API FPlayerThrowableItemInternalAnimations();
};


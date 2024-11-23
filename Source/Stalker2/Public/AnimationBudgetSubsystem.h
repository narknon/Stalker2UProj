#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AnimationBudgetSubsystem.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class UAnimationBudgetSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SignificanceMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScreenDistanceToCenterMultiplierCurve;
    
public:
    UAnimationBudgetSubsystem();

};


#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "GameManager.generated.h"

class ADeveloperSpectator;
class UCurveFloat;

UCLASS(Blueprintable)
class STALKER2_API UGameManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADeveloperSpectator* DeveloperSpectator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* StaminaWeightCurve;
    
public:
    UGameManager();

};


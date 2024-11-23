#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DeveloperSpectator.generated.h"

class UCameraComponent;

UCLASS(Blueprintable)
class STALKER2_API ADeveloperSpectator : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLookUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedMultiplier;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
public:
    ADeveloperSpectator(const FObjectInitializer& ObjectInitializer);

};


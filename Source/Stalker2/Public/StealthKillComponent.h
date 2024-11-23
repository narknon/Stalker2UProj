#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StealthKillComponent.generated.h"

class APC;
class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UStealthKillComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APC* OwnerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* StealthKillSnapCurve;
    
public:
    UStealthKillComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PsyNPCComponent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPsyNPCComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DissolveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GroomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DissolveTime;
    
public:
    UPsyNPCComponent(const FObjectInitializer& ObjectInitializer);

};


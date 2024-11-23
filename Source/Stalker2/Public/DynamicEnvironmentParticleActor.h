#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DynamicEnvironmentParticleActor.generated.h"

class UDynamicEnvironmentNiagaraComponent;

UCLASS(Blueprintable)
class STALKER2_API ADynamicEnvironmentParticleActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEnvironmentNiagaraComponent* EnvironmentParticleComponent;
    
public:
    ADynamicEnvironmentParticleActor(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "EnvironmentParticleManager.generated.h"

class UNiagaraComponent;
class UStaticEnvironmentNiagaraComponent;

UCLASS(Blueprintable)
class STALKER2_API UEnvironmentParticleManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticEnvironmentNiagaraComponent*> StaticParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* EmissionCrowsFall;
    
public:
    UEnvironmentParticleManager();

};


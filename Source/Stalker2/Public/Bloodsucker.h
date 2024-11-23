#pragma once
#include "CoreMinimal.h"
#include "Agent.h"
#include "Bloodsucker.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class STALKER2_API ABloodsucker : public AAgent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* InvisibilityTransferParticles;
    
public:
    ABloodsucker(const FObjectInitializer& ObjectInitializer);

};


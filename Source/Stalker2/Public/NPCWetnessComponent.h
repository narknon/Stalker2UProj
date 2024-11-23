#pragma once
#include "CoreMinimal.h"
#include "WetnessComponent.h"
#include "NPCWetnessComponent.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UNPCWetnessComponent : public UWetnessComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* Niagara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SplashSpawnRateParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DropSpawnRateParamName;
    
public:
    UNPCWetnessComponent(const FObjectInitializer& ObjectInitializer);

};


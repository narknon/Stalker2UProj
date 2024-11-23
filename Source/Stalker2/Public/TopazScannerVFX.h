#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TopazScannerVFX.generated.h"

class ATopazScanner;
class UNiagaraComponent;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct STALKER2_API FTopazScannerVFX {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UNiagaraComponent> NiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATopazScanner> OwnerScanner;
    
public:
    FTopazScannerVFX();
};


#pragma once
#include "CoreMinimal.h"
#include "ESpawnNiagaraAtLocation.h"
#include "SpawnNiagaraSystemAtLocation.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct STALKER2_API FSpawnNiagaraSystemAtLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachmentName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnNiagaraAtLocation SpawnNiagaraAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraAsset;
    
    FSpawnNiagaraSystemAtLocation();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPsyNPCType.h"
#include "ObjPrototypeSID.h"
#include "EncounterSpawnPointData.generated.h"

USTRUCT(BlueprintType)
struct FEncounterSpawnPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjPrototypeSID ObjPrototypeSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPsyNPCType PsyNPCType;
    
    STALKER2_API FEncounterSpawnPointData();
};


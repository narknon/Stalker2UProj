#pragma once
#include "CoreMinimal.h"
#include "EventData.h"
#include "MeshesData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FMeshesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventData> EventsData;
    
    STALKER2_API FMeshesData();
};


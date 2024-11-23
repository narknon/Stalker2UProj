#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MeshCategory.h"
#include "MeshSoundPlacerDataRow.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FMeshSoundPlacerDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RaycastSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RubberBandDistanceAtWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RubberBandDistanceAtRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RubberBandDistanceAtSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RubberBandSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> StopAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshCategory> MeshCategories;
    
    STALKER2_API FMeshSoundPlacerDataRow();
};


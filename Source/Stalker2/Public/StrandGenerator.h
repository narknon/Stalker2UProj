#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplinePointMeshData.h"
#include "StrandFinalData.h"
#include "StrandGenerator.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class STALKER2_API AStrandGenerator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplinePointMeshData MeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSplinePointMeshData> MeshOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStartSeparator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStopSeparator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAutoAdjusting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyRightAngle;
    
    AStrandGenerator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FStrandFinalData GetFinalStrandData();
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OptimizationSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class STALKER2_API UOptimizationSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReloadPrototypes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftMemoryThresholdMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StreamingDistanceMemoryMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StreamingDistanceModifierLimit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MemoryThresholdMultiplierToStartHighPriorityNavMeshLoading;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AfkTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterTraceDistanceTolerance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysCleanXSSViews;
    
public:
    UOptimizationSettings();

};


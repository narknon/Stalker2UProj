#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Anomaly.h"
#include "ExpulsionAnomaly.generated.h"

class UCurveFloat;
class UGeometryCacheComponent;
class UMaterialInterface;
class USphereComponent;

UCLASS(Blueprintable)
class STALKER2_API AExpulsionAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* ActivationSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGeometryCacheComponent* ShapeGeometryCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ShapeGeometryMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath GeometryCachePath;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PushDistanceDelayCurve;
    
public:
    AExpulsionAnomaly(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoltCollided(const FVector& LocalPoint);
    
};


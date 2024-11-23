#pragma once
#include "CoreMinimal.h"
#include "WorldPartition/DataLayer/ActorDataLayer.h"
#include "Engine/HitResult.h"
#include "GameFramework/Volume.h"
#include "EOverrideLifeGridVisionRadius.h"
#include "GridInfo.h"
#include "StreamingDistanceOverridingVolume.generated.h"

class AActor;
class AStreamingDistanceOverridingVolume;
class AStreamingGatewayVolume;
class UDataLayerInstance;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class STALKER2_API AStreamingDistanceOverridingVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStreamingDistanceOverridingVolume* MainVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOverrideLifeGridVisionRadius OverrideLifeGridVisionRadiusPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOverrideLifeGridVisionRadius OverrideLifeGridVisionRadiusXBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGridInfo> OverridingStreamingGridsInfosPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGridInfo> OverridingStreamingGridsInfosXBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> EnabledDataLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> DisabledDataLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FActorDataLayer> EnabledDynamicDataLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FActorDataLayer> DisabledDynamicDataLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AStreamingGatewayVolume*> EntryTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AStreamingGatewayVolume*> ExitTriggers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OverridingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VolumePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UDataLayerInstance*> OverridedDataLayerInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallbackStreamingBlockRestoreRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverridingDistantTreeCullDistanceScale;
    
public:
    AStreamingDistanceOverridingVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateStreamingConfiguration();
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerOverlapped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
};


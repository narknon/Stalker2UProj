#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CableMeshGenerationCurveDescription.h"
#include "TetherCableProperties.h"
#include "TetherSimulationModel.h"
#include "TetherCableActor.generated.h"

class USceneComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTetherCableMeshComponent;
class UTetherGuideSplineComponent;
class UTetherMeshGenerator;

UCLASS(Blueprintable)
class TETHER_API ATetherCableActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetherCableProperties CableProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockCurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSynchronousRealtime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RealtimeInEditorTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugVisualizeSimulationParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugVisualizeSimulationCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugVisualizeBuiltStaticMeshPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugVisualizeContactPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugVisualizeComponentLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugVisualizeTangents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    FDateTime TimeCreated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTetherGuideSplineComponent* GuideSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetherSimulationModel ActiveSimulationModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCableMeshGenerationCurveDescription BuiltCurveDescriptionLocalSpaceSimplified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTetherCableMeshComponent* DynamicPreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTetherMeshGenerator* MeshGenerator;
    
public:
    ATetherCableActor(const FObjectInitializer& ObjectInitializer);

};


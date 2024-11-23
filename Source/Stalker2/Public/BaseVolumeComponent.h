#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "ECollisionFormType.h"
#include "BaseVolumeComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UBaseVolumeComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionFormType MeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockNegativeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceRoundCylinderBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceUniformSphereScale;
    
public:
    UBaseVolumeComponent(const FObjectInitializer& ObjectInitializer);

};


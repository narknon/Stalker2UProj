#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "VehicleSoundPlacement.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UVehicleSoundPlacement : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VehiclePullSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VehicleReleaseSound;
    
public:
    UVehicleSoundPlacement(const FObjectInitializer& ObjectInitializer);

};


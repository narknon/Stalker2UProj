#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "WaterSurfaceObstructionResult.h"
#include "WaterContactController.generated.h"

class UWaterComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UWaterContactController : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWaterComponent*> ActiveWaterBodies;
    
public:
    UWaterContactController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ProjectOwnerPositionOnWaterSurface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWaterSurfaceObstructionResult IsPathToWaterSurfaceObstructed() const;
    
};


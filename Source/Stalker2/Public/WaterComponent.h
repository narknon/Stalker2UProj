#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WaterComponent.generated.h"

class AActor;
class UMaterialInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UWaterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectedByRain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* RegularWaterMaterial;
    
public:
    UWaterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* OverlappedComponent, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* OverlappedComponent, AActor* OtherActor);
    
};


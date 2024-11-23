#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CooldownZonesController.generated.h"

class ACooldownZone;
class UBoxComponent;

UCLASS(Blueprintable)
class STALKER2_API ACooldownZonesController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ControllerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ACooldownZone>> CooldownZones;
    
public:
    ACooldownZonesController(const FObjectInitializer& ObjectInitializer);

};


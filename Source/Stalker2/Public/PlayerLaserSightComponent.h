#pragma once
#include "CoreMinimal.h"
#include "LaserSightComponent.h"
#include "PlayerLaserSightComponent.generated.h"

class APC;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPlayerLaserSightComponent : public ULaserSightComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APC* PlayerOwner;
    
public:
    UPlayerLaserSightComponent(const FObjectInitializer& ObjectInitializer);

};


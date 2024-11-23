#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AudioRoomBandwidthComponent.generated.h"

class UAkStateValue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UAudioRoomBandwidthComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* AudioRoomBandwidth;
    
    UAudioRoomBandwidthComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "CombatMusicOverrideVolume.generated.h"

class UAkSwitchValue;

UCLASS(Blueprintable)
class STALKER2_API ACombatMusicOverrideVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAkSwitchValue>> CombatTracks;
    
public:
    ACombatMusicOverrideVolume(const FObjectInitializer& ObjectInitializer);

};


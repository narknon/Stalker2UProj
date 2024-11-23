#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "StreamingDistanceOverrideVolumeState.h"
#include "StreamingDistanceOverrideSubsystem.generated.h"

UCLASS(Blueprintable)
class UStreamingDistanceOverrideSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStreamingDistanceOverrideVolumeState> RegisteredSDOVolumeStates;
    
public:
    UStreamingDistanceOverrideSubsystem();

};


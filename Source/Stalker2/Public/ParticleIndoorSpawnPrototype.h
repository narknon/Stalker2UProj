#pragma once
#include "CoreMinimal.h"
#include "EAudioRoomPresetBandwidth.h"
#include "EAudioRoomPresetBase.h"
#include "EnvironmentParticlePrototype.h"
#include "ParticleIndoorSpawnPrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleIndoorSpawnPrototype : public FEnvironmentParticlePrototype {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAudioRoomPresetBase> IgnoredAudioRoomPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAudioRoomPresetBandwidth> ForbiddenBandwidthTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToAudioVolume;
    
    FParticleIndoorSpawnPrototype();
};


#pragma once
#include "CoreMinimal.h"
#include "AkSpatialAudioVolume.h"
#include "EAkCurveInterpolation.h"
#include "Engine/EngineTypes.h"
#include "EAudioRoomPresetBandwidth.h"
#include "EAudioRoomPresetBase.h"
#include "GSCAudioVolume.generated.h"

class UAkAudioEvent;
class UAudioRoomBakedReflectionComponent;
class UAudioRoomBandwidthComponent;
class UTextRenderComponent;

UCLASS(Blueprintable)
class STALKER2_API AGSCAudioVolume : public AAkSpatialAudioVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioRoomBakedReflectionComponent* BakedReflection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioRoomBandwidthComponent* Bandwidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeTransitionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAkCurveInterpolation FadeCurveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCrowdedAmbient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CrowdedAmbientAudioEvent;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioRoomPresetBase AudioRoomPresetBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioRoomPresetBandwidth AudioRoomPresetBandwidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> AudioVolumeCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* InfoTextRenderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverride_LumenSkylightLeaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkyLightLeakingAmount;
    
public:
    AGSCAudioVolume(const FObjectInitializer& ObjectInitializer);

};


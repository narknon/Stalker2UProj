#pragma once
#include "CoreMinimal.h"
#include "AkGameObject.h"
#include "AkRoomComponent.generated.h"

class AActor;
class UAkAcousticTextureSetComponent;
class UAkAudioEvent;
class UAkRoomComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkRoomComponent : public UAkGameObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkBeginOverlapAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEndOverlapAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreVolumeExtensionCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuxSendLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    bool AutoPost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableReverbZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ParentRoomActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParentRoomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionRegionWidth;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkAcousticTextureSetComponent* GeometryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAkRoomComponent> ParentRoom;
    
public:
    UAkRoomComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTransitionRegionWidth(float InTransitionRegionWidth);
    
    UFUNCTION(BlueprintCallable)
    void UpdateParentRoomActor(AActor* InParentRoomActor);
    
    UFUNCTION(BlueprintCallable)
    void SetTransmissionLoss(float InTransmissionLoss);
    
    UFUNCTION(BlueprintCallable)
    void SetReverbZone(const UAkRoomComponent* InParentRoom, float InTransitionRegionWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetGeometryComponent(UAkAcousticTextureSetComponent* textureSetComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableReverbZone(bool bInEnableReverbZone);
    
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamic(bool bInDynamic);
    
    UFUNCTION(BlueprintCallable)
    void SetAuxSendLevel(float InAuxSendLevel);
    
    UFUNCTION(BlueprintCallable)
    void RemoveReverbZone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetPrimitiveParent() const;
    
};


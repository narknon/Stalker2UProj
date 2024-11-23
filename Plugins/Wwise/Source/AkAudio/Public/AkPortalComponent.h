#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "AkAcousticPortalState.h"
#include "AkPortalComponent.generated.h"

class UPrimitiveComponent;
class UTextRenderComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkPortalComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AkAcousticPortalState InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObstructionRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> ObstructionCollisionChannel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, SkipSerialization, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* FrontRoomText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, SkipSerialization, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* BackRoomText;
    
public:
    UAkPortalComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPortalOcclusion(float InPortalOcclusion);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamic(bool bInDynamic);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PortalPlacementValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetPrimitiveParent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPortalOcclusion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AkAcousticPortalState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void EnablePortal();
    
    UFUNCTION(BlueprintCallable)
    void DisablePortal();
    
};


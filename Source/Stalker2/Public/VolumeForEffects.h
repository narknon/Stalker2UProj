#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "GuidInterface.h"
#include "ObjBase.h"
#include "OverlapVolumeEffect.h"
#include "VolumeForEffects.generated.h"

class UObject;
class USignalReceiverComponent;

UCLASS(Blueprintable)
class STALKER2_API AVolumeForEffects : public AVolume, public IObjBase, public IGuidInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlapVolumeEffect> EffectsToApply;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalReceiverComponent* ActivateVolumeSignal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignalReceiverComponent* DeactivateVolumeSignal;
    
public:
    AVolumeForEffects(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDisabled(const bool bDisabled);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateDelegateHandle(UObject* DataObject);
    
    UFUNCTION(BlueprintCallable)
    void ActivateDelegateHandle(UObject* DataObject);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FGuid GetGUID() const override PURE_VIRTUAL(GetGUID, return FGuid{};);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "EffectPrototypeSID.h"
#include "UIDActor_MistAnomaly.h"
#include "MistAnomaly.generated.h"

class AActor;
class UCapsuleComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class STALKER2_API AMistAnomaly : public AUIDActor_MistAnomaly {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectPrototypeSID> PlayerEffectSIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeatherSpeedFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* SaveCapsuleComponent;
    
public:
    AMistAnomaly(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTeleportationEnabled(const bool InbTeleportationEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSaveBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerTeleport();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerEnter();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAnomalyEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnAnomalyBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
};


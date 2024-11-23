#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Components/SphereComponent.h"
#include "GameplayTagContainer.h"
#include "ForceFeedbackSphereComponent.generated.h"

class AActor;
class UCurveFloat;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UForceFeedbackSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FeedbackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ForceFeedbackDistanceIntensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateIntensityRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateStartFeedbackRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneShotFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabledByDefault;
    
public:
    UForceFeedbackSphereComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableForceFeedback();
    
    UFUNCTION(BlueprintCallable)
    void DisableForceFeedback();
    
};


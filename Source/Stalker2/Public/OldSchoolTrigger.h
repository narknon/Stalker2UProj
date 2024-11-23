#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "OldSchoolTrigger.generated.h"

class ADoorView;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class STALKER2_API AOldSchoolTrigger : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Trigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToHinge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfAngleToHinge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoorView* Door;
    
public:
    AOldSchoolTrigger(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerEndOverlap(const UPrimitiveComponent* OverlappedComponent, const AActor* OtherActor, const UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerBeginOverlap(const UPrimitiveComponent* Comp, const AActor* OtherActor, const UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
};


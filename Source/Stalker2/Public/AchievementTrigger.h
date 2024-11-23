#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "AchievementTrigger.generated.h"

class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class STALKER2_API AAchievementTrigger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementSID;
    
    AAchievementTrigger(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};


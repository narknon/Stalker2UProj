#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HittableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UHittableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanHitWater;
    
    UHittableComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "InteractionHitInfo.generated.h"

class AActor;
class UInteractionComponent;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FInteractionHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* HitComponent;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UInteractionComponent>> Interactions;
    
    STALKER2_API FInteractionHitInfo();
};


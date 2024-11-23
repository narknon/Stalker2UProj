#pragma once
#include "CoreMinimal.h"
#include "InteractableObject.h"
#include "PlayerStash.generated.h"

class UAnimatedItemContainerInteractionComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class STALKER2_API APlayerStash : public AInteractableObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimatedItemContainerInteractionComponent* InteractionComponent;
    
public:
    APlayerStash(const FObjectInitializer& ObjectInitializer);

};


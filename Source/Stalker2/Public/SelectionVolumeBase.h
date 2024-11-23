#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SelectionVolumeBase.generated.h"

class UShapeComponent;

UCLASS(Blueprintable)
class STALKER2_API ASelectionVolumeBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* CollisionComponent;
    
    ASelectionVolumeBase(const FObjectInitializer& ObjectInitializer);

};


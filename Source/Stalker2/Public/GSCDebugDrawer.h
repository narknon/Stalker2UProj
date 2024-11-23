#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GSCDebugDrawer.generated.h"

class UDrawGSCDebug;

UCLASS(Blueprintable)
class STALKER2_API AGSCDebugDrawer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDrawGSCDebug* DrawComponent;
    
    AGSCDebugDrawer(const FObjectInitializer& ObjectInitializer);

};


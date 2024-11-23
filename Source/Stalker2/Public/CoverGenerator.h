#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoverGenerator.generated.h"

class USmartCoverRenderingComponent;

UCLASS(Blueprintable)
class ACoverGenerator : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USmartCoverRenderingComponent* DebugRenderingComp;
    
public:
    ACoverGenerator(const FObjectInitializer& ObjectInitializer);

};


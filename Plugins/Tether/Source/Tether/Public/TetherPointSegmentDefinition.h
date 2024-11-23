#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TetherSegmentSimulationOptions.h"
#include "TetherPointSegmentDefinition.generated.h"

UCLASS(Blueprintable)
class TETHER_API UTetherPointSegmentDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Slack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetherSegmentSimulationOptions SimulationOptions;
    
    UTetherPointSegmentDefinition();

};


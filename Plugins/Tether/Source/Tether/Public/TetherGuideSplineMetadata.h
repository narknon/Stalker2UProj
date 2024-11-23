#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "TetherGuideSplineMetadata.generated.h"

class UTetherPointSegmentDefinition;

UCLASS(Blueprintable)
class TETHER_API UTetherGuideSplineMetadata : public USplineMetadata {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTetherPointSegmentDefinition*> PointSegmentDefinitions;
    
public:
    UTetherGuideSplineMetadata();

};


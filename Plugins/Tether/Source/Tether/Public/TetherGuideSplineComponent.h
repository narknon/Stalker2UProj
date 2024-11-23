#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "TetherGuideSplineComponent.generated.h"

class UTetherGuideSplineMetadata;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TETHER_API UTetherGuideSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTetherGuideSplineMetadata* MetaData;
    
public:
    UTetherGuideSplineComponent(const FObjectInitializer& ObjectInitializer);

};


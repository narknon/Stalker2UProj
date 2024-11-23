#include "TetherGuideSplineComponent.h"
#include "TetherGuideSplineMetadata.h"

UTetherGuideSplineComponent::UTetherGuideSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MetaData = CreateDefaultSubobject<UTetherGuideSplineMetadata>(TEXT("MetaData"));
}



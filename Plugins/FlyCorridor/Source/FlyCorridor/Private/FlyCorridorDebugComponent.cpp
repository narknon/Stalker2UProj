#include "FlyCorridorDebugComponent.h"

UFlyCorridorDebugComponent::UFlyCorridorDebugComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CorridorFindingTime = 0.00f;
}

void UFlyCorridorDebugComponent::ShowPassedPath() {
}

void UFlyCorridorDebugComponent::ShowCorridor(const UAnimMontage* AnimMontage, const FVector& StartLocation, const FVector& EndLocation, float DrawTime, double ZScale) {
}

void UFlyCorridorDebugComponent::HidePassedPath() {
}

void UFlyCorridorDebugComponent::HideCorridor() {
}



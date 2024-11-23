#include "TetherSimulationParams.h"

FTetherSimulationParams::FTetherSimulationParams() {
    this->TimingMode = ETetherSimulationTimingMode::SimulateInSequence;
    this->CollisionWidth = 0.00f;
    this->DesiredParticleDistance = 0.00f;
}


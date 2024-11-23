#include "TetherCableSimulationOptions.h"

FTetherCableSimulationOptions::FTetherCableSimulationOptions() {
    this->SimulationDuration = 0.00f;
    this->SubstepTime = 0.00f;
    this->bEnableStiffness = false;
    this->StiffnessSolverIterations = 0;
    this->Drag = 0.00f;
    this->bEnableCollision = false;
    this->bEnableSelfCollision = false;
    this->CollisionWidthScale = 0.00f;
    this->CollisionFriction = 0.00f;
    this->ParticleDistanceScale = 0.00f;
    this->ConstraintsEaseInTime = 0.00f;
}


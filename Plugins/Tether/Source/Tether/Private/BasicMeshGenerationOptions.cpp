#include "BasicMeshGenerationOptions.h"

FBasicMeshGenerationOptions::FBasicMeshGenerationOptions() {
    this->NumSides = 0;
    this->bOverrideCableWidth = false;
    this->CableMeshWidth = 0.00f;
    this->bAutoTile = false;
    this->bSnapToNearestFullTile = false;
    this->TileUVs = 0.00f;
}


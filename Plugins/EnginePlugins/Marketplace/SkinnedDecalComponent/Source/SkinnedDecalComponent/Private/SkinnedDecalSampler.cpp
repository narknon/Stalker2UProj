#include "SkinnedDecalSampler.h"

USkinnedDecalSampler::USkinnedDecalSampler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mesh = NULL;
    this->LayerIndex = -1;
    this->Association = GlobalParameter;
    this->AdditionalData = SpawnTime;
    this->LastDecalIndex = -1;
    this->MaxDecals = 500;
    this->MinDecalDistance = 10.00f;
    this->TranslucentBlend = true;
    this->TranslucentBlendMaterialDynamic = NULL;
    this->DataTarget = NULL;
}

void USkinnedDecalSampler::UpdateInstance(USkinnedDecalInstance* Instance) {
}

void USkinnedDecalSampler::UpdateAllDecals() {
}

int32 USkinnedDecalSampler::SpawnDecal(FVector Location, const FQuat Rotation, FName BoneName, float size, int32 SubUV, int32 Index) {
    return 0;
}

void USkinnedDecalSampler::SetupMaterials() {
}

void USkinnedDecalSampler::SetMeshComponent(USkeletalMeshComponent* MeshComponent, bool Child) {
}

void USkinnedDecalSampler::RemoveDecal(const int32 Index) {
}

UTextureRenderTarget2D* USkinnedDecalSampler::GetDataTarget() {
    return NULL;
}

void USkinnedDecalSampler::CloneDecals(USkinnedDecalSampler* Source) {
}

void USkinnedDecalSampler::ClearAllDecals() {
}



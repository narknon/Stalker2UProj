#include "SkinnedDecalInstance.h"

USkinnedDecalInstance::USkinnedDecalInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Index = 0;
    this->SubUV = 0;
    this->size = 10.00f;
}

void USkinnedDecalInstance::UpdateDecal() {
}

USkinnedDecalSampler* USkinnedDecalInstance::GetSampler() {
    return NULL;
}



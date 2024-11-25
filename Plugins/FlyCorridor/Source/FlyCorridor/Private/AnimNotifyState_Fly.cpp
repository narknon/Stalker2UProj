#include "AnimNotifyState_Fly.h"

UAnimNotifyState_Fly::UAnimNotifyState_Fly(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
    this->TrackBoneName = TEXT("jnt_pelvis");
    this->RootBoneName = TEXT("jnt_root");
}



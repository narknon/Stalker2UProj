#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "BoneContainer.h"
#include "AnimNotify_FootIKState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotify_FootIKState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAffectAllBones;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneReference> AffectedBones;
    
    UAnimNotify_FootIKState();

};


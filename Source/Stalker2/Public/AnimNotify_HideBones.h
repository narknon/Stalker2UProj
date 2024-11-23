#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EBoneInteractionType.h"
#include "AnimNotify_HideBones.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_HideBones : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoneInteractionType BoneInteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChildAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoCount;
    
    UAnimNotify_HideBones();

};


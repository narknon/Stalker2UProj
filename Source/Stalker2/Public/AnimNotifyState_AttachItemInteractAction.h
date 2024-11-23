#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "BoneContainer.h"
#include "EAttachItemType.h"
#include "AnimNotifyState_AttachItemInteractAction.generated.h"

class UMeshComponent;
class UStreamableRenderAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_AttachItemInteractAction : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachItemType AttachItemType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BoneReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStreamableRenderAsset* MeshToAttach;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* AttachedMesh;
    
public:
    UAnimNotifyState_AttachItemInteractAction();

};


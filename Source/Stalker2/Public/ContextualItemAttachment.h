#pragma once
#include "CoreMinimal.h"
#include "EContextualItemAttachType.h"
#include "ContextualItemAttachment.generated.h"

class UNiagaraSystem;
class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct STALKER2_API FContextualItemAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EContextualItemAttachType ContextualItemAttachType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachmentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* MeshToBeAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMeshToBeAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraAsset;
    
    FContextualItemAttachment();
};


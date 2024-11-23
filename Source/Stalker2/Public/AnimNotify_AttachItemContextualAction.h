#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "ContextualItemAttachment.h"
#include "AnimNotify_AttachItemContextualAction.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STALKER2_API UAnimNotify_AttachItemContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FContextualItemAttachment> ContextualItemAttachments;
    
public:
    UAnimNotify_AttachItemContextualAction();

};


#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "ERagdollAction.h"
#include "AnimNotify_RagdollAction.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_RagdollAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERagdollAction RagdollAction;
    
    UAnimNotify_RagdollAction();

};


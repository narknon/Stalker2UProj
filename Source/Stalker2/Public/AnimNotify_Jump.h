#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EJumpState.h"
#include "AnimNotify_Jump.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_Jump : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJumpState JumpState;
    
    UAnimNotify_Jump();

};


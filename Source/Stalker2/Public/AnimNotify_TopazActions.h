#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EAnimTopazAction.h"
#include "AnimNotify_TopazActions.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STALKER2_API UAnimNotify_TopazActions : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimTopazAction TopazAction;
    
    UAnimNotify_TopazActions();

};


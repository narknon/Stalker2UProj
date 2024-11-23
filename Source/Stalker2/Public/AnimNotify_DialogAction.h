#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "ENotifyDialogAction.h"
#include "AnimNotify_DialogAction.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_DialogAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENotifyDialogAction NotifyDialogAction;
    
    UAnimNotify_DialogAction();

};


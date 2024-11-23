#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "ENotifyGuitarAction.h"
#include "AnimNotify_GuitarAction.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_GuitarAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENotifyGuitarAction GuitarAction;
    
    UAnimNotify_GuitarAction();

};


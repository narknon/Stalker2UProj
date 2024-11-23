#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "AnimNotify_MakeAttack.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_MakeAttack : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInstantAttack;
    
    UAnimNotify_MakeAttack();

};


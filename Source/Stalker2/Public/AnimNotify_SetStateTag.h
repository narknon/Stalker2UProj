#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EStateTag.h"
#include "AnimNotify_SetStateTag.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_SetStateTag : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTag StateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UAnimNotify_SetStateTag();

};


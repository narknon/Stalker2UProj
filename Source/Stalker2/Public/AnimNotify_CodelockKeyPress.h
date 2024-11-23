#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "ECodelockKeyType.h"
#include "AnimNotify_CodelockKeyPress.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_CodelockKeyPress : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECodelockKeyType KeyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CodeDigit;
    
    UAnimNotify_CodelockKeyPress();

};


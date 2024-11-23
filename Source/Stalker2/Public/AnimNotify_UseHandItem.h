#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EHandItem.h"
#include "AnimNotify_UseHandItem.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STALKER2_API UAnimNotify_UseHandItem : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHandItem HandItem;
    
    UAnimNotify_UseHandItem();

};


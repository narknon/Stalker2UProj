#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EEmotionalFaceMasks.h"
#include "AnimNotify_ChangeFaceMask.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_ChangeFaceMask : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmotionalFaceMasks FaceMask;
    
    UAnimNotify_ChangeFaceMask();

};


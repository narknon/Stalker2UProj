#pragma once
#include "CoreMinimal.h"
#include "Animation/InputScaleBias.h"
#include "AnimNotifyBase.h"
#include "AnimNotify_DragWeapon.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STALKER2_API UAnimNotify_DragWeapon : public UAnimNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputRange DragImpulseRange;
    
public:
    UAnimNotify_DragWeapon();

};


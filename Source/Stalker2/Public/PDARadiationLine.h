#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PDARadiationLine.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDARadiationLine : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* MoveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShoudBlockAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveAnimSpeed;
    
    UPDARadiationLine();

};


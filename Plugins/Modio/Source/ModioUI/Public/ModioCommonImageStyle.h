#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Styling/SlateBrush.h"
#include "ModioCommonImageStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonImageStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ImageFrameBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ImageBrush;
    
    UModioCommonImageStyle();

};


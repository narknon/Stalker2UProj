#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MapBorderIndicator.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UMapBorderIndicator : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BorderLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BorderRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BorderBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BorderTop;
    
    UMapBorderIndicator();

};


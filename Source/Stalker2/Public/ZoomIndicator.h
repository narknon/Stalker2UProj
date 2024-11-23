#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "ZoomIndicator.generated.h"

class UHorizontalBox;
class UTextWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UZoomIndicator : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ZoomPointer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* TextCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PointerZoomLevelOffset;
    
    UZoomIndicator();

};


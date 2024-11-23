#pragma once
#include "CoreMinimal.h"
#include "CrosshairWidgetBase.h"
#include "CrosshairWidgetCircle.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UCrosshairWidgetCircle : public UCrosshairWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* circle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CircleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDespersionLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RadiuseParametr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RadiuseParametrMax;
    
public:
    UCrosshairWidgetCircle();

};


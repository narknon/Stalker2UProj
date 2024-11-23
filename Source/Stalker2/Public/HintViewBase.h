#pragma once
#include "CoreMinimal.h"
#include "EHintProgressType.h"
#include "HintViewSettings.h"
#include "ProgressMaterialData.h"
#include "WidgetBase.h"
#include "HintViewBase.generated.h"

class UHintImageBase;
class UImage;
class USizeBox;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UHintViewBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializeAutomatically;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHintViewSettings HintViewSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintImageBase* HintIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintImageBase* HintIconImageDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ProgressMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* ViewSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PressAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressAnimationSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHintProgressType, FProgressMaterialData> ProgressMaterialMap;
    
public:
    UHintViewBase();

};


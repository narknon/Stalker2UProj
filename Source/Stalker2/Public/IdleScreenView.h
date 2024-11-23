#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ViewBaseExtended.h"
#include "IdleScreenView.generated.h"

class UProgressBarWidget;
class UVerticalBox;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UIdleScreenView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2f LoadArrowRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IndicatorSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* TextSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* TextTransitionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShaderCompilingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ShadersCompilationBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBarWidget* ProgressBarShaderCompiling;
    
public:
    UIdleScreenView();

    UFUNCTION(BlueprintCallable)
    void OnAnyKeyIsPressed();
    
};


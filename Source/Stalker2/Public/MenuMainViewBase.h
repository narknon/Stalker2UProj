#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ViewBaseExtended.h"
#include "MenuMainViewBase.generated.h"

class UEnhancedInputComponent;
class UMenuLegendSubView;
class UMenuMainBackgroundVideo;
class UMenuSubViewBase;
class UOverlay;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UMenuMainViewBase : public UViewBaseExtended {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* SubMenuViewOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuLegendSubView* LegendSubView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuMainBackgroundVideo* MainMenuBackgroundVideo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMenuSubViewBase> RootSubViewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOutAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeInAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutSpeedMultiplier;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnhancedInputComponent* EnhancedInputComponent;
    
public:
    UMenuMainViewBase();

    UFUNCTION(BlueprintCallable)
    void FadeOutStartedFunction();
    
    UFUNCTION(BlueprintCallable)
    void FadeOutFinishedFunction();
    
    UFUNCTION(BlueprintCallable)
    void FadeInStartedFunction();
    
    UFUNCTION(BlueprintCallable)
    void FadeInFinishedFunction();
    
};


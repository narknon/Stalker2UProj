#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInteractionType -FallbackName=EInteractionType
#include "HoverAction.h"
#include "WidgetBase.h"
#include "HintBase.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UHintBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionType InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultStylePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StylePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FirstPlanStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BackgroundStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStyleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckInputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamepadKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputMappingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HintFontStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HintActionStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
    UHintBase();

    UFUNCTION(BlueprintCallable)
    void UpdateHintWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetStylePrefix(const FString& InStylePrefix);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostShowHover(bool bInShow);
    
    UFUNCTION(BlueprintCallable)
    void HoverChangeHintTextColor(const bool bShow, const FString& InStylePrefix);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FHoverAction> GetHoverSettings() const;
    
};


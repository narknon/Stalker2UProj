#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "RightClickMenuItemWidget.generated.h"

class UButton;
class UImage;
class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API URightClickMenuItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ButtonClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* UnhoveredBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* HoveredBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColorHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColorUnhovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> MenuItemWidgetClass;
    
public:
    URightClickMenuItemWidget();

    UFUNCTION(BlueprintCallable)
    void OnButtonUnHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonClick();
    
};


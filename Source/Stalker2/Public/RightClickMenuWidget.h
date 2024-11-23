#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RightClickMenuItemData.h"
#include "Templates/SubclassOf.h"
#include "RightClickMenuWidget.generated.h"

class UImage;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API URightClickMenuWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* Menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Left_NoTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Right_NoTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> MenuItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RadiationMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoTileBordersElementsNum;
    
public:
    URightClickMenuWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnNoItemClick();
    
    UFUNCTION(BlueprintCallable)
    void OnItemHover(const FRightClickMenuItemData& Data, const bool bInHover);
    
    UFUNCTION(BlueprintCallable)
    void OnItemClicked(const FRightClickMenuItemData& Data);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnClickMarkerDelegate.h"
#include "OnHoverMarkerDelegate.h"
#include "WidgetBase.h"
#include "WorldMapMarker.generated.h"

class UButton;
class UCanvasPanelSlot;
class UImage;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UWorldMapMarker : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHoverMarker OnHoverMarker;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClickMarker OnClickMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScale;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MarkerZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MarkerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* MarkerSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* ZoneRadiuse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ClickZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHoverScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoverScaleValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMarkerClick;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* PerentCanvasSlot;
    
public:
    UWorldMapMarker();

    UFUNCTION(BlueprintCallable)
    void OnMouseUnhover();
    
    UFUNCTION(BlueprintCallable)
    void OnMouseHover();
    
    UFUNCTION(BlueprintCallable)
    void MarkerClick();
    
};


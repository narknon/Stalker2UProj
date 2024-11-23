#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnMapMarkerClickDelegate.h"
#include "OnMapMarkerMarkerDelegate.h"
#include "UID.h"
#include "WidgetBase.h"
#include "WorldMap.generated.h"

class UCanvasPanel;
class UOverlay;
class USizeBox;
class UWidget;
class UWorldMapMarker;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UWorldMap : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* WorldMapSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MarkerStoreg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* MapContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* PlayerPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddWorldAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LandmarkOffset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMapMarkerMarker OnMapMarkerMarker;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMapMarkerClick OnMapMarkerClick;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWorldMapMarker*> markers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWorldMapMarker*> Landmarks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUID FollowMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapMarker* CurrHoverMarker;
    
public:
    UWorldMap();

    UFUNCTION(BlueprintCallable)
    void MarkerHover(bool bInHovered, UWorldMapMarker* InHoverMarkerWidget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MarkerClick(const UWorldMapMarker* HoverMarkerWidget);
    
};


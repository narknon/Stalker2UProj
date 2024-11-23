#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "ETrackGroup.h"
#include "Templates/SubclassOf.h"
#include "UID.h"
#include "WorldMapManager.generated.h"

class AWorldMapScene;
class UDataTable;
class UMarkerCompassWidget;
class UMarkerSettings;
class USRLEAsset;
class UWorldMapMarker;

UCLASS(Blueprintable)
class STALKER2_API UWorldMapManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWorldMapMarker> WorldMapMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWorldMapMarker> WorldMapRegionMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWorldMapMarker> WorldMapLocationMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWorldMapMarker> WorldMapHubMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMarkerCompassWidget> MarkerCompassWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* MarkerIconsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMarkerSettings* MarkerSettingsAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldMapScene* WorldMapScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USRLEAsset* RegionTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ETrackGroup, FUID> TrackedMarkers;
    
public:
    UWorldMapManager();

};


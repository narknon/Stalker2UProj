#pragma once
#include "CoreMinimal.h"
#include "WorldMapMarker.h"
#include "WorldMapRegionMarker.generated.h"

class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UWorldMapRegionMarker : public UWorldMapMarker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* RegionName;
    
public:
    UWorldMapRegionMarker();

};


#pragma once
#include "CoreMinimal.h"
#include "WorldMapMarker.h"
#include "WorldMapHubMarker.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UWorldMapHubMarker : public UWorldMapMarker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MiniMarkerMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MiniMarkerSide;
    
    UWorldMapHubMarker();

};


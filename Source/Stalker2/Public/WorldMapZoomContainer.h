#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "WorldMapZoomContainer.generated.h"

class UImage;
class UUserMarkerSelector;
class UWorldMap;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UWorldMapZoomContainer : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMap* WorldMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserMarkerSelector* GamepadCursor;
    
    UWorldMapZoomContainer();

    UFUNCTION(BlueprintCallable)
    void MoveToPlayerLocation();
    
private:
    UFUNCTION(BlueprintCallable)
    void CenterOnCachedLocation();
    
};


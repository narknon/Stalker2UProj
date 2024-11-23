#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateColor.h"
#include "EMarkerType.h"
#include "PDAPage.h"
#include "WorldMapPage.generated.h"

class UHintInputController;
class UMapLegend;
class USizeBox;
class UWidget;
class UWorldMapMarker;
class UWorldMapTooltip;
class UWorldMapZoomContainer;
class UZoomIndicator;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UWorldMapPage : public UPDAPage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapTooltip* WorldMapTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapLegend* MapLegend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ZoomContainerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapZoomContainer* ZoomContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UZoomIndicator* ZoomIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* HintZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ShowMarkerSelectorHintGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* MoveToPlayerPositionHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ShowMarkerSelectorHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* HideMarkerSelectorHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* SetFollowLandmarkHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* SelectMarkerHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* DeleteSelectedLandmarkHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ButtonToggleTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ChooseMarkerHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ChangeZoomLevelHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* GamepadNavigationHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ShowLegendHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ShowGotoJournalTaskHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintInputController* ButtonHintExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DefaultPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultZoomLVL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOpenDefaultZoomLVL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePlayerLandmarks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HintZoomSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HintScrollLegendSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HintDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HintTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMarkerType, FSlateColor> MarkerHoverColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMarkerType, FSlateColor> MarkerUnhoverColors;
    
public:
    UWorldMapPage();

    UFUNCTION(BlueprintCallable)
    void UpdatePlatformInputMode();
    
    UFUNCTION(BlueprintCallable)
    void UIPDAToggleMarkTracking();
    
    UFUNCTION(BlueprintCallable)
    void UIPDAToggleLegend();
    
    UFUNCTION(BlueprintCallable)
    void UIPDAOpenQuestInJournal();
    
    UFUNCTION(BlueprintCallable)
    void UIPDAOpenPlayerMarkerSelector();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationUpReleased();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationUp();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationRightReleased();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationRight();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationLeftReleased();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationLeft();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationDownReleased();
    
    UFUNCTION(BlueprintCallable)
    void UIPDANavigationDown();
    
    UFUNCTION(BlueprintCallable)
    void UIPDAMoveToPlayerPosition();
    
    UFUNCTION(BlueprintCallable)
    void UIPDADeletePlayerMarker();
    
    UFUNCTION(BlueprintCallable)
    void UIPDACreateTrackedPlayerMarker();
    
    UFUNCTION(BlueprintCallable)
    void UIPDACreatePlayerMarker(const EMarkerType LandmarkType, const FVector& CreateMarkedLocation);
    
    UFUNCTION(BlueprintCallable)
    void UIPDAChangeVisibilityPlayerMarkers();
    
    UFUNCTION(BlueprintCallable)
    void OnPressExit();
    
    UFUNCTION(BlueprintCallable)
    void OnMarkerSelectorShow();
    
    UFUNCTION(BlueprintCallable)
    void OnMarkerSelectorHide();
    
    UFUNCTION(BlueprintCallable)
    void OnLegendUnhover();
    
    UFUNCTION(BlueprintCallable)
    void OnLegendHover();
    
private:
    UFUNCTION(BlueprintCallable)
    void MarkerHover(const bool bHovered, UWorldMapMarker* HoverMarkerWidget);
    
    UFUNCTION(BlueprintCallable)
    void MarkerClick(const UWorldMapMarker* HoverMarkerWidget);
    
};


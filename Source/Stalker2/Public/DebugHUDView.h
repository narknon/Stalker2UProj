#pragma once
#include "CoreMinimal.h"
#include "ViewBase.h"
#include "DebugHUDView.generated.h"

class UHorizontalBox;
class UStatPanelDebug;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UDebugHUDView : public UViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HourText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MinutesText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DataText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* MiniMapPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* DataTimePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatPanelDebug* StatPanelDebug;
    
    UDebugHUDView();

};


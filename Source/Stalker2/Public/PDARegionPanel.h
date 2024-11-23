#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChildViewBase.h"
#include "PDARegionPanel.generated.h"

class UProgressBar;
class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDARegionPanel : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* RegionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ActiveColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DisactiveColor;
    
    UPDARegionPanel();

};


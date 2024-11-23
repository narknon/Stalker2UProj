#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "InspectArtifactView.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UInspectArtifactView : public UViewBaseExtended {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HintFadeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HintFadeInPlaybackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HintFadeOutPlaybackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HintShowTime;
    
public:
    UInspectArtifactView();

};


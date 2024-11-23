#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CinematicKeyFrameData.generated.h"

USTRUCT(BlueprintType)
struct CINEMATICKEYFRAMETRACKS_API FCinematicKeyFrameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyFrameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkipTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FadeTargetColor;
    
    FCinematicKeyFrameData();
};


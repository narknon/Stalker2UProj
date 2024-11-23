#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMediaCaptureCroppingType.h"
#include "EMediaCaptureOverrunAction.h"
#include "MediaCaptureOptions.generated.h"

USTRUCT(BlueprintType)
struct MEDIAIOCORE_API FMediaCaptureOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaCaptureOverrunAction OverrunAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaCaptureCroppingType Crop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint CustomCapturePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResizeSourceBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipFrameWhenRunningExpensiveTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConvertToDesiredPixelFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAlphaToOneOnConversion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyLinearToSRGBConversion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutostopOnCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfFramesToCapture;
    
    FMediaCaptureOptions();
};


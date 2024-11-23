#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EMediaCaptureState.h"
#include "MediaCaptureOptions.h"
#include "MediaCaptureStateChangedSignatureDelegate.h"
#include "MediaCapture.generated.h"

class UMediaOutput;
class UTextureRenderTarget2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MEDIAIOCORE_API UMediaCapture : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaCaptureStateChangedSignature OnStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaOutput* MediaOutput;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* CapturingRenderTarget;
    
public:
    UMediaCapture();

    UFUNCTION(BlueprintCallable)
    bool UpdateTextureRenderTarget2D(UTextureRenderTarget2D* RenderTarget);
    
    UFUNCTION(BlueprintCallable)
    void StopCapture(bool bAllowPendingFrameToBeProcess);
    
    UFUNCTION(BlueprintCallable)
    void SetMediaOutput(UMediaOutput* InMediaOutput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMediaCaptureState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint GetDesiredSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPixelFormat> GetDesiredPixelFormat() const;
    
    UFUNCTION(BlueprintCallable)
    bool CaptureTextureRenderTarget2D(UTextureRenderTarget2D* RenderTarget, FMediaCaptureOptions CaptureOptions);
    
    UFUNCTION(BlueprintCallable)
    bool CaptureActiveSceneViewport(FMediaCaptureOptions CaptureOptions);
    
};


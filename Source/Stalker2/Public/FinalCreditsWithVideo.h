#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EBorderType.h"
#include "VideoWidget.h"
#include "FinalCreditsWithVideo.generated.h"

class UBinkMediaPlayer;
class UCreditsWidget;
class UImage;
class UMediaSource;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UFinalCreditsWithVideo : public UUserWidget, public IVideoWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCreditsWidget* CreditsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* BinkMediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Border;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBorderType, TSoftObjectPtr<UTexture2D>> BorderImages;
    
public:
    UFinalCreditsWithVideo();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVideo(UMediaSource* VideoToPlay);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVideoDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void EndVideo();
    

    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EBorderType.h"
#include "MenuMainBackgroundVideo.generated.h"

class UBinkMediaPlayer;
class UImage;
class UMediaSource;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UMenuMainBackgroundVideo : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMediaSource> BackgroundVideo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMediaSource> BackgroundVideoSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* BinkMediaPlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BlackoutImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Border;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBorderType, TSoftObjectPtr<UTexture2D>> BorderImages;
    
public:
    UMenuMainBackgroundVideo();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVideo(UMediaSource* VideoToPlay);
    
};


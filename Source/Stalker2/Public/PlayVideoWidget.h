#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VideoWidget.h"
#include "PlayVideoWidget.generated.h"

class UBinkMediaPlayer;
class USkipHintView;
class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPlayVideoWidget : public UUserWidget, public IVideoWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkipHintView* SkipHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* SubtitleTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* BinkMediaPlayer;
    
public:
    UPlayVideoWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SkipVideo();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVideoDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void EndVideo();
    

    // Fix for true pure virtual functions not being implemented
};


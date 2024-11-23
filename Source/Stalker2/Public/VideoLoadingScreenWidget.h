#pragma once
#include "CoreMinimal.h"
#include "TimedLoadingScreenWidget.h"
#include "VideoLoadingScreenWidget.generated.h"

class UBinkMediaPlayer;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UVideoLoadingScreenWidget : public UTimedLoadingScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* BinkMediaPlayer;
    
public:
    UVideoLoadingScreenWidget();

    UFUNCTION(BlueprintCallable)
    void EndVideo();
    
};


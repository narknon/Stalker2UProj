#pragma once
#include "CoreMinimal.h"
#include "BaseLoadingScreenWidget.h"
#include "TimedLoadingScreenWidget.generated.h"

class UImage;
class UThrobber;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UTimedLoadingScreenWidget : public UBaseLoadingScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThrobber* LoadingIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ContentImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
public:
    UTimedLoadingScreenWidget();

};


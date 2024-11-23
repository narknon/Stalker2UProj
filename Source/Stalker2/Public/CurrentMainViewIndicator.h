#pragma once
#include "CoreMinimal.h"
#include "TextSettings.h"
#include "WidgetBase.h"
#include "CurrentMainViewIndicator.generated.h"

class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UCurrentMainViewIndicator : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextSettings TextSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* MainViewText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MainMenuSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PauseMenuSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameOverMenuSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UndefinedMenuSID;
    
public:
    UCurrentMainViewIndicator();

};


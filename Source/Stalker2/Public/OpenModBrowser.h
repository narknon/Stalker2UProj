#pragma once
#include "CoreMinimal.h"
#include "MenuButtonActionBase.h"
#include "OpenModBrowser.generated.h"

class UMenuSubViewBase;

UCLASS(Blueprintable, EditInlineNew)
class UOpenModBrowser : public UMenuButtonActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMenuSubViewBase> ModBrowserDummyViewWidget;
    
public:
    UOpenModBrowser();

};


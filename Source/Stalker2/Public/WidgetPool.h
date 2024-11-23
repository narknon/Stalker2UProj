#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "WidgetPool.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UWidgetPool : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetInPoolClass;
    
public:
    UWidgetPool();

private:
    UFUNCTION(BlueprintCallable)
    UUserWidget* CreateWidgetByPool();
    
};


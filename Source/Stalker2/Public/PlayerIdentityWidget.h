#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PlayerIdentityWidget.generated.h"

class UHorizontalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UPlayerIdentityWidget : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* IdentityContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UWidgetBase>> IdentityList;
    
public:
    UPlayerIdentityWidget();

};


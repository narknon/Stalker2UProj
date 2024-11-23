#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "RichTextBlockWidgetDecorator.generated.h"

class UDataTable;
class UUserWidget;

UCLASS(Abstract, Blueprintable)
class STALKER2_API URichTextBlockWidgetDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> ChachedWidgetsCreatedByDecorator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WidgetSet;
    
public:
    URichTextBlockWidgetDecorator();

};


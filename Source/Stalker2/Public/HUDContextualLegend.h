#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "HUDContextualLegend.generated.h"

class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UHUDContextualLegend : public UChildViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* LegendText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DropDeadBodyHintSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GuitarPCAHintSID;
    
public:
    UHUDContextualLegend();

};


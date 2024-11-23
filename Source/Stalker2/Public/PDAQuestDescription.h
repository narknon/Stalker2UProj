#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChildViewBase.h"
#include "OnHoverDescriptionDelegate.h"
#include "PDAQuestDescription.generated.h"

class UScrollBox;
class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDAQuestDescription : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* DescriptionContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHoverIllumination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHoverDescription OnHoverDescription;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HoverScrollColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UnHoverScrollColor;
    
public:
    UPDAQuestDescription();

};


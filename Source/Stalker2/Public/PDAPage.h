#pragma once
#include "CoreMinimal.h"
#include "EPDAPageType.h"
#include "PageViewBase.h"
#include "PDAPage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDAPage : public UPageViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPDAPageType PDAPage;
    
    UPDAPage();

};


#pragma once
#include "CoreMinimal.h"
#include "EPDATutorialCategory.h"
#include "TutorialFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct FTutorialFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableFilter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPDATutorialCategory Filter;
    
    STALKER2_API FTutorialFilterSettings();
};


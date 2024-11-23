#pragma once
#include "CoreMinimal.h"
#include "EHintDescriptionSettings.h"
#include "HintStyleSettings.generated.h"

USTRUCT(BlueprintType)
struct FHintStyleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHintDescriptionSettings DescriptionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HintDescriptionFontStyleSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HintDescriptionSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HintAndDescriptionGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HintHeight;
    
    STALKER2_API FHintStyleSettings();
};


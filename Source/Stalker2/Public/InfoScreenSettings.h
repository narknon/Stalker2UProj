#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InfoScreenSettings.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FInfoScreenSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Image;
    
    FInfoScreenSettings();
};


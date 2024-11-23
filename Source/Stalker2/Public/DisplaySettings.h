#pragma once
#include "CoreMinimal.h"
#include "DisplaySettings.generated.h"

USTRUCT(BlueprintType)
struct FDisplaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TitleBackgroundStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TitleBorderLineStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InsideMarkerStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MarkerBackgroundStyleId;
    
    STALKER2_API FDisplaySettings();
};


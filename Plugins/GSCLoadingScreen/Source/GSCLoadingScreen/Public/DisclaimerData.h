#pragma once
#include "CoreMinimal.h"
#include "ECustomDisclaimerType.h"
#include "DisclaimerData.generated.h"

class USlateBrushAsset;
class USlateWidgetStyleAsset;

USTRUCT(BlueprintType)
struct GSCLOADINGSCREEN_API FDisclaimerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* BackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* HealthFooterLineBrushPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* HealthFooterImageBrushPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* HealthHeaderLineBrushPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* HealthTitleFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* HealthTitle2Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* HealthDescFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* HealthDesc2Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title2SID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Content2SID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomDisclaimerType CustomDisclaimerType;
    
    FDisclaimerData();
};


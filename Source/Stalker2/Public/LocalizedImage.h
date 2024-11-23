#pragma once
#include "CoreMinimal.h"
#include "ELocalizationLanguage.h"
#include "WidgetBase.h"
#include "LocalizedImage.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API ULocalizedImage : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELocalizationLanguage, TSoftObjectPtr<UTexture2D>> LocalizedImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> FallbackImage;
    
public:
    ULocalizedImage();

    UFUNCTION(BlueprintCallable)
    void ForceLoadImage(const TSoftObjectPtr<UTexture2D>& SoftImage);
    
};


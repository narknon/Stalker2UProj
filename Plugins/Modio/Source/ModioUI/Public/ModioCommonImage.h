#pragma once
#include "CoreMinimal.h"
#include "ModioCommonImageBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonImage.generated.h"

class UCommonLazyImage;
class UModioCommonImageStyle;
class UTexture2DDynamic;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonImage : public UModioCommonImageBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonImageStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* ImageFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* LoadedImageTexture;
    
public:
    UModioCommonImage();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonImageStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SynchronizeProperties();
    
};


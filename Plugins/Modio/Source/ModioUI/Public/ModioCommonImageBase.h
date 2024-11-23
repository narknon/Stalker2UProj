#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EModioAvatarSize.h"
#include "EModioGallerySize.h"
#include "EModioLogoSize.h"
#include "ModioImageWrapper.h"
#include "ModioModID.h"
#include "ModioCommonImageBase.generated.h"

class UTexture2DDynamic;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonImageBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnImageLoadedDynamicDelegate, bool, bSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnImageLoadedDynamicDelegate OnImageLoadedDynamic;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLoadFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLoading;
    
public:
    UModioCommonImageBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetImageTexture(UTexture2DDynamic* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartLoadNewImage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoadNewImageError();
    
    UFUNCTION(BlueprintCallable)
    void LoadImageFromLogo(FModioModID ModId, EModioLogoSize LogoSize);
    
    UFUNCTION(BlueprintCallable)
    void LoadImageFromGallery(FModioModID ModId, EModioGallerySize GallerySize, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void LoadImageFromFileAsync(FModioImageWrapper ImageLoader);
    
    UFUNCTION(BlueprintCallable)
    void LoadImageFromAvatar(FModioModID ModId, EModioAvatarSize AvatarSize);
    
};


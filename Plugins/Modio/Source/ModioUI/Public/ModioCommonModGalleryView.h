#pragma once
#include "CoreMinimal.h"
#include "EModioGallerySize.h"
#include "EModioLogoSize.h"
#include "ModioUIAsyncOperationWidget.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModGalleryView.generated.h"

class UModioCommonButtonBase;
class UModioCommonDynamicImage;
class UModioCommonErrorWithRetryWidget;
class UModioCommonListView;
class UModioCommonModGalleryViewStyle;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonModGalleryView : public UModioCommonActivatableWidget, public IModioUIAsyncOperationWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonModGalleryViewStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioGallerySize GallerySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioLogoSize LogoSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonListView* ImageNavButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonDynamicImage* SelectedGalleryImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* PreviousButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* NextButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ModGalleryLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonErrorWithRetryWidget* ErrorWithRetryWidget;
    
public:
    UModioCommonModGalleryView();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonModGalleryViewStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPreviousButtonVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextButtonVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshGallery();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GoToPreviousImage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GoToNextImage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSelectedImageGalleryIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNumGalleryImages();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddGalleryImage(int32 ImageGalleryIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddDefaultGalleryImage();
    

    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "ModioCommonModBrowserBaseStyle.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModBrowserStyle.generated.h"

class UModioCommonModListBase;
class UModioCommonQuickAccessViewBase;
class UModioCommonSearchViewBase;
class UModioCommonTabButtonBase;
class UModioCommonTabButtonStyle;

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonModBrowserStyle : public UModioCommonModBrowserBaseStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonTabButtonBase> TabButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonTabButtonStyle> TabButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonModListBase> FeaturedViewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonModListBase> CollectionViewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonQuickAccessViewBase> QuickAccessViewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonSearchViewBase> SearchViewClass;
    
    UModioCommonModBrowserStyle();

};


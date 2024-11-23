#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Styling/SlateColor.h"
#include "ModioGenericModEntryRating.generated.h"

class UPanelWidget;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioGenericModEntryRating : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* StarImagesPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StarImageTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor StarActiveHoveredColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor StarInactiveHoveredColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor StarActiveUnhoveredColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor StarInactiveUnhoveredColor;
    
public:
    UModioGenericModEntryRating();

};


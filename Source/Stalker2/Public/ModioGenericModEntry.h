#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ModioCommonGenericModEntry.h"
#include "ModioGenericModEntry.generated.h"

class UModioGenericModEntryRating;
class UPanelWidget;
class UTextWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioGenericModEntry : public UModioCommonGenericModEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioGenericModEntryRating* Rating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* ModAuthorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* ByText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ModIncompatiblePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SelectedOperationTrackerImageColorTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UnselectedOperationTrackerImageColorTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UnselectedOperationTrackerImageColorTintError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SelectedByTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UnselectedByTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SelectedModAuthorTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UnselectedModAuthorTextColor;
    
public:
    UModioGenericModEntry();

};


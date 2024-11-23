#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WidgetBase.h"
#include "TaskIcon.generated.h"

class UImage;
class USizeBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UTaskIcon : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2f DesiredSize;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* IconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SelectedMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TaskMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainQuestColorStyleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecondaryQuestColorStyleID;
    
public:
    UTaskIcon();

};


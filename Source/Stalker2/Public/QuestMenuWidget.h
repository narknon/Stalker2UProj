#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "QuestMenuWidget.generated.h"

class UTaskIcon;
class UTaskMenuWidget;
class UTextWidget;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UQuestMenuWidget : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTaskIcon* QuestIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* QuestName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* QuestLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* QuestTaskList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTaskMenuWidget> TaskMenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TaskSlotPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainQuestStyleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecondaryQuestStyleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TaskCap;
    
public:
    UQuestMenuWidget();

};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonFilteredModListViewStyle.generated.h"

class UModioCommonButtonStyle;
class UModioCommonListViewStyle;
class UModioCommonTextStyle;

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonFilteredModListViewStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonListViewStyle> ModListStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonButtonStyle> PreviousPageButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonButtonStyle> NextPageButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonTextStyle> CurrentPageTextBlockStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonTextStyle> TotalPagesTextBlockStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonTextStyle> TotalModsTextBlockStyle;
    
    UModioCommonFilteredModListViewStyle();

};


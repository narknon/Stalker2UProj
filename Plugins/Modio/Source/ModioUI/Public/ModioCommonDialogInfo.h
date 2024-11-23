#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EModioCommonDialogButtonType.h"
#include "ModioCommonDialogInfo.generated.h"

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonDialogInfo : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDialogButtonClicked, EModioCommonDialogButtonType, ClickedButtonType);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DialogText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ButtonsToDisplay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDialogButtonClicked OnDialogButtonClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    UModioCommonDialogInfo();

    UFUNCTION(BlueprintCallable)
    void HandleDialogButtonClicked(EModioCommonDialogButtonType ClickedButtonType);
    
};


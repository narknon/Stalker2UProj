#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonAuthViewBase.generated.h"

class UModioCommonEmailAuthCodeViewBase;
class UModioCommonEmailAuthLoadingViewBase;
class UModioCommonEmailAuthViewBase;
class UModioCommonTermsOfUseViewBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonAuthViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonTermsOfUseViewBase> TermsOfUseViewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonEmailAuthViewBase> EmailAuthViewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonEmailAuthLoadingViewBase> EmailAuthLoadingViewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonEmailAuthCodeViewBase> EmailAuthCodeViewBaseClass;
    
public:
    UModioCommonAuthViewBase();

};


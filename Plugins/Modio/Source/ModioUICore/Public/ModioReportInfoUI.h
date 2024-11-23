#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModioReportParams.h"
#include "ModioModInfoUIDetails.h"
#include "ModioReportInfoUI.generated.h"

UCLASS(Blueprintable)
class MODIOUICORE_API UModioReportInfoUI : public UObject, public IModioModInfoUIDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioReportParams ReportData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ModInfo;
    
    UModioReportInfoUI();


    // Fix for true pure virtual functions not being implemented
};


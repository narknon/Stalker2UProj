#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EModioReportType.h"
#include "ModioGameID.h"
#include "ModioModID.h"
#include "ModioReportParams.h"
#include "ModioUserID.h"
#include "ModioReportLibrary.generated.h"

UCLASS(Blueprintable)
class MODIO_API UModioReportLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioReportLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioReportParams MakeReportForUser(FModioUserID User, EModioReportType Type, const FString& ReportDescription, const FString& ReporterName, const FString& ReporterContact);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioReportParams MakeReportForMod(FModioModID Mod, EModioReportType Type, const FString& ReportDescription, const FString& ReporterName, const FString& ReporterContact);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioReportParams MakeReportForGame(FModioGameID Game, EModioReportType Type, const FString& ReportDescription, const FString& ReporterName, const FString& ReporterContact);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "DefaultRestrictions.h"
#include "GSCNavigationSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class UGSCNavigationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftClassPath> NavAreasPriorities;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftClassPath, FDefaultRestrictions> DefaultRestrictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UClass*> NavAreaClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FDefaultRestrictions> NavAreaDefaultRestrictions;
    
public:
    UGSCNavigationSettings();

};


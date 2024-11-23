#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "SaveLoadManager.generated.h"

class USaveLoadIO;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class STALKER2_API USaveLoadManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USaveLoadIO* SaveLoadIO;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> DLCUserFriendlyNames;
    
public:
    USaveLoadManager();

};


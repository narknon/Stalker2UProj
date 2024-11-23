#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerVD.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerVD : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerVD();

private:
    UFUNCTION(BlueprintCallable, Exec)
    void XSpawnDeadNpc() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XShowUnitAndSquadUIDs(float Radius) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XProtectSquad(const FString& SquadUID, bool bProtect) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void XProtectItemContainer(const FString& ContainerUID, bool bProtect) const;
    
};


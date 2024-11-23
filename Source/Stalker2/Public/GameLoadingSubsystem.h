#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameLoadingSubsystem.generated.h"

class ULevel;
class UWorldPartitionRuntimeCell;

UCLASS(Blueprintable)
class STALKER2_API UGameLoadingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWorldPartitionRuntimeCell*> LevelsToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<ULevel*> LevelsToRemove;
    
public:
    UGameLoadingSubsystem();

};


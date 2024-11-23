#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GlobalLoadingSubsystem.generated.h"

class UGlobal;

UCLASS(Blueprintable)
class STALKER2_API UGlobalLoadingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGlobal* GameInstance;
    
public:
    UGlobalLoadingSubsystem();

};


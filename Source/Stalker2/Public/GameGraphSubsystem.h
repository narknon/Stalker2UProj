#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameGraphSubsystem.generated.h"

class AGameGraphData;

UCLASS(Blueprintable)
class UGameGraphSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameGraphData* GameGraphData;
    
public:
    UGameGraphSubsystem();

};


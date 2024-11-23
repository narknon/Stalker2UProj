#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DebugWorldSubsystem.generated.h"

class AGSCDebugDrawer;

UCLASS(Blueprintable)
class STALKER2_API UDebugWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGSCDebugDrawer* Drawer;
    
public:
    UDebugWorldSubsystem();

};


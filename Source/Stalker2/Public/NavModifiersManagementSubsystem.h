#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "NavModifiersManagementSubsystem.generated.h"

class AGSCNavModifierVolume;
class ARecastNavMesh;

UCLASS(Blueprintable)
class UNavModifiersManagementSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, AGSCNavModifierVolume*> VolumesMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARecastNavMesh* CachedDefaultRecast;
    
public:
    UNavModifiersManagementSubsystem();

};


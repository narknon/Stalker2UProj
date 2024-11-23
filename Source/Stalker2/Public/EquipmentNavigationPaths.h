#pragma once
#include "CoreMinimal.h"
#include "EquipmentNavigationPath.h"
#include "EquipmentNavigationPaths.generated.h"

USTRUCT(BlueprintType)
struct FEquipmentNavigationPaths {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentNavigationPath> NavigationPaths;
    
    STALKER2_API FEquipmentNavigationPaths();
};


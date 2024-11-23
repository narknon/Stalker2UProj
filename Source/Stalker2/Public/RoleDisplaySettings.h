#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "RoleDisplaySettings.generated.h"

USTRUCT(BlueprintType)
struct FRoleDisplaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Margin;
    
    STALKER2_API FRoleDisplaySettings();
};


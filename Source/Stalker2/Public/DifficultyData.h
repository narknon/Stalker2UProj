#pragma once
#include "CoreMinimal.h"
#include "DifficultyData.generated.h"

class USetDifficulty;
class UTexture2D;

USTRUCT(BlueprintType)
struct FDifficultyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DifficultyImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USetDifficulty* DifficultyButtonAction;
    
    STALKER2_API FDifficultyData();
};


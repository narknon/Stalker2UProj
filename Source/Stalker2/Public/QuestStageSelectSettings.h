#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestStageSelectSettings.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FQuestStageSelectSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CollorMein;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CollorSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    STALKER2_API FQuestStageSelectSettings();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestStatusSettings.generated.h"

USTRUCT(BlueprintType)
struct FQuestStatusSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Collor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalisationSid;
    
    STALKER2_API FQuestStatusSettings();
};


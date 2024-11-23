#pragma once
#include "CoreMinimal.h"
#include "ENoteType.h"
#include "NoteFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct FNoteFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableFilter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENoteType Filter;
    
    STALKER2_API FNoteFilterSettings();
};


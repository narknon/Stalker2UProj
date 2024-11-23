#pragma once
#include "CoreMinimal.h"
#include "EDialogAnswerColor.h"
#include "DialogAnswerInfo.generated.h"

USTRUCT(BlueprintType)
struct FDialogAnswerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialogAnswerColor AnswerColor;
    
    STALKER2_API FDialogAnswerInfo();
};


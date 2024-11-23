#pragma once
#include "CoreMinimal.h"
#include "DialogAnswerInfo.h"
#include "UID.h"
#include "DialogFolderInfo.generated.h"

USTRUCT(BlueprintType)
struct FDialogFolderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FolderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogAnswerInfo> Answers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUID MemberUID;
    
    STALKER2_API FDialogFolderInfo();
};


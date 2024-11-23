#pragma once
#include "CoreMinimal.h"
#include "IssueStatuses.generated.h"

USTRUCT(BlueprintType)
struct FIssueStatuses {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ToDo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Reopened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Backlog;
    
    LEVELBOOKMARKS_API FIssueStatuses();
};


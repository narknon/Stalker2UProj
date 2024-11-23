#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IssueStatuses.h"
#include "JiraBookmarksSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=LevelBookmarks)
class LEVELBOOKMARKS_API UJiraBookmarksSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelDesignIssueComponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BugIssueType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocationCustomField;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamCustomFieldID;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JiraBookmarksDefaultTeam;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIssueStatuses IssueStatuses;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ReopenTransitionID;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CloseTransitionID;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InvestigationNeededCustomField;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InvestigationNeededDefaultValue;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ExpectedResultCustomField;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExpectedResultDefaultValue;
    
    UJiraBookmarksSettings();

};


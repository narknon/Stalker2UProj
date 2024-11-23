#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "JiraBookmarksSubsystem.generated.h"

UCLASS(Blueprintable, GlobalUserConfig, Config=Engine)
class LEVELBOOKMARKS_API UJiraBookmarksSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentUserID;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserMail;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* FlagClass;
    
public:
    UJiraBookmarksSubsystem();

};


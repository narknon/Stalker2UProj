#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "LevelBookmarksSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=LevelBookmarks)
class LEVELBOOKMARKS_API ULevelBookmarksSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath PathToRepository;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SuperUserNames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath JiraBookmarkFlagActor;
    
    ULevelBookmarksSettings();

};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JiraBookmarksFlag.generated.h"

class USceneComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class AJiraBookmarksFlag : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    AJiraBookmarksFlag(const FObjectInitializer& ObjectInitializer);

};


#include "JiraBookmarksFlag.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"

AJiraBookmarksFlag::AJiraBookmarksFlag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->WidgetComponent->SetupAttachment(RootComponent);
}



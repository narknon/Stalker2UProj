#include "JiraBookmarksFlagWidget.h"

UJiraBookmarksFlagWidget::UJiraBookmarksFlagWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->IssueID = FText::FromString(TEXT("ST-XXXXX"));
    this->IssuePriority = FText::FromString(TEXT("Prority: Not Implemented"));
    this->IssueVersion = FText::FromString(TEXT("Version: Not Implemented"));
    this->IssueDescription = FText::FromString(TEXT("Description: Waiting Request"));
    this->IssueSummary = FText::FromString(TEXT("Summary: Waiting Request"));
}



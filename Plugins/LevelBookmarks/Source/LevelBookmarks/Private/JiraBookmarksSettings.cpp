#include "JiraBookmarksSettings.h"

UJiraBookmarksSettings::UJiraBookmarksSettings() {
    this->LevelDesignIssueComponent = 10171;
    this->BugIssueType = 10004;
    this->LocationCustomField = 10097;
    this->TeamCustomFieldID = 10001;
    this->JiraBookmarksDefaultTeam = TEXT("9db5cf96-f863-4f02-aea6-890dc921a68e");
    this->ReopenTransitionID = 231;
    this->CloseTransitionID = 401;
    this->InvestigationNeededCustomField = 10176;
    this->InvestigationNeededDefaultValue = TEXT("10377");
    this->ExpectedResultCustomField = 10175;
    this->ExpectedResultDefaultValue = TEXT("Fill expected result manually");
}



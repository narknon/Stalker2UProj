#include "DisclaimerData.h"

FDisclaimerData::FDisclaimerData() {
    this->BackgroundBrush = NULL;
    this->HealthFooterLineBrushPath = NULL;
    this->HealthFooterImageBrushPath = NULL;
    this->HealthHeaderLineBrushPath = NULL;
    this->HealthTitleFont = NULL;
    this->HealthTitle2Font = NULL;
    this->HealthDescFont = NULL;
    this->HealthDesc2Font = NULL;
    this->CustomDisclaimerType = ECustomDisclaimerType::None;
}


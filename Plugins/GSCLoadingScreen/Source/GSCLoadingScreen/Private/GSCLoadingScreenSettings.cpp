#include "GSCLoadingScreenSettings.h"

UGSCLoadingScreenSettings::UGSCLoadingScreenSettings() {
    this->ScreenDataList.AddDefaulted(2);
    this->ScreenOrder.AddDefaulted(6);
    this->DisclaimerScreens.AddDefaulted(4);
    this->CurrentDisclaimerID = 0;
    this->FadeInDuration = 0.50f;
    this->FadeOutDuration = 1.00f;
    this->MinShowTime = 3.00f;
}



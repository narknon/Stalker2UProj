#include "GameInputDeviceConfiguration.h"

FGameInputDeviceConfiguration::FGameInputDeviceConfiguration() {
    this->bOverrideHardwareDeviceIdString = false;
    this->bProcessControllerButtons = false;
    this->bProcessControllerSwitchState = false;
    this->bProcessControllerAxis = false;
    this->bProcessRawReportData = false;
    this->RawReportReadingId = 0;
}


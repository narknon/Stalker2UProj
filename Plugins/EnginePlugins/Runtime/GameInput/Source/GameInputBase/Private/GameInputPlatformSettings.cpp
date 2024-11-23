#include "GameInputPlatformSettings.h"

UGameInputPlatformSettings::UGameInputPlatformSettings() {
    this->bProcessController = false;
    this->bProcessRawInput = false;
    this->bSpecialDevicesRequireExplicitDeviceConfiguration = true;
    this->bProcessGamepad = true;
    this->bProcessKeyboard = true;
    this->bProcessMouse = true;
    this->bProcessRacingWheel = false;
    this->RacingWheelDeadzone = 0.24f;
}



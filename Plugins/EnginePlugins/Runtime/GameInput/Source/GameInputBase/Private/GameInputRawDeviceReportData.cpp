#include "GameInputRawDeviceReportData.h"

FGameInputRawDeviceReportData::FGameInputRawDeviceReportData() {
    this->TranslationBehavior = ERawDeviceReportTranslationBehavior::TreatAsTrigger;
    this->AnalogDeadzone = 0;
    this->Scalar = 0.00f;
    this->LowerBitAxisIndex = 0;
    this->HigherBitAxisIndex = 0;
}


#include "DLSSSettings.h"

UDLSSSettings::UDLSSSettings() {
    this->bEnableDLSSD3D12 = true;
    this->bEnableDLSSD3D11 = false;
    this->bEnableDLSSVulkan = false;
    this->bEnableDLSSInEditorViewports = true;
    this->bEnableDLSSInPlayInEditorViewports = true;
    this->bShowDLSSSDebugOnScreenMessages = true;
    this->bGenericDLSSBinaryExists = false;
    this->NVIDIANGXApplicationId = 0;
    this->bCustomDLSSBinaryExists = false;
    this->bAllowOTAUpdate = true;
    this->bShowDLSSIncompatiblePluginsToolsWarnings = true;
    this->DLAAPreset = EDLSSPreset::Default;
    this->DLSSQualityPreset = EDLSSPreset::Default;
    this->DLSSBalancedPreset = EDLSSPreset::Default;
    this->DLSSPerformancePreset = EDLSSPreset::Default;
    this->DLSSUltraPerformancePreset = EDLSSPreset::Default;
}



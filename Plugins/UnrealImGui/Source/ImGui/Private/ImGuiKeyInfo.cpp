#include "ImGuiKeyInfo.h"

FImGuiKeyInfo::FImGuiKeyInfo() {
    this->shift = ECheckBoxState::Unchecked;
    this->ctrl = ECheckBoxState::Unchecked;
    this->alt = ECheckBoxState::Unchecked;
    this->Cmd = ECheckBoxState::Unchecked;
}


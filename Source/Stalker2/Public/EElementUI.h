#pragma once
#include "CoreMinimal.h"
#include "EElementUI.generated.h"

UENUM(BlueprintType)
enum class EElementUI : uint8 {
    None,
    All,
    AllWindows,
    Ammo,
    Clock,
    CombinationLock,
    Compass,
    CrossHair,
    DeathScreen,
    Dialog,
    EquipmentSlots,
    FadeoutScreen,
    GrenadeCounter,
    HP,
    Inventory,
    InteractionProgressBar,
    InteractionPrompt,
    InteractionPromptParameters,
    ItemsInInventoryContainer,
    ItemSelector,
    Menu,
    Minimap,
    MoneyInBag,
    MoneyInTrader,
    Quests,
    PickedItem,
    Radiation,
    RadiationBar,
    SleepMenu,
    SlotsInInventoryContainer,
    SlotsInStorageContainer,
    SlotsInTraderContainer,
    StackSplittingWindow,
    Stamina,
    Stats,
    StatsIconBar,
    Stealth,
    Storage,
    Subtitles,
    Teleport,
    Trader,
    Upgrade,
    WeaponSelector,
    WeightInBag,
    WorldMap,
    GetCount,
};


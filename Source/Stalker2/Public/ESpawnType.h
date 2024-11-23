#pragma once
#include "CoreMinimal.h"
#include "ESpawnType.generated.h"

UENUM(BlueprintType)
enum class ESpawnType : uint8 {
    None,
    ALifeGroup,
    Anomaly,
    AnomalySpawner,
    ArtifactSpawner,
    DeadBody,
    ElectroAnomaly,
    FlashlightOnZone,
    DailyScheduleZone,
    GuardZone,
    Item,
    ItemContainer,
    FogVolume,
    LairSpawner,
    LightningBallAnomaly,
    MoveToPath,
    Marker,
    Obj,
    PackOfItems,
    PillowAnomaly,
    PsyAnomaly,
    PSYControllerAnomaly,
    Patrol,
    ContextualAction,
    Radiation,
    SafeZone,
    Searchpoint,
    Shelter,
    SoapBubbleAnomaly,
    Hub,
    Squad,
    Trigger,
    DestructibleObject,
    WeatherSelection,
    TeleportPoint,
    ClickerAnomaly,
    OnlineModifierZone,
};

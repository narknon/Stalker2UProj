#pragma once
#include "CoreMinimal.h"
#include "EAssetType.generated.h"

UENUM(BlueprintType)
enum class EAssetType : uint8 {
    None,
    DynamicReloadAsset,
    Blueprint,
    AnomalyBlueprint,
    ArtifactBlueprint,
    BoltBlueprint,
    CharacterBlueprint,
    ProjectileBlueprint,
    InteractableBlueprint,
    UIWidgetBlueprint,
    GrenadeBlueprint,
    StaticMesh,
    SkeletalMesh,
    BaseWeaponAnimationBlueprints,
    AnimSequence,
    AnimMontage,
    Material,
    MaterialInstanceConstant,
    ItemIcons,
    UIIcons,
    Markers,
    UpgradeIcons,
    Texture2D,
    CurveFloat,
    CurveLinearColor,
    CameraShake,
    WeaponCameraShake,
    WeaponParticles,
    ProjectileParticles,
    ProjectileDecals,
    WeaponMaterials,
    CurveLinearColorAtlas,
    MaterialParameterCollection,
    ParticleSystems,
    NiagaraParticleSystem,
    TrueSkySequenceAsset,
    GroomAsset,
    GroomBindingAsset,
    GroomMaterials,
    AkAudioEvent,
    AkAudioParameter,
    AkAudioSwitchValue,
    AkAudioStateValue,
    AkAudioAuxBus,
    InputAction,
    InputMappingContext,
    GetCount,
};


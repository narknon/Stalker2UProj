#pragma once
#include "CoreMinimal.h"
#include "EDialogEventType.generated.h"

UENUM(BlueprintType)
enum class EDialogEventType : uint8 {
    None,
    HitReaction_InstaDeath,
    HitReaction_AgonyDeath,
    HitReaction_WheezingDeath,
    HitReaction_AverageDeath,
    HitReaction_CarouselDeath,
    HitReaction_Bullet,
    HitReaction_Explosion,
    HitReaction_Mutant,
    HitReaction_Anomaly,
    HitReaction_Transformation,
    Emission_LeaderStart,
    Emission_LeaderEnd,
    DefeatComment,
    Combat_Wounded_Knocked,
    Combat_Wounded_GoingToHeal,
    Combat_Wounded_HealingGratitude,
    Combat_Wounded_Grunt_HealReceive,
    Combat_EnemySearch,
    Combat_EnemyFound,
    Combat_SearchEnd,
    Combat_Threats_EnemySearch,
    Combat_Threats_AlertedSearch,
    Combat_Threats_AlertedSearchEnd,
    Combat_Threats_ThreatDetected,
    Combat_Start,
    Combat_Over,
    Combat_EnemyRetreat,
    Combat_SelfRetreat,
    Combat_Action_Cover,
    Combat_Action_Move,
    Combat_Action_Flank,
    Combat_Action_Detour,
    Combat_Action_EnemyHit,
    Combat_Action_FriendlyHit,
    Combat_Action_FriendlyFire,
    Combat_Action_Reload,
    Combat_Action_FireSupression,
    Combat_Action_FriendlyGrenade,
    Combat_Action_EnemyGrenade,
    Combat_Action_FriendlyDead,
    Combat_Action_EnemyDead,
    Combat_Zombie_Attack,
    Combat_Zombie_Moan,
    Peaceful_CorpseHubComment,
    Peaceful_DropCorpse,
    Peaceful_LootingEnemyCorpse,
    Peaceful_LootingFriendlyCorpse,
    CallPlayer,
    Interact_Busy,
    Interact_Friendly,
    Interact_Neutral,
    Interact_NonFriendly,
    Interact_Bump,
    Interact_HideWeapon,
    Interact_SpeakToLeader,
    Chatter,
    Relax_EmissionFirstMessage,
    Relax_EmissionSecondMessage,
    Relax_EmissionThirdMessage,
    DialogAction_Laugh,
    Joke,
    HitReaction_Melee,
    Count,
};

#pragma once

#include <cstdint>

#include "CGameEffectApplierRemover.hpp"

namespace NWNXLib {

namespace API {

// Forward class declarations (defined in the source file)
struct CGameEffect;
struct CNWSObject;
struct pfAECommands;
struct pfRECommands;

struct CNWSEffectListHandler
    : CGameEffectApplierRemover
{
    pfAECommands* m_pApplyEffectCommands;
    pfRECommands* m_pRemoveEffectCommands;

    // The below are auto generated stubs.
    CNWSEffectListHandler() = default;
    CNWSEffectListHandler(const CNWSEffectListHandler&) = default;
    CNWSEffectListHandler& operator=(const CNWSEffectListHandler&) = default;

    ~CNWSEffectListHandler();
    void InitializeEffects();
    int32_t OnApplyAbilityDecrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyAbilityIncrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyACDecrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyACIncrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyAppear(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyArcaneSpellFailure(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyAreaOfEffect(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyAttackDecrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyAttackIncrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyBeam(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyBlindness(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyBlindnessInactive(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyBonusFeat(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyBonusSpellOfLevel(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyConcealment(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyCurse(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyCutsceneGhost(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyCutsceneImmobile(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDamage(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDamageDecrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDamageImmunityDecrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDamageImmunityIncrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDamageIncrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDamageReduction(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDamageResistance(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDamageShield(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDarkness(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDeaf(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDeath(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDefensiveStance(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDisappear(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDisappearAppear(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDisarm(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDisease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDispelAllMagic(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyDispelBestMagic(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyEffectIcon(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyEffectImmunity(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyEnemyAttackBonus(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyEntangled(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyHasteInternal(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyHasteOrSlow(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyHeal(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyHitPointChangeWhenDying(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyInvisibility(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyItemProperty(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyKnockdown(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyLight(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyLimitMovementSpeed(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyLink(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyMissChance(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyModifyNumAttacks(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyMovementSpeedDecrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyMovementSpeedIncrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyNegativeLevel(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyPetrify(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyPoison(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyPolymorph(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyRacialType(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyRegenerate(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyResurrection(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySanctuary(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySavingThrowDecrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySavingThrowIncrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySeeInvisible(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySetAIState(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySetState(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySetStateInternal(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySilence(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySkillDecrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySkillIncrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySlowInternal(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySpecialWalkAnimation(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySpellFailure(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySpellImmunity(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySpellLevelAbsorption(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySpellResistanceDecrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySpellResistanceIncrease(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySummonCreature(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplySwarm(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyTaunt(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyTemporaryHitpoints(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyTimestop(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyTrueSeeing(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyTurnResistance(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyUltraVision(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyVampiricRegeneration(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyVision(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyVisualEffect(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnApplyWounding(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnEffectApplied(CNWSObject*, CGameEffect*, int32_t);
    int32_t OnEffectRemoved(CNWSObject*, CGameEffect*);
    int32_t OnRemoveAbilityDecrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveAbilityIncrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveACDecrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveACIncrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveArcaneSpellFailure(CNWSObject*, CGameEffect*);
    int32_t OnRemoveAreaOfEffect(CNWSObject*, CGameEffect*);
    int32_t OnRemoveAttackDecrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveAttackIncrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveBeam(CNWSObject*, CGameEffect*);
    int32_t OnRemoveBlindness(CNWSObject*, CGameEffect*);
    int32_t OnRemoveBonusFeat(CNWSObject*, CGameEffect*);
    int32_t OnRemoveBonusSpellOfLevel(CNWSObject*, CGameEffect*);
    int32_t OnRemoveConcealment(CNWSObject*, CGameEffect*);
    int32_t OnRemoveCurse(CNWSObject*, CGameEffect*);
    int32_t OnRemoveCutsceneGhost(CNWSObject*, CGameEffect*);
    int32_t OnRemoveDamageDecrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveDamageImmunityDecrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveDamageImmunityIncrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveDamageIncrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveDamageShield(CNWSObject*, CGameEffect*);
    int32_t OnRemoveDarkness(CNWSObject*, CGameEffect*);
    int32_t OnRemoveDisappearAppear(CNWSObject*, CGameEffect*);
    int32_t OnRemoveDisarm(CNWSObject*, CGameEffect*);
    int32_t OnRemoveEffectIcon(CNWSObject*, CGameEffect*);
    int32_t OnRemoveEffectImmunity(CNWSObject*, CGameEffect*);
    int32_t OnRemoveEnemyAttackBonus(CNWSObject*, CGameEffect*);
    int32_t OnRemoveEntangled(CNWSObject*, CGameEffect*);
    int32_t OnRemoveHasteInternal(CNWSObject*, CGameEffect*);
    int32_t OnRemoveHasteOrSlow(CNWSObject*, CGameEffect*);
    int32_t OnRemoveHitPointChangeWhenDying(CNWSObject*, CGameEffect*);
    int32_t OnRemoveInvisibility(CNWSObject*, CGameEffect*);
    int32_t OnRemoveItemProperty(CNWSObject*, CGameEffect*);
    int32_t OnRemoveKnockdown(CNWSObject*, CGameEffect*);
    int32_t OnRemoveLight(CNWSObject*, CGameEffect*);
    int32_t OnRemoveLimitMovementSpeed(CNWSObject*, CGameEffect*);
    int32_t OnRemoveMissChance(CNWSObject*, CGameEffect*);
    int32_t OnRemoveModifyNumAttacks(CNWSObject*, CGameEffect*);
    int32_t OnRemoveMovementSpeedDecrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveMovementSpeedIncrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveNegativeLevel(CNWSObject*, CGameEffect*);
    int32_t OnRemovePetrify(CNWSObject*, CGameEffect*);
    int32_t OnRemovePolymorph(CNWSObject*, CGameEffect*);
    int32_t OnRemoveRacialType(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSanctuary(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSavingThrowDecrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSavingThrowIncrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSeeInvisible(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSetAIState(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSetState(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSetStateInternal(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSilence(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSkillDecrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSkillIncrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSlowInternal(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSpecialWalkAnimation(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSpellFailure(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSpellImmunity(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSpellLevelAbsorption(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSpellResistanceDecrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSpellResistanceIncrease(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSummonCreature(CNWSObject*, CGameEffect*);
    int32_t OnRemoveSwarm(CNWSObject*, CGameEffect*);
    int32_t OnRemoveTaunt(CNWSObject*, CGameEffect*);
    int32_t OnRemoveTemporaryHitpoints(CNWSObject*, CGameEffect*);
    int32_t OnRemoveTimestop(CNWSObject*, CGameEffect*);
    int32_t OnRemoveTrueSeeing(CNWSObject*, CGameEffect*);
    int32_t OnRemoveTurnResistance(CNWSObject*, CGameEffect*);
    int32_t OnRemoveUltraVision(CNWSObject*, CGameEffect*);
    int32_t OnRemoveVision(CNWSObject*, CGameEffect*);
    int32_t OnRemoveVisualEffect(CNWSObject*, CGameEffect*);
    int32_t OnRemoveWounding(CNWSObject*, CGameEffect*);
    void SendFloatyEffect(uint32_t, uint32_t);
};

void CNWSEffectListHandler__CNWSEffectListHandlerDtor__0(CNWSEffectListHandler* thisPtr);
void CNWSEffectListHandler__InitializeEffects(CNWSEffectListHandler* thisPtr);
int32_t CNWSEffectListHandler__OnApplyAbilityDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyAbilityIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyACDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyACIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyAppear(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyArcaneSpellFailure(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyAreaOfEffect(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyAttackDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyAttackIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyBeam(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyBlindness(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyBlindnessInactive(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyBonusFeat(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyBonusSpellOfLevel(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyConcealment(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyCurse(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyCutsceneGhost(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyCutsceneImmobile(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDamage(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDamageDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDamageImmunityDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDamageImmunityIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDamageIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDamageReduction(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDamageResistance(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDamageShield(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDarkness(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDeaf(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDeath(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDefensiveStance(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDisappear(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDisappearAppear(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDisarm(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDisease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDispelAllMagic(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyDispelBestMagic(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyEffectIcon(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyEffectImmunity(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyEnemyAttackBonus(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyEntangled(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyHasteInternal(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyHasteOrSlow(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyHeal(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyHitPointChangeWhenDying(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyInvisibility(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyItemProperty(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyKnockdown(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyLight(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyLimitMovementSpeed(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyLink(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyMissChance(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyModifyNumAttacks(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyMovementSpeedDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyMovementSpeedIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyNegativeLevel(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyPetrify(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyPoison(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyPolymorph(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyRacialType(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyRegenerate(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyResurrection(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySanctuary(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySavingThrowDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySavingThrowIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySeeInvisible(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySetAIState(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySetState(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySetStateInternal(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySilence(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySkillDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySkillIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySlowInternal(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySpecialWalkAnimation(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySpellFailure(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySpellImmunity(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySpellLevelAbsorption(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySpellResistanceDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySpellResistanceIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySummonCreature(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplySwarm(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyTaunt(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyTemporaryHitpoints(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyTimestop(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyTrueSeeing(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyTurnResistance(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyUltraVision(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyVampiricRegeneration(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyVision(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyVisualEffect(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnApplyWounding(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnEffectApplied(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*, int32_t);
int32_t CNWSEffectListHandler__OnEffectRemoved(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveAbilityDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveAbilityIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveACDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveACIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveArcaneSpellFailure(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveAreaOfEffect(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveAttackDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveAttackIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveBeam(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveBlindness(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveBonusFeat(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveBonusSpellOfLevel(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveConcealment(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveCurse(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveCutsceneGhost(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveDamageDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveDamageImmunityDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveDamageImmunityIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveDamageIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveDamageShield(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveDarkness(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveDisappearAppear(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveDisarm(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveEffectIcon(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveEffectImmunity(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveEnemyAttackBonus(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveEntangled(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveHasteInternal(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveHasteOrSlow(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveHitPointChangeWhenDying(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveInvisibility(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveItemProperty(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveKnockdown(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveLight(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveLimitMovementSpeed(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveMissChance(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveModifyNumAttacks(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveMovementSpeedDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveMovementSpeedIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveNegativeLevel(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemovePetrify(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemovePolymorph(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveRacialType(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSanctuary(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSavingThrowDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSavingThrowIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSeeInvisible(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSetAIState(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSetState(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSetStateInternal(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSilence(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSkillDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSkillIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSlowInternal(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSpecialWalkAnimation(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSpellFailure(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSpellImmunity(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSpellLevelAbsorption(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSpellResistanceDecrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSpellResistanceIncrease(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSummonCreature(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveSwarm(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveTaunt(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveTemporaryHitpoints(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveTimestop(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveTrueSeeing(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveTurnResistance(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveUltraVision(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveVision(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveVisualEffect(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
int32_t CNWSEffectListHandler__OnRemoveWounding(CNWSEffectListHandler* thisPtr, CNWSObject*, CGameEffect*);
void CNWSEffectListHandler__SendFloatyEffect(CNWSEffectListHandler* thisPtr, uint32_t, uint32_t);

}

}

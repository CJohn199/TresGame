#include "TresEnemyXIIILDPawnBase.h"

ATresEnemyXIIILDPawnBase::ATresEnemyXIIILDPawnBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fInvincibleTime = 0.50f;
    this->m_Player = NULL;
    this->m_BattleAIPoint = NULL;
}


#include "TresItemMognetMedal.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"

ATresItemMognetMedal::ATresItemMognetMedal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TresRoot"));
    this->MyParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComp"));
    this->m_pAttachPawn = NULL;
}


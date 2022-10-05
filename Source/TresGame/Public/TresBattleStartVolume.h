#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityControlVolume.h"
#include "TresBattleStartVolume.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API ATresBattleStartVolume : public ATresLevelEntityControlVolume {
    GENERATED_BODY()
public:
    ATresBattleStartVolume(const FObjectInitializer& ObjectInitializer);
};


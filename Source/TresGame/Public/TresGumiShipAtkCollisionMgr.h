#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCollisionMgr.h"
#include "TresGumiShipAtkCollisionMgr.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipAtkCollisionMgr : public UTresGumiShipCollisionMgr {
    GENERATED_BODY()
public:
    UTresGumiShipAtkCollisionMgr();
};


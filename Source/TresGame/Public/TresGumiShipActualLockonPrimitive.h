#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGiveInfomationLockonPrimitive.h"
#include "TresGumiShipActualLockonPrimitive.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipActualLockonPrimitive : public UTresGumiShipGiveInfomationLockonPrimitive {
    GENERATED_BODY()
public:
    UTresGumiShipActualLockonPrimitive();
};


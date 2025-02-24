#pragma once
#include "CoreMinimal.h"
#include "GUMI_SHIP_TREASURE_STATE.generated.h"

UENUM(BlueprintType)
enum class GUMI_SHIP_TREASURE_STATE : uint8 {
    TREASURE_STATE_IDLEING,
    TREASURE_STATE_ST_EVENT,
    TREASURE_STATE_ST_RAILSLID,
    TREASURE_STATE_ST_SUCCESS,
    TREASURE_STATE_ST_FAILURE,
    TREASURE_STATE_CLOSE,
    TREASURE_STATE_MAX UMETA(Hidden),
};


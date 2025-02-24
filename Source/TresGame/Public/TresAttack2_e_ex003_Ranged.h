#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionRanged.h"
#include "TresAttack2_e_ex003_Ranged.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack2_e_ex003_Ranged : public UTresAttackDefinitionRanged {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_shotInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShotAngle;
    
public:
    UTresAttack2_e_ex003_Ranged();
};


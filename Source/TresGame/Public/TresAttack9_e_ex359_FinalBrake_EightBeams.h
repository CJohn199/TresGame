#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack9_e_ex359_FinalBrake_EightBeams.generated.h"

class ATresProjectile_e_ex359_BeamSpawner;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack9_e_ex359_FinalBrake_EightBeams : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex359_BeamSpawner> m_ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectile_e_ex359_BeamSpawner* m_Projectile;
    
    UTresAttack9_e_ex359_FinalBrake_EightBeams();
};


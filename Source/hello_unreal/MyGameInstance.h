// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class HELLO_UNREAL_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
// ;아니고 :으로 입력
public:
	void Init() override;
		int32 Damage(int32 MyDamage, int32 EmemyHP);
		int32 UseSkill(int32 Mana);
		//반환하는 type 함수명(필요로하는 인자, 인자, 인자, 인자);
		FString SetAttack(int32 Attack, FString Scissors, FString Rock, FString Papper);

};

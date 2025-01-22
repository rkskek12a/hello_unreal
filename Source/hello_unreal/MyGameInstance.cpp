// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

void UMyGameInstance::Init()
{

	//int32 ValueA = 1;
	//int32 ValueB = 2;
	//float result = 0;

	//result = ((float)ValueA + ValueB) / 2;

	//UE_LOG(LogTemp, Warning, TEXT("%f"), result);

	//int32 bResult = 1;

	//if ((bool)bResult);
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("%f"), result);
	//}

	//반복문


	/*while (ValueA <= 10)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), ValueA);
		ValueA++;
	}*/



	//do 
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("%d"), ValueA);
	//	ValueA++;
	//} while (ValueA <= 10);

	//int32 ValueA = 11;

	//for (int32 i = 0; i < 5; i++)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("%d"), ValueA);
	//}

	//정수 n을 입력받은 뒤, 구구단 n단을 출력하는 프로그램을 작성

	/*int32 ValueA = 2;
	int32 result = 0;

	for (int32 i = 1; i < 10; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), result);
		result = i * ValueA;
	}*/


	//int32 result = 0;

	//for (int32 i = 1; i < 10; i++)
	//{
	//	for (int32 ValueA = 1; ValueA < 10; ValueA++)
	//	{
	//		UE_LOG(LogTemp, Warning, TEXT("%d"), result);
	//		result = i * ValueA;
	//	}
	//}




	/*for (int32 x = 1; x <= 5; x++)
	{*/


	//for (int32 y = 1; y <= 5; y++)
	//{
	   // while (y < 5)
	   // {
	   //	 Line.Append(TEXT(" "));
	   //	 UE_LOG(LogTemp, Warning, TEXT("%s"), *Line);
	   //	 *Line = 5 - y;
	   // }
	   //while (y <5)

	   // Line.Append(TEXT("*"));
	   // UE_LOG(LogTemp, Warning, TEXT("%s"), *Line);
	   // *Line = 2 * y - 1;
	//}

   //int TopLine = 5;

   // for (int32 i = 1; i <= 5; i++)
   // {
   //	 FString Line ="";
   //	 for (int32 j = 0; j < TopLine - i; j++)
   //	 {
   //		 Line.Append(" ");
   //	 }
   //	 for (int32 a = 0; 1 < 2 * a - 1; a++)
   //	 {
   //		 Line.Append("+");
   //	 }
   //	 UE_LOG(LogTemp, Warning, TEXT("%s"),*Line);
   // }

   /* for(int i = 0; i <= 5; i++)
	{

	}*/

	/*}*/



	/*FString Line;


	for (int32 i = 0; i <= 5; i++)
	{
		Line.Append(TEXT(" "));

		UE_LOG(LogTemp, Warning, TEXT("%s"),*Line);
		i++
	}*/



	////처음 넣은 값 ~ 뒤에 넣은 값까지의 점수중 랜덤으로 
	//int32 Enemy = FMath::RandRange(0, 2);
	//int32 MyValue = FMath::RandRange(0, 2);

	//// 0은 가위
	//// 1은 바위
	//// 2는 보

	//FString EnemyAttack = "";
	//FString MyValue = "";



	//if ((Enemy == 0 && MyValue == 0) || (Enemy == 1 && MyValue == 1) || (Enemy == 2 && MyValue == 2))
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("비겼다!"));

	//	switch (MyValue)
	//	{
	//	case 0:
	//		UE_LOG(LogTemp, Warning, TEXT("내가 낸 패: 가위,"));
	//		break;
	//	case 1:
	//		UE_LOG(LogTemp, Warning, TEXT("내가 낸 패: 바위,"));
	//		break;
	//	case 2:
	//		UE_LOG(LogTemp, Warning, TEXT("내가 낸 패: 보,"));
	//		break;
	//	}

	//	switch (Enemy)
	//	{
	//	case 0:
	//		UE_LOG(LogTemp, Warning, TEXT("상대가 낸 패: 가위"));
	//		break;
	//	case 1:
	//		UE_LOG(LogTemp, Warning, TEXT("상대가 낸 패: 바위"));
	//		break;
	//	case 2:
	//		UE_LOG(LogTemp, Warning, TEXT("상대가 낸 패: 보"));
	//		break;
	//	}
	//}
	//else if ((Enemy == 2 && MyValue == 0) || (Enemy == 0 && MyValue == 1) || (Enemy == 1 && MyValue == 2))
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("이겼다!"));

	//	switch (MyValue)
	//	{
	//	case 0:
	//		UE_LOG(LogTemp, Warning, TEXT("내가 낸 패: 가위,"));
	//		break;
	//	case 1:
	//		UE_LOG(LogTemp, Warning, TEXT("내가 낸 패: 바위,"));
	//		break;
	//	case 2:
	//		UE_LOG(LogTemp, Warning, TEXT("내가 낸 패: 보,"));
	//		break;
	//	}

	//	FString Line = "";
	//	switch (Enemy)
	//	{
	//	case 0:
	//		UE_LOG(LogTemp, Warning, TEXT("상대가 낸 패: 가위"), *Line);
	//		break;
	//	case 1:
	//		UE_LOG(LogTemp, Warning, TEXT("상대가 낸 패: 바위"), *Line);
	//		break;
	//	case 2:
	//		UE_LOG(LogTemp, Warning, TEXT("상대가 낸 패: 보"), *Line);
	//		break;
	//	}
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("졌다!"));

	//	switch (MyValue)
	//	{
	//	case 0:
	//		UE_LOG(LogTemp, Warning, TEXT("내가 낸 패: 가위,"));
	//		break;
	//	case 1:
	//		UE_LOG(LogTemp, Warning, TEXT("내가 낸 패: 바위,"));
	//		break;
	//	case 2:
	//		UE_LOG(LogTemp, Warning, TEXT("내가 낸 패: 보,"));
	//		break;
	//	}

	//	FString Line = "";
	//	switch (Enemy)
	//	{
	//	case 0:
	//		UE_LOG(LogTemp, Warning, TEXT("상대가 낸 패: 가위"), *Line);
	//		break;
	//	case 1:
	//		UE_LOG(LogTemp, Warning, TEXT("상대가 낸 패: 바위"), *Line);
	//		break;
	//	case 2:
	//		UE_LOG(LogTemp, Warning, TEXT("상대가 낸 패: 보"), *Line);
	//		break;
	//	}
	//}

	int32 MyDamageInput = 10;
	int32 EnemyHPInput = 15;
	int32 MyMana = 20;
	//마나가 3이 소비된다
	//return으로 받아서
	//출력
	//마나가 --남았습니다.


	int32 Enemy = FMath::RandRange(0, 2); //0~2
	int32 MyValue = FMath::RandRange(0, 2);

	FString Win = TEXT("승리");
	FString Loss = TEXT("패배");
	FString Draw = TEXT("비겼다");
	FString Scissors = TEXT("가위");
	FString Rock = TEXT("바위");
	FString Papper = TEXT("보");

	FString EnemyAttack = "";
	FString MyAttack = "";

	//랜덤으로 생성 된 숫자를 문자로 변환해보자
	MyAttack = SetAttack(MyValue, Scissors, Rock, Papper);
	EnemyAttack = SetAttack(Enemy, Scissors, Rock, Papper);


	if (MyValue == Enemy)
	{
		UE_LOG(LogTemp, Warning, TEXT("내가 낸 패 : %s, 적이 낸 패 : %s %s"), *MyAttack, *EnemyAttack, *Draw);
	}
	else if (MyValue == 0 && Enemy == 1)
	{
		UE_LOG(LogTemp, Warning, TEXT("내가 낸 패 : %s, 적이 낸 패 : %s %s"), *MyAttack, *EnemyAttack, *Loss);
	}
	else if (MyValue == 0 && Enemy == 2)
	{
		UE_LOG(LogTemp, Warning, TEXT("내가 낸 패 : %s, 적이 낸 패 : %s %s"), *MyAttack, *EnemyAttack, *Win);
	}
	else if (MyValue == 1 && Enemy == 2)
	{
		UE_LOG(LogTemp, Warning, TEXT("내가 낸 패 : %s, 적이 낸 패 : %s %s"), *MyAttack, *EnemyAttack, *Loss);
	}
	else if (MyValue == 1 && Enemy == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("내가 낸 패 : %s, 적이 낸 패 : %s %s"), *MyAttack, *EnemyAttack, *Win);
	}
	else if (MyValue == 2 && Enemy == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("내가 낸 패 : %s, 적이 낸 패 : %s %s"), *MyAttack, *EnemyAttack, *Loss);
	}
	else if (MyValue == 2 && Enemy == 1)
	{
		UE_LOG(LogTemp, Warning, TEXT("내가 낸 패 : %s, 적이 낸 패 : %s %s"), *MyAttack, *EnemyAttack, *Win);
	}
}

int32 UMyGameInstance::Damage(int32 MyDamage, int32 EmemyHP)
{
	return EmemyHP - MyDamage;
}
int32 UMyGameInstance::UseSkill(int32 Mana)
{
	int32 Result = Mana - 3;
	UE_LOG(LogTemp, Warning, TEXT("마나가 %d만큼 남았습니다."), Result);
	return Result;
}

FString UMyGameInstance::SetAttack(int32 Attack, FString Scissors, FString Rock, FString Papper)
{
	FString Result;

	switch (Attack) // 0 ~ 2
	{
	case 0:
		Result = Scissors;
		break;
	case 1:
		Result = Rock;
		break;
	case 2:
		Result = Papper;
		break;
	}

	return Result;
}



	/* if (MyValue = 0)
	 {
		 if (Enemy = 0)
		 {
			 UE_LOG(LogTemp, Warning, TEXT("비겼다!"));
		 }
		 else if (Enemy = 1)
		 {
			 UE_LOG(LogTemp, Warning, TEXT("졌다!"));
		 }
		 else
		 {
			 UE_LOG(LogTemp, Warning, TEXT("이겼다!"));
		 }
	 }
	 else if (MyValue = 1)
	 {
		 if (Enemy = 0)
		 {
			 UE_LOG(LogTemp, Warning, TEXT("이겼다!"));
		 }
		 else if (Enemy = 1)
		 {
			 UE_LOG(LogTemp, Warning, TEXT("비겼다!"));
		 }
		 else
		 {
			 UE_LOG(LogTemp, Warning, TEXT("졌다!"));
		 }
	 }
	 else 
	 {
		 if (Enemy = 0)
		 {
			 UE_LOG(LogTemp, Warning, TEXT("졌다!"));
		 }
		 else if (Enemy = 1)
		 {
			 UE_LOG(LogTemp, Warning, TEXT("이겼다!"));
		 }
		 else
		 {
			 UE_LOG(LogTemp, Warning, TEXT("비겼다!"));
		 }
	 }*/



//}

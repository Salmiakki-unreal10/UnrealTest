#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <string>
#include"Day0521-2.h"
#include "practiceA.h"
using namespace std;

int StateMachine(int currentstate, int state, char t)								//상태표시 함수 인자로 (현재상태, 추가할 상태, 수행할 작업)을 받는다.
{
	std::string statelist = "";						
	std::string statenames[] = { "대기", "점프", "공격", "무적" };					//상태 문자
	const int numofstate = 4;						//상태의 최대 갯수
	int select = state;								//선택된 상태
	int pstateactive = currentstate;				//상태활성 체크변수
	int player = pstateactive >>(numofstate + 1);		//플레이어 보유 상태 변수		//초기화 시 최대 상태 갯수+1 만큼 오른쪽으로 쉬프트
	char toggle = t;								//수행할 작업

	statelist = "";
	player |= (1 << (select - 1));					//플레이어 상태 변수에 선택한 상태의 비트를 추가한다
	if (toggle == 't')								//토글 키를 파라미터로 입력받을 시,
	{
		pstateactive ^= (1 << (select - 1));		//선택한 상태의 비트를 반전시킨다.
	}
	for (int i = 0; i < numofstate; i++)			//가능한 모든 상태를 체크
	{
		if ((player & (1 << i)) != 0)				//i번째 상태를 갖고 있고,
		{
			char bactive = 'X';						
			if ((pstateactive & 1 << i)  & player)	//해당 상태가 활성화가 돼 있다면 '0'를 저장
			{
				bactive = 'O';						

			}

			statelist += statenames[i] + " : [" + ("%c", bactive) + "], ";
			//보유한 상태 및 활성화 여부 출력
		}
	}
	printf("%s", statelist.c_str());
	//printf("%d", pstateactive);
	pstateactive |= (player <<(numofstate+1));	//상태활성 변수에 플레이어 보유상태 변수를 최대 상태 갯수+1 만큼 왼쪽으로 쉬프트한 후 정보를 추가
	return pstateactive;						//상태활성 변수를 리턴
}

int DiceRoll(int eyes) 
{
	int RandomNumber = rand() % eyes  +1;
	return RandomNumber;
}

int Bet(int threshold, bool ai)
{
	int enterbet;
	bool IsAI = ai;
	do
	{
		if (IsAI !=true)
		{
			printf("배팅 금액을 입력해주세요 : \n(최대 [%d]원)\t", threshold);
			cin >> enterbet;
		}
		else
		{
			enterbet = rand() % 10 + 1;

		}
	} while (threshold < enterbet|| enterbet<0);

	if (IsAI == false)
	{
		printf("\n당신은 [%d]원 만큼 배팅했습니다.\n", enterbet);
	}
	else
	{
		printf("\nCPU가 [%d]원 만큼 배팅했습니다.\n", enterbet);
		
	}
	return enterbet;
}

int main()
{
	/*int state;
	int currentstate=0;
	char t;
	while (true)
	{
		cin >> state >> t;
		currentstate=StateMachine(currentstate, state, t);
	}*/
	unsigned int Seed = (unsigned int)time(0);
	srand(Seed);
	const int InitialMoney = 10000;
	int PlayerMoney = InitialMoney;
	int CPUMoney = InitialMoney;
	int PlayerDie = DiceRoll(6);
	int CPUDie = DiceRoll(6);
	int PlayerDie2 = 0;
	int CPUDie2 = 0;

	while (CPUMoney > 0 && PlayerMoney > 0)
	{
		PlayerDie2+= PlayerDie;
		CPUDie2+= CPUDie;
		int Stake = 0;
		int Proceed = 0;
		int MaxBet = PlayerMoney > CPUMoney ? CPUMoney : PlayerMoney;
		printf("[%d]\t\t\t\t[%d]\n", PlayerDie, CPUDie);
		if (PlayerDie > CPUDie && Proceed !=1)
		{
			printf("플레이어 승리, CPU가 배팅을 합니다\n");
			Stake = Bet(MaxBet, true);
			
		}
		else if (PlayerDie < CPUDie && Proceed != 1)
		{
			printf("컴퓨터의 승리\n");
			Stake = Bet(MaxBet, false);

		}
		else
		{
			printf("무승부\n");
			Proceed--;
		}
		Proceed++;
		PlayerMoney -= Stake;
		CPUMoney -= Stake;
		PlayerDie2 = DiceRoll(6);
		CPUDie2 = DiceRoll(6);

		if (PlayerDie > CPUDie && Proceed >0)
		{
			PlayerMoney += Stake * 2;
			CPUMoney -= Stake;
			printf("*플레이어의 최종승리!*\n");
			PlayerDie2 = 0;
			CPUDie2 = 0;
			Proceed = 0;


		}
		else if (PlayerDie < CPUDie && Proceed >0)
		{
			CPUMoney += Stake * 2;
			PlayerMoney -= Stake;
			printf("*컴퓨터의 최종승리!*\n");
			PlayerDie2 = 0;
			CPUDie2 = 0;
			Proceed = 0;


		}
		Stake = 0;
		
		
	}

		

	




}


#include <iostream>
#include <stdio.h>
#include <time.h>
#include <string>
#include "PracticeB.h"
using namespace std;



int Bet(int threshold, bool ai)		//최대값과 ai 여부를 입력받고 배팅 금액을 리턴하는 함수
{
	int enterbet;
	do
	{
		if (ai != true)
		{
			printf("배팅 금액을 입력해주세요(최대 [%d]원) :\t", threshold);
			cin >> enterbet;
		}
		else
		{
			enterbet = rand() % threshold + 1;

		}
	} while (threshold < enterbet || enterbet < 0);

	if (ai == false)
	{
		printf("\n당신은 [%d]원 만큼 배팅했습니다.\n", enterbet);
	}
	else
	{
		printf("\nCPU가 [%d]원 만큼 배팅했습니다.\n", enterbet);

	}
	return enterbet;
}

int DiceRoll(int eyes)				//주사위를 굴리는 함수, 눈의 수를 입력받고 1부터 눈의 수 사이의 랜덤한 숫자를 리턴한다.
{
	int RandomNumber = rand() % eyes + 1;
	return RandomNumber;
}

void Kontinue(void)				//계속하기 함수, 플레이어가 결과를 확인하고 다음 라운드로 넘어갈 때까지 대기하는 함수
{
	char a;
	printf("\n\n\n다시 주사위를 굴리려면 아무 키나 입력하세요\n");
	cin >> a;
}

void ShowUI(int p, int o, int round, bool isMoney)				//플레이어와 cpu의 돈/주사위눈을 보여주는 함수, 플레이어와 cpu의 돈, 불린타입을 입력받고 출력한다.
{
	if (isMoney == true)
	{
		printf("Playermoney : %d\t\t\t\tCPUmoney : %d\n", p, o);
	}
	else
	{
		printf("\t\t\tround <%d>\n플레이어 : [%d]\t\t\t\t\tcpu : [%d]\n\n", round + 1, p, o);
	}
}

void DiceRollGameStart()
{
	const int INITIALMONEY = 10000;
	int cpumoney = INITIALMONEY;
	int playermoney = INITIALMONEY;
	int cpudie = DiceRoll(6);
	int playerdie = DiceRoll(6);
	int stake = 0;
	bool playerwin = false;
	bool draw = false;
	printf("주사위 게임에 오신 것을 환영합니다!\n\n");
	while (cpumoney > 0 && playermoney > 0)
	{
		int playerdie2 = 0;
		int cpudie2 = 0;
		int round = 0;
		ShowUI(playermoney, cpumoney, 0, true);
		while (cpumoney > 0 && playermoney > 0 && round <2)
		{
			//printf("\nmoney : %d\n", playermoney);
			
			do
			{
				cpudie = DiceRoll(6);
				cpudie2 += cpudie;
				playerdie = DiceRoll(6);
				playerdie2 += playerdie;
				//printf("\t\t\tround <%d>\n플레이어 : [%d]\t\t\t\t\tcpu : [%d]\n\n", round + 1, playerdie2, cpudie2);
				ShowUI(playerdie2, cpudie2, round, false);
				if (playerdie2 > cpudie2)
				{
					printf("첫 라운드 플레이어 승리!\n");
					playerwin = true;
					draw = false;
					round++;
					break;
				}
				else if (playerdie2 < cpudie2)
				{
					printf("첫 라운드 cpu 승리!\n");
					playerwin = false;
					draw = false;
					round++;
					break;
				}
				else
				{
					printf("무승부!\n");
					if (round <= 1)
					{
						Kontinue();
					}
					playerdie2 = 0;
					cpudie2 = 0;
					playerwin = false;
					round = 0;
					draw = true;


				}
			}while (draw == true && round < 2);
			
			while (stake == 0)
			{
				ShowUI(playermoney, cpumoney, 0, true);

				if (playerwin == false)
				{
					stake =Bet(playermoney < cpumoney ? playermoney : cpumoney, false);
					printf("%d 원 배팅.\n", stake);
					
				}
				else
				{
					stake =Bet(playermoney < cpumoney ? playermoney : cpumoney, true);
					printf("\ncpu: %d 원 배팅.\n", stake);

				}
				playermoney -= stake;
				cpumoney -= stake;

			}
			if (round > 1)
			{

				if (playerwin == true)
				{
					printf("***플레이어 최종 승리!***\n\n");
					playermoney += stake * 2;
				}
				else if (draw == true)
				{
					cpumoney += stake;
					playermoney += stake;
				}
				else
				{
					printf("***cpu 최종 승리!***\n\n");
					cpumoney += stake * 2;
				}
				//printf("playermoney : %d\t\t\t\tcpumoney : %d\n", playermoney, cpumoney);
				ShowUI(playermoney, cpumoney, 0, true);
				round = 0;
				stake = 0;
				playerdie2 = 0;
				cpudie2 = 0;
			}
			Kontinue();

		}
	}
	if (playermoney <= 0)
	{
		printf("당신은 파산했습니다...\n");
	}
	else
	{
		printf("당신은 컴퓨터를 이겼습니다!\n");
	}
}


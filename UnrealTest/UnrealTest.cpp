#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <string>
using namespace std;



int main()
{
	////가위바위보 게임
	//// -3선승제
	//// -enum 활용
	//srand(time(0));
	//int wincount = 0;
	//for (int i = 0; i <3; )
	//{

	//	enum RSP {
	//		Rock = 1,
	//		Scissors = 1 << 1,
	//		Paper = 1 << 2
	//	};


	//	int RandomNumber = rand() % 3 + 1;
	//	int AI = RandomNumber;
	//	switch (AI)
	//	{
	//	case 1:
	//		AI = Rock;
	//		break;
	//	case 2:
	//		AI = Scissors;
	//		break;
	//	case 3:
	//		AI = Paper;
	//		break;
	//	}

	//	int input = 0;
	//	int Player = 0;
	//	printf("1)바위 , 2)가위, 3)보");
	//	std::cin >> input;

	//	switch (input)
	//	{
	//	case 1:
	//		Player = Rock;
	//		break;
	//	case 2:
	//		Player = Scissors;
	//		break;
	//	case 3:
	//		Player = Paper;
	//		break;
	//	}
	//	if (Player & AI) {
	//		printf("비김\n");
	//	}
	//	else
	//	{
	//		if (Player == Rock && AI == Scissors)
	//		{
	//			printf("플레이어 승\n");
	//			wincount++;
	//		}
	//		else if (Player == Scissors && AI == Paper)
	//		{
	//			printf("플레이어 승\n");
	//			wincount++;

	//		}
	//		else if (Player == Paper && AI == Rock)
	//		{
	//			printf("플레이어 승\n");
	//			wincount++;

	//		}
	//		
	//		else
	//		{
	//			printf("플레이어 패배\n");
	//			i++;

	//		}

	//	}
	//	printf("%d  %d\n", Player, AI);
	//	if (wincount > 2)
	//	{
	//		printf("컴퓨터를 이겼다!");
	//		break;
	//	}
	//}




	//

	//// 하이 로우
	//// 컴퓨터가 1-10사이의 임의의 숫자를 선택하고, 사용자가 맞출 때까지 이력을 받아 더 높게 더 낮게 등의 힌트를 줌
	//// 5번 안에 맞춰야 함
	////
	//int Random = rand() % 10 + 1;
	//int input = 0;
	//int chances = 5;
	//while (chances >0)
	//{
	//	std::cin >> input;
	//	while (true)
	//	{
	//		printf("남은 기회: %d\n", chances-1);
	//		if (input > Random)
	//		{
	//			printf("LOW\n");
	//			chances--;
	//			break;
	//		}
	//		else if (input < Random)
	//		{
	//			printf("HIGH\n");
	//			chances--;
	//			break;
	//		}
	//		else
	//		{
	//			printf("축하합니다 정답은 %d 였습니다!", Random);
	//			break;
	//		}
	//	}
	//}
	//printf("패배");

	//비트플래그를 이용한 캐릭터 상태 변환 구현하기
	/*캐릭터의 상태는 대기, 점프, 공격, 무적 4가지가 존재
		다음 작업을 수행하고 현재 상태 출력하기
		플레이어의 상태를 대기로 설정
		점프 상태 추가
		공격 상태 추가
		대기 상태 해제
		무적 상태 추가
		무적 상태 토글(XOR 사용)
		현재 상태를 출력할 때는 다음과 같은 양식을 따를 것
		대기 : [O] , 점프 : [O] , 공격 : [X] , 무적 : [O]*/

	enum pstate {
		idle = 1,
		jump = 1 << 1,
		attack = 1 << 2,
		uber= 1 <<3
	};
	enum pstateActiveCheck {
		bidle = 1,
		bjump = 1 << 1,
		battack = 1 << 2,
		buber= 1 <<3
	};
	std::string statelist = "";
	std::string statenames[] = { "대기", "점프", "공격", "무적"};
	const int numofstate = 4;
	int select = 0;
	//int mask = 1 << (select - 1);
	int player = 0;
	int pstateactive = 0;
	/*for (int i = 0; i < numofstate; i++)
	{
		if ((player & 1 << i) != 0)
		{
			statelist += statenames[i];
			statelist += "";
		}
	}
	printf("%s", statelist.c_str());*/
	//bool bactive = 0;
	char toggle;
	while (true)
	{
		cin >> select >> toggle;
		statelist = "";
		player = player | 1 << (select - 1);
		toggle == 't' ? pstateactive = (pstateactive | 1 << (select - 1)) :0;
		for (int i = 0; i < numofstate; i++)
		{
			if ((player & 1 << i) != 0)
			{
				char bactive = 'X';
				if ((pstateactive & 1 << i) & player)
				{
					bactive = 'O';	
					pstateactive = pstateactive | (1 << (select - 1))^1;

				}

				statelist += statenames[i]+" : [" + ("%c", bactive) +"], ";
				//
			}
		}
		printf("%s", statelist.c_str());
		//printf("%d", player);
		//break;
	}


}




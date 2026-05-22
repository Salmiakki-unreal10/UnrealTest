#include <iostream>
#include <stdio.h>
#include <time.h>
#include <string>
#include "PracticeA.h"
using namespace std;

int StateManager(int currentstate, int state, char t)								//상태표시 함수 인자로 (현재상태, 추가할 상태, 수행할 작업)을 받는다.
{
	std::string statelist = "";
	std::string statenames[] = { "대기", "점프", "공격", "무적" };					//상태 문자
	const int numofstate = 4;						//상태의 최대 갯수
	int select = state;								//선택된 상태
	int pstateactive = currentstate;				//상태활성 체크변수
	int player = pstateactive >> (numofstate + 1);		//플레이어 보유 상태 변수		//초기화 시 최대 상태 갯수+1 만큼 오른쪽으로 쉬프트
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
			if ((pstateactive & 1 << i) & player)	//해당 상태가 활성화가 돼 있다면 '0'를 저장
			{
				bactive = 'O';

			}

			statelist += statenames[i] + " : [" + ("%c", bactive) + "], ";
			//보유한 상태 및 활성화 여부 출력
		}
	}
	printf("%s", statelist.c_str());
	//printf("%d", pstateactive);
	pstateactive |= (player << (numofstate + 1));	//상태활성 변수에 플레이어 보유상태 변수를 최대 상태 갯수+1 만큼 왼쪽으로 쉬프트한 후 정보를 추가
	return pstateactive;						//상태활성 변수를 리턴
}

void RunStateManager()			
{
	srand(time(0));
	int state;
	int currentstate=0;
	char t;
	while (true)
	{
		cin >> state >> t;
		currentstate=StateManager(currentstate, state, t);
	}

}

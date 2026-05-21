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

		//enum pstate {
		//	idle = 1,
		//	jump = 1 << 1,
		//	attack = 1 << 2,
		//	uber= 1 <<3
		//};
		//std::string statelist = "";
		//std::string statenames[] = { "대기", "점프", "공격", "무적"};
		//const int numofstate = 4;
		//int select = 0;
		//int player = 0;
		//int pstateactive = 0;
		//char toggle;
		//while (true)
		//{
		//	cin >> select >> toggle;
		//	statelist = "";
		//	player |= 1 << (select - 1);
		//	if (toggle == 't')
		//	{
		//		pstateactive ^=(1 << (select - 1));
		//	}
		//	for (int i = 0; i < numofstate; i++)
		//	{
		//		if ((player & 1 << i) != 0)
		//		{
		//			char bactive = 'X';
		//			if ((pstateactive & 1 << i) & player)
		//			{
		//				bactive = 'O';	

		//			}

		//			statelist += statenames[i]+" : [" + ("%c", bactive) +"], ";
		//			//
		//		}
		//	}
		//	printf("%s", statelist.c_str());
		//}
		//enum PlayerState
		//{
		//	None	= 0,
		//	Idle	= 1 << 0,	// 0001
		//	Jump	= 1 << 1,	// 0010
		//	Attack	= 1 << 2,	// 0100
		//	Uber	= 1 << 3,	// 1000
		//};

		//int State = None;
		//State |= Idle;

		//printf("\n현재 상태\n");
		//printf("대기 : [%c] , 점프 : [%c] , 공격 : [%c] , 무적 : [%c]\n", 
		//	State & Idle ? 'O' : 'X',
		//	State & Jump ? 'O' : 'X', 
		//	State & Attack ? 'O' : 'X', 
		//	State & Uber ? 'O' : 'X');
		//State |= Jump;
		//printf("대기 : [%c] , 점프 : [%c] , 공격 : [%c] , 무적 : [%c]\n", 
		//	State & Idle ? 'O' : 'X',
		//	State & Jump ? 'O' : 'X', 
		//	State & Attack ? 'O' : 'X', 
		//	State & Uber ? 'O' : 'X');
		//State |= Attack;
		//printf("대기 : [%c] , 점프 : [%c] , 공격 : [%c] , 무적 : [%c]\n", 
		//	State & Idle ? 'O' : 'X',
		//	State & Jump ? 'O' : 'X', 
		//	State & Attack ? 'O' : 'X', 
		//	State & Uber ? 'O' : 'X');
		//State &= ~Idle;
		//printf("대기 : [%c] , 점프 : [%c] , 공격 : [%c] , 무적 : [%c]\n", 
		//	State & Idle ? 'O' : 'X',
		//	State & Jump ? 'O' : 'X', 
		//	State & Attack ? 'O' : 'X', 
		//	State & Uber ? 'O' : 'X');
		//State |= Uber;
		//printf("대기 : [%c] , 점프 : [%c] , 공격 : [%c] , 무적 : [%c]\n", 
		//	State & Idle ? 'O' : 'X',
		//	State & Jump ? 'O' : 'X', 
		//	State & Attack ? 'O' : 'X', 
		//	State & Uber ? 'O' : 'X');
		//State ^= Uber;
		//printf("대기 : [%c] , 점프 : [%c] , 공격 : [%c] , 무적 : [%c]\n", 
		//	State & Idle ? 'O' : 'X',
		//	State & Jump ? 'O' : 'X', 
		//	State & Attack ? 'O' : 'X', 
		//	State & Uber ? 'O' : 'X');#pragma once



//const int InitialMoney = 10000;
	//unsigned int Seed = (unsigned int)time(0);
	//Seed = 0;

	//int Bet = 0;						//배팅 금액
	//int turn = 1;
	//int MaxBet;
	//bool PlayerLost = false;			//이전판의 승자 기록용 bool. p1 졌으면 true, 이겼으면 false
	//int PlayerMoney = InitialMoney;		//p1 소유 금액
	//int ComMoney = InitialMoney;		//cpu 소유 금액
	//int round = 1;
	//srand(Seed);		//시드값 초기화

	//while (PlayerMoney > 0 && ComMoney >0)
	//{
	//	//턴 상황 표시
	//	printf("\n--------------- Turn %d --------------\n", turn);
	//	printf("플레이어 금액 : %d			컴퓨터 금액 : %d\n", PlayerMoney, ComMoney);

	//	//1차 주사위
	//	const int DiceSize = 6;
	//	int PlayerDie = 0;					//p1 첫번째 주사위 값
	//	int ComDie = 0;						//cpu 첫번째 주사위 값
	//	PlayerDie = rand() % DiceSize + 1;
	//	ComDie = rand() % DiceSize + 1;
	//	printf("\n%d\n", PlayerDie);
	//	printf("\n%d\n", ComDie);

	//	//배팅
	//	if (PlayerMoney < ComMoney)
	//	{
	//		MaxBet = PlayerMoney;
	//	}
	//	else
	//	{
	//		MaxBet = ComMoney;

	//	}

	//	if (PlayerLost)
	//	{
	//		//p1 패배 => 플레이어가 배팅
	//		do
	//		{

	//			printf("배팅 금액을 입력하세요(1 ~ %d) : ", MaxBet);
	//			cin >> Bet;
	//			cin.clear();
	//			cin.ignore(10000, '\n');
	//		} while (Bet<1 || Bet > MaxBet);
	//	}
	//	else
	//	{
	//		//p1 승리 => 컴퓨터가 배팅
	//		Bet = rand() % MaxBet + 1;
	//		printf("컴퓨터가 배팅 금액으로 [%d]원을 지정했습니다.\n", Bet);
	//		int ent;
	//		cin >> ent;
	//	}
	//	PlayerMoney -= Bet;
	//	ComMoney -= Bet;

	//	//2차 주사위
	//	int PlayerDie2 = 0;					//p1 두번째 주사위 값
	//	int ComDie2 = 0;					//cpu 두번째 주사위 값
	//	PlayerDie2 = rand() % DiceSize + 1;
	//	ComDie2 = rand() % DiceSize + 1;

	//	int PlayerSum = PlayerDie + PlayerDie2;
	//	int ComSum = ComDie + ComDie2;
	//	printf("\n%d\n", PlayerSum);
	//	printf("\n%d\n", ComSum);


	//	if (PlayerSum > ComSum)
	//	{
	//		printf("플레이어 승리! 당신이 [%d]원을 획득합니다.", (Bet * 2));
	//		PlayerMoney += (Bet * 2);
	//		PlayerLost = false;
	//		round = 1;
	//	}
	//	else if (PlayerSum < ComSum)
	//	{
	//		printf("컴퓨터 승리! 컴퓨터가 [%d]원을 획득합니다.", (Bet * 2));

	//		PlayerLost = true;
	//		round = 1;
	//	}
	//	else
	//	{
	//		printf("무승부.");
	//		PlayerMoney += (Bet);
	//		ComMoney += (Bet);

	//	}
	//	turn++;
	//}
	//if (PlayerMoney > ComMoney)
	//{
	//	printf("\n당신은 게임을 승리했습니다!");

	//}
	//else
	//{
	//	printf("\n당신은 파산했습니다...");
	//}

//const int InitialMoney = 10000;
//const int MinimumBet = 100;
//const int WinMuliplier = 2;
//
//int Money = InitialMoney;
//int CurrentBet = MinimumBet;
//
//unsigned int Seed = (unsigned int)time(0);
//Seed = 0;
//
//srand(Seed);
//
//while (Money >= 100)
//{
//	//배팅
//	//플레이어는 기본금 100원으로 시작한다.
//	printf("\n현재 소지금 : [%d]원\n", Money);
//	printf("현재 배팅 금액 : [%d]원\n", CurrentBet);
//	Money -= CurrentBet;
//
//	//홀짝 선택
//	int Select = 0;
//	while (Select != 1 && Select != 2)
//	{
//		printf("홀(1) 또는 짝(2)을 선택하세요 : ");
//		cin >> Select;
//		cin.clear();
//		cin.ignore(10000, '\n');
//	}
//	//결과 저장
//	int Result = rand() % 2 + 1;
//	printf("결과는 [%d]입니다.\n", Result);
//	if (Select == Result)
//	{
//		int WinPrize = WinMuliplier * CurrentBet;
//		printf("축하합니다! [%d]원을 획득할 수 있습니다.\n", WinPrize);
//		printf("1) [%d]원을 모두 다시 배팅.\n", WinPrize);
//		printf("2) [%d]원을 받고 다시 [%d]원부터 배팅.\n", WinPrize, MinimumBet);
//		int KeepGoing = 1;
//		while (KeepGoing != 1 && KeepGoing != 2)
//		{
//			cin >> KeepGoing;
//			cin.clear();
//			cin.ignore(10000, '\n');
//		}
//		if (KeepGoing == 1)
//		{
//			CurrentBet = WinPrize;
//		}
//		else
//		{
//			Money += WinPrize;
//			CurrentBet = MinimumBet;
//		}
//	}
//	else
//	{
//
//	}
//}
//printf("안타깝습니다 소지금을 전부 잃었습니다.");



	// 함수
	// - 특정기능을 수행하는 코드 뭉치	

	// 선언부
	// - 이런 함수가 있다고 알리는 것
	// - 프로토타입 제시(이름, 리턴타입, 파라미터)
	// - 함수의 실제 동작이 어떻게 되는지에 대한 내용은 없음
	// - 헤더에 선언한다

	// 정의부
	// - 함수의 실제 동작을 작성하는 부분
	// - {}사이의 실제 실행할 코드를 작성(함수 바디)
	// - cpp파일에 작성한다.

	// 함수의 구성요소 
	// 1. 리턴타입
	//  - 함수가 실행이 끝났을때 돌려주는 결과값
	// 2. 함수 이름
	//  - 함수들을 구분하기 위해 붙는 이름
	//  - 함수를 호출(Call)할 때 사용
	// 3. 파라미터
	//  - 함수를 호출할 때 전달하는 값
	//  - 매개변수, 인자라고도 함
	//  - 0개 이상 가능
	//  - 데이터 타입과 이름으로 구성 됨
	// 4. 함수바디
	//  - 함수의 실제 실행 코드
	//  - 종료할때 return이 있어야 한다.

	//int Sum = Add(10, 2);
	//printf("%d\n", Sum);

	//Sum = Sub(Sum, 10);
	//printf("%d\n", Sum);

	//Sum = Multiply(Sum, 2);
	//printf("%d\n", Sum);

	//Sum = Div(Sum, 0);
	//printf("%d\n", Sum);
	//test();

	//double A = 30.0;
	//double B = 15.5;
	//double C = Add(A, B);
	//printf("%s", C);
//int Add(int Num1, int Num2)
//{
//	return Num1 + Num2;
//}
//
//int Sub(int Num1, int Num2)
//{
//	return Num1 - Num2;
//}
//
//int Multiply(int Num1, int Num2)
//{
//	return Num1 * Num2;
//}
//
//int Div(int Num1, int Num2)
//{
//	if (Num2 !=0)
//	{
//		return Num1 / Num2;
//	}
//	else
//	{
//		printf("0으로 나누려고 했습니다.\n");
//		return false;
//	}
//}

//float Add(float num1, float num2)
//{
//	float result = num1 + num2;
//	return result;
//}

//void test(void)
//{
//	printf("Hello, World!");
//	//return;	//리턴값이 void인데 함수를 종료하고싶을때
//}
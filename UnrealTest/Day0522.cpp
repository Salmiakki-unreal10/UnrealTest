//void Day0522Run()
//{
//}
//
//void Day0522_example()
//{
//	int ar[5] = { 1, 2, 3, 5, 7 };
//	int count = sizeof(ar) / sizeof(int);
//
//	for (int i = 0; i < count; i++)
//	{
//
//		printf("%3d, ", ar[i]);
//
//	}
//	printf("\n\n");
//}
//
//void Day0522_example2()
//{
//	int arr[2][5] = { { 1, 2, 3, 5, 7 } , {1, 1, 1, 1, 1,} };
//	int countr = sizeof(arr) / (sizeof(int) * 2);
//	int countrr = sizeof(arr) / (sizeof(int) * 5);
//	for (int j = 0; j < countrr; j++)
//	{
//		for (int i = 0; i < countr; i++)
//		{
//
//			printf("%3d, ", arr[j][i]);
//
//
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//
//void Day0522_example3()
//{
//	int arr[2][5] = { { 1, 2, 3, 5, 7 } , {1, 1, 1, 1, -1,} };
//	int countr = sizeof(arr) / (sizeof(int) * 2);
//	int countrr = sizeof(arr) / (sizeof(int) * 5);
//	int max = 0;
//	int min = 0;
//	for (int j = 0; j < countrr; j++)
//	{
//		for (int i = 0; i < countr; i++)
//		{
//			printf("%3d, ", arr[j][i]);
//
//			if (max < arr[j][i])
//			{
//				max = arr[j][i];
//			}
//			else
//			{
//
//				min = arr[j][i];
//			}
//		}
//		printf("\n");
//	}
//	printf("max value : %d\n", max);
//	printf("min value : %d\n", min);
//}
//
//
//void Day0522_Casting()
//{
//	// 캐스팅
//	// 한 값의 데이터 타입을 다른 타입으로 임시 변경하는것
//	// C 스타일
//	// - 강제변환(위험함)
//	int Integer = 10;
//	float RealNumber = (float)Integer;
//	bool Boolean = (bool)0;
//
//	int i = 0;
//	//C++ 스타일
//	// static_cast
//	//		-C스타일 cast와 매우 유사
//	//		-문법적으로 암시적 변환이 허용될 때만 캐스팅을 한다.
//	RealNumber = static_cast<float>(Integer);
//	// dynamic_cast
//	//		-상속을 알아야 의미가 있다, 다운캐스팅을 할때 사용
//	//		-캐스팅 할수 있으면 null이 아닌값, 할 수 없으면 null을 반환.
//	//		-RTTI(RealTime Type Information)를 관리
//	//		-변환 속도가 매우 늦다.(일반적인 게임에서 남용하면 안된다.)
//	// 
//	// const_cast
//	//		-const나 volatile 속성을 제거하거나 추가할 때 사용
//	//		-사용되지 않는 것이 권장(레거시 처리용)
//	// reinterpret_cast
//	//		-C스타일 캐스트의 위험한 부분을 그대로 가져온 것
//	//		-원래타입의 구조를 무시하고	새 타입으로 강제적으로 해석하게 하는 cast
//	//		-포인터 타입간 변환이나 유니온 변환에 사용	
//	//	
//	//	
//	//	
//}
//
//void Day0522_Reference()
//{
//	//참조
//	// - 변수의 별명
//	// - 재설정이 불가능하다.(선언할 때 참조할 변수를 지정해줘야 한다.)
//	// - 참조를 변경하면 참조하고 있던 
//	int Num = 10;
//	int Target = Num;
//	Target = 15;
//
//
//	Day0522_Test_Reference(Num);
//	int& NumRef = Num;
//	//int& Ref;		//참조할 변수 지정없이 사용하는 건 안된다.
//	NumRef = 100;	// 참조하고 있는 변수인 Num이 100이 된다.
//	int Num1 = 0, Num2 = 0, Num3 = 0;
//	Day0522_Test_Reference2(Num1, Num2, Num3);
//}
//void Day0522_Test_Reference(int Data)
//{
//	Data += 10;
//}
//
//void Day0522_Test_Reference2(int& OutData, int& OutData2, int& OutData3)
//{
//	OutData = 10;
//	OutData2 = 20;
//	OutData3 = 30;
//}
//
//void Day0522_ArrayParameter() {
//	const int Length = 5;
//	int Array[Length] = { 1, 20, 30, 40, 50 };
//
//	//포인터와 배열은 근본적으로 같다.
//	FisherYatesShuffle(Array, Length);
//}
//
//void Test_ArrayParameter(int* Array, int Length)
//{
//	printf("Array : [ ");
//	for (int i = 0; i < Length; i++)
//	{
//		printf("%d ", Array[i]);
//	}
//	printf("] ");
//}
//
//
//int* FisherYatesShuffle(int* Array, int Length)
//{
//	//Test_ArrayParameter(Array, Length);
//	srand(time(0));
//	// 1. 배열의 마지막 요소에서 첫번째 요소로 진행
//	for (int i = Length - 1; i > 0; i--)
//	{
//		int rng = rand() % i + 1;
//		int temp = Array[i];
//
//		Array[i] = Array[rng];
//		Array[rng] = temp;
//
//
//	}
//	//Test_ArrayParameter(Array, Length);
//	return Array;
//	// 2. 인덱스가 가리키는 요소와 0~	인덱스 까지 요소 중 임의의 요소를 선택
//	// 3. 인덱스가 가리키는 요소와 임의로 선택된 요소를 교환
//}
//
//
//
//// 1. 배열의 값들을 전부 출력하는 함수 만들기
//void PrintAllArray(int* Array, int Length)
//{
//	printf("Array : [ ");
//	for (int i = 0; i < Length; i++)
//	{
//		printf("%d ", Array[i]);
//	}
//	printf("] ");
//}
//
//// 2. 배열을 파라미터로 받는 함수를 만들어 구현하기
//void ArrayAsParameter(int* Array, int Length)
//{
//	int sum = 0;
//	int avg = 0;
//	int max = 0;
//	int min = 0;
//	printf("Array : [ ");
//	for (int i = 0; i < Length; i++)
//	{
//		printf("%d ", Array[i]);
//		sum += Array[i];
//		if (max < Array[i])
//		{
//			max = Array[i];
//		}
//		else
//		{
//			min = Array[i];
//		}
//
//	}
//	printf("] ");
//	avg = sum / Length;
//	printf("\nAvg: %d, MAX: %d, min: %d", avg, max, min);
//}
//
////	-배열 내부값을 모두 더하고 평균값 구하기
////	-배열값 중 최대 최소 구하기
//// 3. 피셔 예이츠 알고리즘 완성하기
//
//
//
////주사위 백만번 던지기
//void DiceRollnCount(int times)
//{
//	srand(time(0));
//	int eyes = (rand() % 6) + 1;
//	int count = 0;
//	int Array[6] = { 0, };
//	//printf("%d", eyes);
//	while (count < times)
//	{
//		eyes = (rand() % 6) + 1;
//		Array[eyes - 1] += 1;
//		count++;
//	}
//	Test_ArrayParameter(Array, 6);
//}
//
//
////배열 뒤집기
//void Reverse(int* Array, int Length)
//{
//	int temp = 0;
//	int count = 1;
//	Test_ArrayParameter(Array, Length);
//	for (int i = 0; i < Length / 2; i++)
//	{
//		temp = Array[i];
//		Array[i] = Array[Length - count];
//		Array[Length - count] = temp;
//		count++;
//
//	}
//	Test_ArrayParameter(Array, Length);
//}
//
//
//void Reverse_Test()
//{
//	int Array[11] = { 0, 1, 2, 3, 4, 5 , 6, 7, 8, 9, 10 };
//	Reverse(Array, 11);
//}
//
////로또 번호 생성기
//void Lottery_Generator()
//{
//	int Array[45] = { 0, };
//	int MyLotto[6] = { 0, };
//	int Length = 45;
//	int num = 1;
//	for (int i = 0; i < 45; i++)
//	{
//		Array[i] = num;
//		num++;
//	}
//	for (int i = 0; i < 6; i++)
//	{
//		MyLotto[i] = FisherYatesShuffle(Array, Length)[i];
//		printf("%d ", MyLotto[i]);
//	}
//}
//
//// 키 입력
//char InputKey()
//{
//
//	char input = 0;
//	char output;
//	cin >> input;
//	switch (input)
//	{
//	case ('w' | 'W'):
//		output = 'w';
//		printf("W\n");
//		break;
//	case ('a' | 'A'):
//		output = 'a';
//		printf("A\n");
//		break;
//	case ('s' | 'S'):
//		output = 's';
//		printf("S\n");
//		break;
//	case ('d' | 'D'):
//		output = 'd';
//		printf("D\n");
//		break;
//	}
//	return output;
//}
//
//// 미로게임
//void Start_Maze()
//{
//	// 미로 크기
//	const int MazeRows = 10;
//	const int MazeCols = 20;
//
//	// 미로 배열
//	int Maze[MazeRows][MazeCols] =
//	{
//		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
//		{1,4,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,0,1},
//		{1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,0,1},
//		{1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1},
//		{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
//		{1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1},
//		{1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1},
//		{1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,3,1},
//		{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
//		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
//	};
//
//	//미로 생성
//	string letter = "";
//	int playery = 0;
//	int playerx = 0;
//	int goaly = 0;
//	int goalx = 0;
//	int temp = 0;
//	do
//	{
//
//		if (temp == 3)
//		{
//			printf("\n축하합니다! 미로를 탈출했습니다!");
//			break;
//		}
//
//
//		for (int i = 0; i < 10; i++)
//		{
//			for (int j = 0; j < 20; j++)
//			{
//				if (Maze[i][j] == 4)
//				{
//					playery = i;
//					playerx = j;
//
//				}
//				else if (Maze[i][j] == 4)
//				{
//					goaly = i;
//					goalx = j;
//				}
//
//				switch (Maze[i][j])
//				{
//				case 0:
//					printf(".");
//					break;
//				case 1:
//					printf("#");
//					break;
//				case 2:
//					printf("S");
//					break;
//				case 3:
//					printf("E");
//					break;
//				case 4:
//					printf("P");
//					break;
//				}
//
//			}
//			printf("\n");
//
//		}
//		printf("좌표[%d, %d]\n", playerx, playery);
//
//		switch (InputKey())
//		{
//		case'w':
//			if ((Maze[playery - 1][playerx]) != 1)
//			{
//				temp = Maze[playery - 1][playerx];
//				Maze[playery - 1][playerx] = 4;
//				Maze[playery][playerx] = temp;
//			}
//			break;
//		case'a':
//			if ((Maze[playery][playerx - 1]) != 1)
//			{
//				temp = Maze[playery][playerx - 1];
//				Maze[playery][playerx - 1] = 4;
//				Maze[playery][playerx] = temp;
//			}
//			break;
//		case's':
//			if ((Maze[playery + 1][playerx]) != 1)
//			{
//				temp = Maze[playery + 1][playerx];
//				Maze[playery + 1][playerx] = 4;
//				Maze[playery][playerx] = temp;
//			}
//			break;
//		case'd':
//			if ((Maze[playery][playerx + 1]) != 1)
//			{
//				temp = Maze[playery][playerx + 1];
//				Maze[playery][playerx + 1] = 4;
//				Maze[playery][playerx] = temp;
//			}
//			break;
//		}
//		Maze[1][1] = 2;
//	} while (true);
//
//	//플레이어 이동 제어

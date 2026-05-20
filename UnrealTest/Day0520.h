#pragma once
//// 비트 연산자
	//// - 비트를 계산하는 연산자.
	//// 비트 플래그를 사용하기 위해 필요하다.
	//
	//// 비트 And
	//// - &
	//// - 양변의 있는 데이터의 각 자리수 비트가 둘 다 1이면 1이다.
	//int DataA = 6;
	//int DataB = 7;
	//printf("DataA & DataB = %d\n", DataA & DataB);


	//// 비트 Or
	//// - |
	//// - 양변에 있는 데이터의 각 자리수 비트가 하나라도 1이면 1이다.
	//printf("DataA | DataB = %d\n", DataA | DataB);


	//// 비트 Not 
	//// - ~ 
	//// - 비트값이 반전된다.
	//unsigned int DataC = 6;
	//printf("~DataC = %d\n", ~DataC );


	//// 비트 XOR
	//// - ^
	//// - 양변에 있는 데이터의 각 자리수 1ㅣ트가 다르면 1, 같으면 0
	//// - 특정비트를 토글할 때 사용(모두 0으로 채우고 토글할 비트만 1로 세팅한 후 XOR를 하면 된다)
	//printf("Bit toggle : %d\n", DataA ^ 1);
	//printf("Bit toggle : %d\n", (DataA ^ 1)^1);


	//// 비트 쉬프트 
	//// - <<, >>
	//// = 왼쪽 쉬프트는 마스크 생성용으로 유용, 곱하기 2로도 사용 가능
	//printf("bit Left Shift : %d", DataA << 1);
	//printf("bit Left Shift : %d\n", DataA >> 1);


	//// enum
	//// - 상수의 집합
	//enum WeekDays { //별도의 설정이 없으면 첫번째 enum같은 0이고 1씩 증가
	//	Mon,
	//	Tue,
	//	Wed,
	//	Thu,
	//	Fri,
	//	Sat = 10,	//따로 설정하면 그 값부터 다시 1씩 증가
	//	Sun
	//};

	//int EnumTest1 = Mon;

	//enum BitFlagTest
	//{
	//	Up		= 1 << 0,
	//	Down	= 1 << 1,
	//	Left	= 1 << 2,
	//	Right	= 1 << 3
	//};

	//int Direction = Up | Right; //오른쪽 위
	//Direction = Up | Down | Left | Right;


	//// 간단 실습
	//// 1. 비트 연산을 활요해서 홀짝을 판별하기.(입력 데이터는 무조건 양수이다)

	//int number = 0;
	//printf("양수를 입력해주세요: ");
	//cin >> number;
	//if (number & 1)
	//{
	//	printf("홀수\n");
	//}
	//else {
	//	printf("짝수\n");

	//}

	//
	//// 2. 캐릭터가 사용 가능한 무기 enum 만들기, 데이터 설정에서 특정 무기를 사용할 수 있는지 없는지 확인하는 코드 만들기
	//enum AvailableWeapons
	//{
	//	Sword = 1,
	//	Shield,
	//	Dagger,
	//	Bow,
	//	Hammer,
	//	Axe
	//};
	//int Player = Sword | Shield;
	//int input = 0;
	//printf("확인할 무기를 선택해주세요 (1. 검, 2. 방패, 3. 단검, 4. 활) : ");
	//cin >> input;
	//switch (input) {
	//case 1:
	//	if (Player & Sword)
	//	{
	//		printf("검 사용가능");
	//	}
	//	else
	//	{
	//		printf("검 사용 불가능");
	//	}
	//	break;
	//case 2:
	//	if (Player & Shield)
	//	{
	//		printf("방패 사용가능");
	//	}
	//	else
	//	{
	//		printf("방패 사용 불가능");
	//	}
	//	break;
	//case 3:
	//	if (Player & Dagger)
	//	{
	//		printf("단검 사용가능");
	//	}
	//	else
	//	{
	//		printf("단검 사용 불가능");
	//	}
	//	break;
	//case 4:
	//	if (Player & Bow)
	//	{
	//		printf("활 사용가능");
	//	}
	//	else
	//	{
	//		printf("활 사용 불가능");
	//	}
	//	break;
	//}
	//
	//int NewWeapon = 0;
	//printf("\n추가 할 무기를 선택해주세요 (1. 검, 2. 방패, 3. 단검, 4. 활) : ");
	//cin >> input;
	//
	//
	//// 반복문
	//// - 특정 코드블록을 조건에 따라 여러번 반복해서 실행할 수있게 해주는 문(Statement)

	////for
	//// - 반복 횟수가 명확할 때 사용하기 좋다.
	//for (int i = 0; i < 5; i++) //(변수초기화; 종료조건; 증감부)
	//{
	//	printf("Hello For %d\n", i);
	//}

	////while
	//// - 반복 횟수가 명확하지 않고 조건에 따라 반복해야 할 때 사용하기 좋다.
	//int j = 0;
	//while (j < 5)
	//// while(true)		// 무한루프
	//{
	//	printf("Hello While : %d\n", j);
	//	j++;
	//}
	//
	////do while
	//// - while과 비슷한데 최소 한 번은 실행해야 할 때 사용하기 좋다.
	//j = 0;

	//do
	//{
	//	printf("Hello do-while :%d\n", j);
	//	j++;
	//} while (j < 5);
	//

	//int sum= 0;
	//int numbs= 1;
	//
	///*while (numbs != 0)
	//{
	//	cin >> numbs;
	//	sum += numbs;
	//}
	//printf("%d", sum);*/

	//do
	//{
	//	cin >> numbs;
	//	sum += numbs;
	//} while (numbs != 0);

	//printf("%d", sum);

	////구구단
	//int gugudan = 0;
	//cin >> gugudan;
	//for (int i = 0; i < 9; i++)
	//{
	//	
	//	printf("%d * %d = %d\n", gugudan, i+1, gugudan * (i+1));
	//}

	////홀수 출력
	//int range = 0;
	//cin >> range;
	//for (int n = 0; n < range; n++)
	//{
	//	if (n % 2 != 0)
	//	{
	//		printf("%d, ", n);
	//	}
	//}
	//printf("\n");


	//// 팩토리얼
	//for (int j = 1; j < 101; j++)
	//{
	//	if (j % 7 == 0)
	//	{
	//		printf("%d, ", j);
	//	}
	//}
	//int factorial = 1;
	//cin >> factorial;
	//for (int j = factorial; j > 1; j--)
	//{
	//	factorial*=j-1;

	//}
	//printf("%d", factorial);


	////피라미드
	//int base = 0;
	//
	//cin >> base;
	//int times = base/2;
	//for (int l= 0; l < base/2; l++)
	//{
	//	for (int i = 0; i < times; i++)
	//	{
	//		printf(" ");

	//	}
	//	for (int i = 0; i < 2*l-1; i++)
	//	{
	//		printf("*");

	//	}
	//	
	//	printf("\n");
	//	times -= 1;


	//}


	////랜덤
	//srand(time(0));	//랜덤의 시드값을 현재 시간으로 설정하기 (프로그램 실행할 때 한번만 하면 된다.)
	//
	//int TestCount = 1000000;
	//int Num1 = 0;
	//int Num2 = 0;
	//int Num3 = 0;
	//int Num4 = 0;
	//int Num5 = 0;
	//int Num6 = 0;
	//for (int i = 0; i <TestCount; i++)
	//{
	//	int RandomNumber = rand()%6+1;
	//	/*printf("%d\n", RandomNumber);*/
	//	switch (RandomNumber)
	//	{
	//	case 1:
	//		Num1++;
	//		break;
	//	case 2:
	//		Num2++;
	//		break;
	//	case 3:
	//		Num3++;
	//		break;
	//	case 4:
	//		Num4++;
	//		break;
	//	case 5:
	//		Num5++;
	//		break;
	//	case 6:
	//		Num6++;
	//		break;

	//	}
	//}

	//printf("Num1: [%d}, Num2: [%d}, Num3: [%d}, Num4: [%d}, Num5: [%d}, Num6: [%d},", Num1, Num2, Num3, Num4, Num5, Num6);

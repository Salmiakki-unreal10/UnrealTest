#pragma once

//// 이진수
//// - 0과 1로만 표현되는 숫자
////	 - ex) int i = 8;	//메모리 :0000 0000 0000 0000 0000 0000 0000 1000
//
//// float(부동소수점 방식)
//// - 32bit
//// - 소수점이 있는 숫자를 저장한다.
//// - 구조적으로 오차가 있는 데이터 타입. 비교를 조심해서 해야한다.
//
//// double(부동소수점)
//// - 64bit
//
//float RealNumber = 0.0f;	//0.0f는 float
//RealNumber = 0.1;			//0.1은 double -> 암시적 변환이  일어나 float으로 저장됨.
//RealNumber = (float)0.1;	// 명시적 변환, casting 
//
//printf("이것은 실수 입니다 : %f\n", RealNumber);
//
//RealNumber = 0.1f + 0.5f;
//printf("이것은 실수 입니다 : %.2f \n", RealNumber);	// 소수점 아래 둘째자리까지 출력
//RealNumber -= 0.2f;
//printf("이것은 실수 입니다 : %8.2f \n", RealNumber);	// 소수점 포함 8자리, 소수점 아래 둘째자리까지 출력
//printf("float타입의 사이즈는 [%d]Byte 입니다\n", (int)(sizeof(float)));
//
///* 불리언 타입
// bool
// - true, false  이 둘만 저장하는 데이터 타입
// = 프로그램의 각종 분기를 결정할 때 사용
// - 1byte (8bit)*/
//
//bool btest = false;
//btest = true;
//printf("bool타입의 사이즈는 [%d]byte 입니다", (int)(sizeof(bool)));
//
//// char(캐릭터 타입)
//// - 글자 하나를 저장하는 데이터 타입
//// - 8bit짜리 정수형 데이터 타입
//char testcharacter = 'a';
//testcharacter = 'b';
//
//printf("char c = %c", testcharacter);
//
////문자열
//// - char*, std::string
//std::string TestString = "Hello, World!\n";
//
//// 부호 없는 인티저(32bit, range :0-42억)
//unsigned int TestInteger = 0;
//
//// 64bit 인티저
//long long TestInteger64 = 0;
//unsigned long long TestInteger64_2 = 0;
//
//// 유니코드 캐릭터
//wchar_t UnicodeChar = L'가';
//
//int Size = 100;
//printf("한변이 %d인 정사각형의 넓이는 %d입니다.\n", Size, Size* Size);
//
//float Radius;
//printf("반지름을 입력해주세요: ");
//cin >> Radius;
//printf("Area equals to %f\n", 3.14 * Radius * Radius);
//printf("Enter three values: \n");
//float a; float b; float c;
//cin >> a;
//cin >> b;
//cin >> c;
//printf("Average value: %7.2f\n", (a + b + c) / 3);
//float Price;
//float Percentage;
//printf("Enter price: ");
//cin >> Price;
//printf("Enter discount percentage: ");
//cin >> Percentage;
//printf("Price with discount: %7.2f\n", Price - (Price)*Percentage * 0.01f);
//
//// 비교 연산자
//	// - 두 연산자를 비교하는 연산자(크다, 작다, 같다 등등을 확인)
//bool bTest = false;
//bTest = 10 > 5; // true
//bTest = 10 < 5; // false
//bTest = 10 >= 5; // true
//bTest = 10 >= 5; // true
//bTest = 10 > 5; // false
//bTest = 10 == 10; // true
//
//
//
//bTest = 0.10f + 0.2f == 0.3f;	//이런식의 비교는 절대로 하면 안된다.
//
//
//// 조건문
//// - 특정 조건에 따라 다른 동작을 학[ 만드는 문(statement)
//
//// if
//// - ()사이의 조건식이 true면 아래쪽 {}사이의 코드를 실행한다.
//int a = 30;
//int b = 20;
//if (a > b) {
//	printf("a가 b보다 큽니다.\n");
//}
//
//// if else
//// - ()사이의 조건식이 true면 아래쪽 {}사이의 코드를 실행하고 false면 else 아래의 {}사이의 코드를 실행한다.
//
//// else if 
//// - if를 중첩하기
//if (a > b * 2) {
//
//}
//else if (a > b) {
//
//}
//else if (a > b / 2) {
//
//}
//a = 10;
//if (a > b) {
//	printf("a(%d)가 b(%d)보다 큽니다.\n", a, b);
//}
//else if (a < b) {
//	printf("a(%d)가 b(%d)보다 작습니다. \n", a, b);
//}
//
//// switch
//// - 값이 여러가지 중 하나일 떄 각각의 경우에 따라 다르게 처리할 때 사용
//switch (a)
//{
//case 1:
//	printf("a는 1입니다.\n");
//	break;
//case 10:
//	printf("a는 10입니다.\n");
//	break;
//default:
//	printf("a는 % d입니다.\n", a);
//	break;
//}
//
//// 삼항 연산자
//int x = (a > 10) ? 1 : 0; //?앞의 조건식의 참이면 ?와 :사이에 있는 값, 거짓이면 : 뒤에 있는 값.
//
//
//// 논리 연산자
//// - 참 아니면 거짓이 나오는 연산
//// - bool을 다루는 연산자
//
//// &&
//// - And
//// - && 연산자 좌우가 모두 true면 true, 아니면 false
//// - bool bTest = true && true;		// 이때만 bTest가 true
//// ||
//// - Or
//// - || 연산자 좌우의 값이 하나라도 true면 true, 둘 다 false일 때만 false
//// - bool bTest = false || false;	// 이때만 bTest가 false 
//// !
//// - Not
//// - true는 false 로, false는 true 로 변경
//// - bool bTest = true; bTest =! bTest; // bTest는 false
//
//int Points = 78;
//if ((Points < 90) && (Points >= 80))
//{
//	printf("B학점입니다.\n");
//}
//양수 음수 0 판별
//int number;
//printf("(양수 음수 0 판별)	정수를 입력해주세요: ");
//cin >> number;
//if (number > 0)
//{
//	printf("정수 [%d]는 양수입니다.\n", number);
//}
//else if (number < 0)
//{
//	printf("정수 [%d]는 음수입니다.\n", number);
//}
//else
//{
//	printf("0입니다.\n");
//
//}
//
//// 홀수 짝수 판단
//printf("(홀수 짝수 판단)	정수를 입력해주세요: ");
//cin >> number;
//if (number % 2 == 0)
//{
//	printf("정수 [%d]는 짝수입니다.\n", number);
//}
//else
//{
//	printf("정수 [%d]는 홀수입니다.\n", number);
//
//}
//
//// 더 큰 수 판단
//int number1;
//int number2;
//printf("두 정수를 입력해주세요: ");
//cin >> number1 >> number2;
//if (number1 > number2)
//{
//	printf("첫번째 숫자 [%d]는 두번째 숫자 [%d] 보다 큽니다.\n", number1, number2);
//}
//else if (number1 < number2)
//{
//	printf("두번째 숫자 [%d]는 첫번째 숫자 [%d] 보다 큽니다.\n", number2, number1);
//
//}
//else
//{
//	printf("두 수는 같습니다.\n");
//
//}
//
//// 나이와 키를 입력받아 6세 이상, 120cm 이상일 때 롤러코스터 탑승 가능, 그 외에는 불가능 출력
//int age;
//int height;
//printf("나이와 키를 입력해주세요: ");
//cin >> age >> height;
//if ((age >= 6) && (height >= 120))
//{
//	printf("탑승 가능.\n");
//}
//else
//{
//	printf("탑승 불가능.\n");
//
//}
//// 점수를 입력받아, 90점 이상은 A, 80점 이상은 B, 70점 이상은 C, 60점 이상은 D, 그외에는 F
//int score;
//printf("점수를 입력해주세요: ");
//cin >> score;
//if (score >= 90)
//{
//	printf("A.\n");
//}
//else if (score >= 80)
//{
//	printf("B.\n");
//
//}
//else if (score >= 70)
//{
//	printf("C.\n");
//
//}
//else if (score >= 60)
//{
//	printf("D.\n");
//
//}
//else
//{
//	printf("F.\n");
//
//}
//
//// 세 과목의 점수를 입력받아 세 과목 평균 60점 이상이면 '합격', 아니면 '불합격' 출력, 한과목이라도 40점 미만이면 불합격 처리
//int p1;
//int p2;
//int p3;
//bool bSuccess = false;
//printf("세 과목의 점수를 입력해주세요: ");
//cin >> p1 >> p2 >> p3;
//if ((p1 + p2 + p3) / 3 >= 60 && (p1 > 39 && p2 > 39 && p3 > 39))
//{
//	printf("합격.\n");
//}
//else
//{
//	printf("불합격.\n");
//}

//// 세 수 중 최댓값, 최솟값
//
//printf("세 숫자를 입력해주세요: ");
//int a = 0;
//int b = 0;
//int c = 0;
//cin >> a >> b >> c;
//int max = a > b ? (a > c ? a : c) : (c > b ? c : b);
//int min = a > b ? (b > c ? c : b) : (a > c ? c : a);
//
//printf("최댓값은 %d, 최솟값은 %d\n", max, min);
//
//
//// 삼각형 만들기
//
//printf("세 변의 길이를 입력해주세요: ");
//cin >> a >> b >> c;
//int maxl = a > b ? (a > c ? a : c) : (c > b ? c : b);
//if (a + b + c > maxl * 2)
//{
//	printf("삼각형 생성 가능\n");
//}
//else
//{
//	printf("삼각형 생성 불가능\n");
//}
//
//
//// 미니 계산기
//
//printf("두 정수를 입력해주세요: ");
//cin >> a >> b;
//char Oprt = ' ';
//printf("연산자를 입력해주세요: ");
//cin >> Oprt;
//switch (Oprt)
//{
//case'+':
//{
//	printf("%d\n", a + b);
//	break;
//}
//case'-':
//{
//	printf("%d\n", a - b);
//	break;
//}
//case'*':
//{
//	printf("%d\n", a * b);
//	break;
//}
//case'/':
//{
//	if (b != 0)
//	{
//		printf("%d\n", a / b);
//		break;
//	}
//	else
//	{
//		printf("0으로 나눌 수 없습니다.");
//		break;
//
//	}
//}
//}
//
////윤년 판별기
//int year = 2026;
//printf("연도를 입력해주세요: ");
//cin >> year;
//bool bLeapYear = (year % 100 != 0 || year % 400 == 0 ? (year % 4 == 0) : (false));
//if (bLeapYear)
//{
//	printf("윤년입니다.");
//}
//else
//{
//	printf("평년입니다.");
//
//}

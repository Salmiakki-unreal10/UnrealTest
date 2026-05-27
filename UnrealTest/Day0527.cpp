#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include "Day0527.h"
void Day0527() {
	// 문자열
	// 한 문장, 연속된 char
	// - C에서는 char*, char [] 사용
	// 항상 모든 문자열은 '\0'로 끝난다.
	//
	
	const char* TestString1 = "Hello String!\n";
	const char* TestString2 = "안녕 문자열!\n";
	// wchar_t : 유니코드용 char.

	const char* TestString = "Hello";
	printf("%s의 길이는 %d", TestString, MystrnLen(TestString));

	char Buffer[32] = { 0, };
	/*strcpy(Buffer, TestString);
	printf("\nBuffer의 내용은 [%s]입니다. \n", Buffer);

	strcat(Buffer, TestString);
	printf("\nBuffer의 내용은 [%s]입니다. \n", Buffer);

	int Result = strcmp("abc", "abc");
	Result = strcmp("ab", "abc");
	Result = strcmp("abc", "ab");

	const char* TestNumber = "123";
	int Number = atoi(TestNumber);
	const char* TestfNumber = "12.3";
	float fNumber = (float)atof(TestfNumber);
	printf("[%s]는 [%d]입니다. \n", TestNumber, Number);
	printf("[%s]는 [%f]입니다. \n", TestfNumber, fNumber);*/

	printf("\nBuffer의 내용은 [%s]입니다. \n", Buffer);
	MyStrCpy(Buffer, TestString);
	printf("\nBuffer의 내용은 [%s]입니다. \n", Buffer);

	MyStrCat(Buffer, TestString);
	printf("\nBuffer의 내용은 [%s]입니다. \n", Buffer);

	int Result = MyStrCmp("abc", "abc");
	printf("결과 : %d ", Result);
	Result = MyStrCmp("ab", "abc");
	printf("결과 : %d ", Result);
	Result = MyStrCmp("abc", "ab");
	printf("결과 : %d ", Result);
	//printf("%d", MyAtoI("12515025036"));
	const char* TestCasePass2[] = { "123.45", "-38.556", "0.0", "  3.14", "+0.5", ".7", "12.", "-.54" };
	const float TestCaseResult2[] = { 123.4501f, -38.556f, 0.0f, 3.14f, 0.5f, 0.7f, 12.0f, -0.54f };
	const char* TestCaseFail2[] = { "12.05.78", "45.dd", "aqw45.8", "12. 35", "" };
	int PassCount2 = 0;
	int FailCount2 = 0;
	int TestCount2 = sizeof(TestCasePass2) / sizeof(TestCasePass2[0]);
	for (int i = 0; i < TestCount2; i++)
	{
		const char* Case = TestCasePass2[i];
		if (Comparef(MyAtoF(Case), TestCaseResult2[i]))
			PassCount2++;
		else
			FailCount2++;
		printf("[%s] = [%f] : %s\n", Case, MyAtoF(Case), Comparef(MyAtoF(Case), TestCaseResult2[i]) ? "Pass" : "Fail");
	}
	printf("PassCount : %d, FailCount : %d\n", PassCount2, FailCount2);
	if (FailCount2 > 0)
	{
		printf("ERROR!!!!!!!!!!!!!!!!!!!!\n");
	}

	// 실패 테스트
	PassCount2 = 0;
	FailCount2 = 0;
	TestCount2 = sizeof(TestCaseFail2) / sizeof(TestCaseFail2[0]);
	for (int i = 0; i < TestCount2; i++)
	{
		const char* Case = TestCaseFail2[i];
		if (Comparef(MyAtoF(Case), 0))
			PassCount2++;
		else
			FailCount2++;
		printf("[%s] = [%f] : %s\n", Case, MyAtoF(Case), Comparef(MyAtoF(Case), 0) ? "Pass" : "Fail");
	}
	printf("PassCount : %d, FailCount : %d\n", PassCount2, FailCount2);
	if (FailCount2 > 0)
	{
		printf("ERROR!!!!!!!!!!!!!!!!!!!!\n");
	}

}

	//간단 실습

	// 1. MyStrCpy
void MyStrCpy(char* Buffer, const char* CtrlC)
{
	int Length = MystrnLen(CtrlC);
	for (int i = 0; i < Length; i++)
	{
		*(Buffer+i) = *(CtrlC + i);
	}
}


	// 2. MyStrCat	이어붙이기
void MyStrCat(char* Buffer, const char* Append)
{
	int LastCharLoc = 0;
	int Length = MystrnLen(Append);
	while (*(Append + LastCharLoc) != '\0')
	{
		LastCharLoc++;
	}
	printf("%d ", LastCharLoc);

	for (int i = 0; i < (Length); i++)
	{
		*(Buffer + LastCharLoc+ i) = *(Append + i);
	}
}



	// 3. MyStrCmp
int MyStrCmp(const char* Str1, const char* Str2)
{
	int Length1 = MystrnLen(Str1);
	int Length2 = MystrnLen(Str2);
	int Length = Length1;
	Length = Length1 > Length2 ? Length1:Length2 ;

	int Result = -2;
	for (int i = 0; i < Length; i++)
	{
		if (*(Str1 + i) == *(Str2 + i))
		{
			Result = 0;
		}
		else if (*(Str1 + i) > *(Str2 + i))
		{
			Result = 1;
		}
		else
		{
			Result = -1;
		}

	}
	return Result;
}
	// 4. MyAtoI
int MyAtoI(const char* Str) 
{
	/*int Integers[10] = {
		0,1,2,3,4,5,6,7,8,9
	};
	bool IsEligible = false;
	
	int Length = MystrnLen(Str);
	int Result = 0;
	int arr[32] = { 0, };

	switch (*Str)
	{
	case '+':
	case '-':
		IsEligible = true;
	}
	for (int i = 0; i < Length; i++)
	{
		if ((*Str && Integers)||IsEligible)
		{
			arr[i] = *(Str + i);
		}
		else
		{
			break;
		}

	}
	for (int Element : arr)
	{
		printf("%d ", Element);
	}
	return Result;*/

	while (*Str == ' ' || *Str == '\t' || *Str == '\n' || *Str == '\r')
	{
		Str++;
	}
	int Sign = 1;
	switch (*Str)
	{
	case '+':
		Str++;
	case '-':
		Sign = -1;
		Str++;
	}
	int Result = 0;
	while (*Str >= 0 && *Str <= 9)
	{
		Result = Result * 10 + (*Str - '0');
		Str++;
	}

	if (*Str != '\0')
	{
		Result = 0;
	}
	return Result;
}




	// 5. MyAtof


float MyAtoF(const char* Source)
{
	//	- 성공 : "123.45", "-38.556", "0.0", "  3.14", "+0.5", ".7", "12.", "-.54"
	//	- 실패. 무조건 0반환 : "12.05.78", "45.dd", "aqw45.8", "12. 35", ""

	// 공백 제거
	while (*Source == ' ' || *Source == '\t' || *Source == '\n' || *Source == '\r')
	{
		Source++;
	}

	// 부호 처리
	int Sign = 1;
	if (*Source == '-')
	{
		Sign = -1;
		Source++;
	}
	else if (*Source == '+')
	{
		Source++;
	}

	// 문자를 숫자로 바꾸기
	float Result = 0;
	while (*Source >= '0' && *Source <= '9')
	{
		Result = Result * 10.0f + (*Source - '0');	// 숫자 누적하기
		Source++;
	}

	int DecimalLimit = 0;
	// 소수점(.) 처리
	if (*Source == '.')
	{
		Source++;

		float Fraction = 1.0f;
		// 문자를 숫자로 바꾸기
		while (*Source >= '0' && *Source <= '9' )
		{
			Result = Result * 10.0f + (*Source - '0');	// 숫자 누적하기
			Source++;
			DecimalLimit++;
			Fraction *= 0.1f;	// 소수점 아래로 얼마나 내려갈지 누적
		}
		Result *= Fraction;		// 소수점 적용
	}

	// 숫자가 아닌 것이 나왔을 때 처리
	if (*Source != '\0')
	{
		Result = 0;
	}

	return Result * Sign;
}

bool Comparef(float af, float bf)
{
	bool Result = false;
	float deca = af-(int)af;
	float decb = bf-(int)bf;
	int count = 0;
	while (int(af) == int(bf) && count <5)
	{
		deca *= 10.0f;
		decb *= 10.0f;
		count++;
	}
	int ideca = (int)deca;
	int idecb = (int)decb;
	printf("%f, %f -> %d, %d\n", deca, decb, ideca , idecb );
	
	
	//printf("%d, %d\n", deca, decb);
	if (int(af) == int(bf) && ideca == idecb||ideca+1==idecb||idecb+1==ideca)
	{
		Result = true;
	}
	else
		Result = false;
	return Result;
}

int MystrnLen(const char* str)
{	
	int Length = 0;
	while (*(str+Length) != '\0')
	{
		Length++;
	}
	return Length;

}


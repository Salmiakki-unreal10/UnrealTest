#include <iostream>
#include <stdio.h>
#include "Day0526.h"


//간단 실습
// 1. 두 변수의 값을 변경하는 함수 만들기
//	int a, b; Swap(a, b);하면 a와 b의 값이 서로 바뀐다.
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	//return a;
}
// 2. 포인터를 이용해서 배열의 최대값 찾는 함수 만들기
//	- 인덱스 사용급지. (Array[i])사용 x
int FindMax(int* Data, int Size)
{
	int Max = INT32_MIN;
	for (int i = 0; i < Size; i++)
	{
		if (Max < *(Data + i))
		{
			Max = *(Data + i);
		}
	}
	return Max;
}
// 3. 포인터를 이용해서 배열의 순서를 뒤집는 함수 만들기
//

void Flip(int* Data, int Size)
{
	for (int i = 0; i < Size/2; i++)
	{										
		//printf("%d, ", *(Data+i));
		//printf("%d-> \n", *(Data + Size - 1 - i));
		int temp = *(Data + i);
		*(Data + i) = *(Data+Size-1 - i);		// i번째 요소에 Size-1-i번째 요소에 값을 저장
		*(Data+Size-1 - i) = temp;				//  Size-1-i번째 요소에 처음 저장한 temp값을 저장
		//printf("%d, ", *(Data+i));
		//printf("%d, \n", *(Data + Size - 1 - i));

	}
	for (int i = 0; i < Size; i++)
	{										
		printf("%d, ", Data[i]);

	}
	//printf("%d, %d", *start, *end);
		
}
void Day0526()
{
	// 포인터
	// - 메모리 '주소'를 저장하는 변수
	// - 각 데이터 타입에 *(Asterisk)만 붙이면 포인터 타입이 된다.
	
	// IntegerAdress는 int 타입 변수의 주소를 저장하는 변수다. 기본값으로 nullptr을 저장한다.
	int* IntegerAddress = nullptr;	 // int 포인터 IntegerAddress 선언하고 nullptr로 초기화하기

	float* pFloat = nullptr;	   	 // float 포인터 pFloat
	char* pTestString = nullptr;	 // char 포인터 (문자열, string) pTestString

	// 포인터 연산자
	// - & : 주소연산자. 변수 앞에 붙이면 그 변수의 주소를 돌려준다.
	// - * : 간접참조연산자. 포인터 변숭 앞에 붙이면 그 포인터 변수가 가리키는 주소에 있는 실제 값을 돌려준다.
	int Data = 10;
	IntegerAddress = &Data;			// Data라는 변수의 주소를 IntegerAddress에 저장하라.
	int Temp = *IntegerAddress;		// IntegerAddress가 가리키는 주소에 있는 실제값(Data의 값)을 Temp에 대입해라.
	int Temp2 = *IntegerAddress * 2;// IntegerAddress가 가리키는 실제 값을 두 배 해서 Temp2에 대입해라.

	// 상수와 포인터
	const int* ConstPointer = &Data;// ConstPointer는 Data의 주소를 가리키는데 그 '값'을 변경하지 않겠다.
	ConstPointer = &Temp;
	int* const ConstPointer2 = &Data;// ConstPonter는 Data의 주소를 가리키는데 주소를 변경하지 않겠다.
	//ConstPointer2 = &Temp2;		 // int* const 에서 주소를 변경하는 것은 에러


	//*ConstPointer = 20;			//값을 변경하는 것은 에러
	// const는 자기 왼쪽에 있는 것(왼쪽에 없으면 오른쪽)을 변경하지 않는 것.
	// const int a = 10;	// 일반적
	// int const b = 20;	// 드물지만 문법적으로 적법함

	// +연산자와 -연산자

	// + 연산자
	// - 포인터 타입의 값타입의 크기만큼 증가/감소한다.
	int* pData = &Data;	// Data의 주소가 0x10이라고 가정하면
	pData = pData + 1;  // +한 결과는 0x14. int의 크기가 4Byte라서.
	pData++;			// 0x18
	pData--;			// 0x14

	int Array[5] = { 1,2,3,4,5 };
	int* pArray = Array;
	Array[1];			//배열의 두번째 요소에 접근
	//pArray + 1;			//포인터를 이용해서 두번째 요소에 접근


	// range - for			//배열이나 컨테이너의 첫 요소에서 마지막 요소까지 순차적으로 처리할때 유용
	for (int Element : Array)
	{
		printf("%d, ", Element);
	}
	printf("\n");


	// pArray를 이용해서 Array 4번째 요소 출력하기
	//printf("%d", *(pArray + 3));
	//Day0526_PointerParameter(Array, 5);
	int valuea = 1;
	int valueb = 2;
	printf("%d, %d - >", valuea, valueb);
	Swap(&valuea, &valueb);
	printf("%d, %d", valuea, valueb);

	printf("\n최댓값 찾기 :%d\n", FindMax(Array, 5));
	Flip(Array, 5);

	// c++의 메모리 영역
	// - 코드 영역
	//		- 프로그램의 실행 코드가 저장되는 공간
	// - 데이터 영역
	//		- 프로그램이 시작할 때 부터 끝날때까지 유지되는 변수가 저장되는 공간
	//		- 전역 변수, static 변수 등
	// - 스택 영역
	//		- 함수가 호출될 때 마다 필요한 변수(지역 변수)
	//		- 함수가 끝나면 자동으로 정리
	//		- 크기 제한이 있다.	(윈도우 별다른 설정이 없으면 1MB)
	//		- 빠르다.
	// - 힙 영역
	//		- 프로그램 실행 중에 필요에 따라 직접 메모리를 할당하고 사용하는 공간
	//		- 반드시 할당을 하면 해제 해줘야 한다.
	//		- 크기는 대략 RAM 크기와 같다.
	//		- 스택에 비해 느리다. (자주하면 안된다.)

	//동적할당(Dynamic Allocation)
	// - 프로그램 실행 도중(RunTime)에 메모레를 사용하기 위해 확보하는 행위
	//

	int* Alloc = new int(5);	// int 크기로 동적할당을 받고 초기값으로 5를 설정한 다음 그 주소를 Alloc에 저장해라.

	delete Alloc;				// 썼으면 반드시 해제
	Alloc = nullptr;			// 댕글링 포인터 방지를 위해 하는 것이 권장

	Alloc = new int[10];
	delete[] Alloc;				// 배열을 할당받은 것을 해제할 때는 delete[]를 써야 한다.
	Alloc = nullptr;
}

//배열을 파라미터로 넘길때는 포인터를 주로 활용한다.
void Day0526_PointerParameter(int* Data, int Size)
{
	for (int i = 0; i < Size; i++)
	{
		printf("%d", *(Data+i));
	}
	printf("\n");
}

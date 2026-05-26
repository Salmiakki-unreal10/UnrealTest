#pragma once
////{
////	// 배열
////	// 같은 종류의 데이터 타입을 한번에 여러개 저장할 때 사용.
////	// 같은 데이터 타입을 가진 요소들이 연속적으로 저장되어 있는 데이터 구조를 가진다.
////	// 장점 : 빠르게 메모리에 접근할 수 있다. (랜덤액세스 성능)
////	// 단점 : 크기가 고정이다. 삽입/삭제가 힘들다. 
////
////	//int Num, Num2, Num3;
////	//int Numbers[3];
////	//Numbers[0] = 10;
////	//Numbers[1] = 20;
////	//Numbers[2] = 50;
////	//		
////	//Numbers[1] =Numbers[0];	//Numbers의 첫번째 요소를 두번째 요소에 대입하기
////	//Numbers[3] = 100;		//범위를 벗어나서 접근하는것은 안됨
////	//int Array[5] = {1, 4,  76, 32, 6}; //순서대로 데이터 초기화
////	////Array[5] = {32, 6};				//32, 6들어가고 나머지는 0
//// ////
////	//int ArraySize = sizeof(Array);
////	////printf("ArraySize : %d Byte\n, ArraySize");
////	//int ArrayCount = ArraySize /sizeof(int);
////	////printf("ArrayCount : %d 개\n, ArrayCount");
////	//
////	//2차원 배열
////	//int Array3[4][3];	//int 3개짜리 배열이 4개있다.
////	//Array3[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};	//int Array4[12];와 메모리 상 구조는 똑같다.
//// //
//// //간단 실습 
//// // 1. 배열 만들고 초기화 해보기
////
////	int ar[5] = { 1, 2, 3, 5, 7 };
////	int arr[2][5] = { { 1, 2, 3, 5, 7 } , {1, 1, 1, 1, 1,} };
////	int count = sizeof(ar) / sizeof(int);
////	int countr = sizeof(arr) / (sizeof(int) * 2);
////	int countrr = sizeof(arr) / (sizeof(int) * 5);
////
////	
////
////
////
////
////
////
////
////}
//

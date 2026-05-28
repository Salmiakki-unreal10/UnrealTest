#include <iostream>
#include <fstream>
#include <stdio.h>
#include "Day0528.h"

using namespace std;

bool PrintPos(const string& Str, const char Chr)
{
	size_t Pos = Str.find(Chr);
	bool Result = false;
	while (Pos != string::npos)
	{
		printf("%s에서 %c은 %d 인덱스에 있습니다 \n", Str.c_str(), Chr, (int)Pos);
		Pos = Str.find(Chr, Pos + 1);
		Result = true;
	}
	if (Result==false)
	{
		printf("찾지 못했습니다.\n");
	}
	return Result;
}

void Day0528() 
{
	

	//
	
	// 구조체
	// - 과련된 데이터의 집합을 표현하는데 사용
	//		- 여러 종류의 데이터 타입을 하나로 묶어서 사용
	// - 프로그램의 가독성과 유지보수성도 향상
	//

	

	Enemy Orc;
	Enemy Orcs[5]; //Enemy 5개

	// 인스턴스
	//	- 변수 그 자체
	//  - int a; //int타이븨 인스턴스 a를 만들었다.

	// 구조체 멤버 접근
	// - .을 이용한다.
	// - ->을 이용한다.(주소를 가지고 있을때)

	Orc.Name = "돌쇠";
	Orc.Health = 100.0f;
	Orc.Attack = 10.0f;
	Orc.Reward = 5;

	Enemy* OrcAddress = &Orc;

	TestStruct(Orc);
	TestStruct(OrcAddress);

	// 생성자
	// - 구조체나 클래스의 객체가 만들어 질때(인스턴스 생성시) 자동으로 호출되는 특별한 함수
	// - 주로 멤버 변수 초기화에 사용
	// - 특징
	//	- 이름이 구조체와 같다.
	//	- 반환형이 없다.
	//	- 객체가 생성될때 자동으로 호출
	//	- 생성자가 여러 개일 수도 있다.


	//초기화 방법
	// 1. 멤버 직접 초기화
	//		- 구조체 선언할때 초기화
	// 2. 중괄호 초기화
	//		- 인스턴스를 생성할 때 한번에 만드는 방식
	// 3. 생성자 초기화 리스트
	//		- 생성자에서 멤버가 선언된 순서대로 데이터 설정
	// 4. 생성자 내부 대입
	//		- 이미 생성된 객체에 값을 대입
	//		- 별도의 추가 연산이라 속도가 늦다.
	Ogre2 TestOrc = { std::string("쓰랄"), 200.0f, 50.0f, 100 };
	Ogre* TestOrc2 = new Ogre(3.0f);
	TestStruct(TestOrc2);
	delete TestOrc2;
	TestOrc2 = nullptr;
	
}


	// Enemy의 데이터를 출력하는 함수 만들기

	// - Enemy의 참조를 파라미터로 받는 함수
void TestStruct(Enemy& Target)
{

	printf("적의 이름은 [%s]입니다. \n", Target.Name.c_str());
	printf("적의 체력은 [%f]입니다. \n", Target.Health);
	printf("적의 공격력은 [%f]입니다. \n", Target.Attack);
	printf("적의 보상은 [%d]입니다. \n", Target.Reward);
}
	// - Enemy의 주소를 파라미터로 받는 함수
void TestStruct(Enemy* Target)
{
	printf("적의 이름은 [%s]입니다. \n", Target->Name.c_str());
	printf("적의 체력은 [%f]입니다. \n", Target->Health);
	printf("적의 공격력은 [%f]입니다. \n", Target->Attack);
	printf("적의 보상은 [%d]입니다. \n", Target->Reward);
}
void TestStruct(Ogre& Target)
{

	printf("적의 이름은 [%s]입니다. \n", Target.Name.c_str());
	printf("적의 체력은 [%f]입니다. \n", Target.Health);
	printf("적의 공격력은 [%f]입니다. \n", Target.Attack);
	printf("적의 보상은 [%d]입니다. \n", Target.Reward);
}
	// - Enemy의 주소를 파라미터로 받는 함수
void TestStruct(Ogre* Target)
{
	printf("적의 이름은 [%s]입니다. \n", Target->Name.c_str());
	printf("적의 체력은 [%f]입니다. \n", Target->Health);
	printf("적의 공격력은 [%f]입니다. \n", Target->Attack);
	printf("적의 보상은 [%d]입니다. \n", Target->Reward);
}

void Day0528_String()
{
	// 파싱(parsing)
	// - 문자열이나 데이터 구조를 분석하여 의미있는 정보를 구하는 과정
	// - csv, json, xml 등등
	//
	//
	//


	// std::string
	// - C의 문자열 타입


	const char* Temp = "Hello World! "; // C 스타일의 문자열
	std::string Str1 = "Hello";
	printf("%s\n", Str1.c_str());
	string Str2 = "World!";
	printf("%s\n", Str2.c_str());
	string Str3 = Str1 + " " + Str2;
	printf("%s\n", Str3.c_str());

	string Str4("Hello World? ");
	Str4 += Temp;
	Str4.append("Append\n");
	printf("%s", Str4.c_str());

	string Str5 = "Hello";
	//Str4.length();
	printf("%s : %d", Str5.c_str(), (int)Str5.size());

	//문자열에서 특정 문자 위치 찾기
	int ePos = (int)Str1.find('e');
	printf("\n%s에서 'e'는 %d 인덱스에 있습니다.\n", Str1.c_str(), ePos);

	size_t Pos = Str1.find('1');
	while (Pos != string::npos)
	{
		printf("%s에서 'ㅣ'은 %d 인덱스에 있습니다 \n", Str5.c_str(), (int)Pos);
	}
	//PrintPos(Str5, 'a');
	//PrintPos(Str5, 'l');
}

void Day0528_FileIO()
{
	////파일 입력
	//string FilePath = ".\\Data\\DataFile.txt";	// .은 현재 워킹 폴더 (기본적으로 파일이 실행되는 곳)
	//std::ifstream InputFile(FilePath);	//입력용 파일 스트림 만들기
	//if (InputFile.is_open())
	//{
	//	string FileTxt
	//	{
	//		(std::istreambuf_iterator<char>(InputFile)),
	//		(std::istreambuf_iterator<char>())
	//	};
	//	printf("파일 내용: \n%s\n", FileTxt.c_str());
	//}
	//else
	//{
	//	// 파일이 없거나 다른 이유로 열리지 않았다.
	//	printf("파일을 열 수 없습니다.\n");
	//}

	//// 파일 출력
	//const string OutputFilePath = ".\\Data\\OutTest.txt";
	////std::ofstream OutFile(OutputFilePath);
	//std::ofstream OutFile(OutputFilePath, std::ios::app);
	//if (OutFile.is_open())
	//{
	//	OutFile << "Hello World\n";
	//	OutFile << "안녕하세요2222\n";
	//	OutFile.close();
	//}
	//else
	//{
	//	printf("파일을 열 수 없습니다.\n");

	//}

	// 간단 실습
	// - 이름과 돈을 입력받고 파일로 저장하기
	string Name = "";
	int Money = 0;
	cin >> Name;
	Name += "\n";
	cin >> Money;

	string FilePath = ".\\Data\\SaveTest.txt";	// .은 현재 워킹 폴더 (기본적으로 파일이 실행되는 곳)
	std::ifstream InputFile(FilePath);	//입력용 파일 스트림 만들기
	// - 파일을 불러와서 저장은 이름과 돈을 출력하기
	if (InputFile.is_open())
	{
		string FileTxt
		{
			(std::istreambuf_iterator<char>(InputFile)),
			(std::istreambuf_iterator<char>())
		};
		printf("파일 내용: \n%s\n", FileTxt.c_str());
	}
	else
	{
		// 파일이 없거나 다른 이유로 열리지 않았다.
		printf("파일을 열 수 없습니다.\n");
	}

	// 파일 출력
	const string OutputFilePath = ".\\Data\\SaveTest.txt";
	std::ofstream OutFile(OutputFilePath);
	//std::ofstream OutFile(OutputFilePath, std::ios::app);
	if (OutFile.is_open())
	{
		OutFile << Name;
		OutFile << Money;
		OutFile.close();
	}
	else
	{
		printf("파일을 열 수 없습니다.\n");

	}
}

void Day0528_Structure()
{
}


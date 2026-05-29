#pragma once
// 위치 좌표를 표현하기 위한 구조체 Position 만들기
//멤버 변수로 int X, int Y를 가진다.
//두 멤버 변수는 기본값이 0이어야 한다.
//두 개의 정수 값을 받아서 멤버 변수에 할당하는 생성자를 만든다.(Position(int InX, int InY))
//+ 연산자를 오버로딩하여 두 Position 객체를 더했을 때, 각각의 멤버끼리 더한 결과를 갖는 새로운 Position 객체가 생성되도록 한다.
//연산자도 오버로딩하여 두 Position 객체를 뺐을 때, 각각의 멤버끼리 뺀 결과를 갖는 새로운 Position 객체가 생성되도록 한다.
//C++
//Position p1(2, 3);
//Position p2(5, 1);
//
//Position sum = p1 + p2;   // sum.x == 7, sum.y == 4
//Position diff = p1 - p2;  // diff.x == -3, diff.y == 2
//
//
//이렇게 만든 Position을 미로 탈출 게임 Player에 적용시키기
void Day0529();

struct Position
{
	int X = 0;
	int Y = 0;


	Position()
	{
	}

	Position(int x, int y)
	{
		X = x;
		Y = y;
	}

	Position operator+(const Position& InOther)	const	// 이 const는 맴버를 수정하지 않는다.(읽기 전용이다.)
	{
		//	Health = 20; // const 때문에 안된다.
		Position Result;
		Result.X = this->X + InOther.X;	// this : 자기 자신의 주소
		Result.Y = this->Y + InOther.Y;	
		

		return Result;
	}
	Position operator-(const Position& InOther)	const	// 이 const는 맴버를 수정하지 않는다.(읽기 전용이다.)
	{
		//	Health = 20; // const 때문에 안된다.
		Position Result;
		Result.X = this->X - InOther.X;	// this : 자기 자신의 주소
		Result.Y = this->Y - InOther.Y;	
		

		return Result;
	}
};

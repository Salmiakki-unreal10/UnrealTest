#pragma once
#include <iostream>
#include <stdio.h>

using namespace std;
void Day0528();
void Day0528_String();
void Day0528_FileIO();
void Day0528_Structure();
//bool PrintPos(string Str, char Chr);


struct Enemy
{
	std::string Name;	// 이름을 가지고
	float Health;		// 체력을 가지고
	float Attack;		// 공격력을 가지고
	int Reward;			// 보상을 가진다.
};
struct Ogre
{
	std::string Name = "Orc";	// 이름을 가지고
	float Health = 150.0f;		// 체력을 가지고
	float Attack = 10.0f;		// 공격력을 가지고
	int Reward = 50;			// 보상을 가진다.

	Ogre()	// 기본 생성자(생성자가 하나도 없으면 자동으로 생긴다.) 
	{

	}
	Ogre(float Modifier = 1.0f)	// 기본 생성자(생성자가 하나도 없으면 자동으로 생긴다.) 
	{
		Health *= Modifier * 10;
		Attack *= Modifier * 5;
		Reward *= Modifier * 3;
	}
	//Ogre() = default;	// 기본 생성자를 사용하겠다는 의미
	/*Ogre(std::string _Name, float _Health)
		: Name(_Name), Health(_Health);
	{
	}*/

};

struct Ogre2
{

	std::string Name = "Orc";	// 이름을 가지고
	float Health = 150.0f;		// 체력을 가지고
	float Attack = 10.0f;		// 공격력을 가지고
	int Reward = 50;			// 보상을 가진다.
};

void TestStruct(Enemy& Target);
void TestStruct(Enemy* Target);
void TestStruct(Ogre& Target);
void TestStruct(Ogre* Target);
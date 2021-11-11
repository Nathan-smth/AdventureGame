#pragma once
#include<iostream>

class Player
{
public:
	//constructors 
	Player(int newHealth,int newAttackValue,std::string newCurrentAreaName);

	//deconsttrutors
	~Player();

	//functions
	void Go();
	void Help();


	//data 
	int health;
	int attackValue;
	std::string CurrentAreaName;
	
};
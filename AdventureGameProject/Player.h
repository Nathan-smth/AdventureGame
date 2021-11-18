#pragma once
#include<iostream>

class Player
{
public:
	//constructors 
	Player(std::string newName, std::string newDescription);

	//deconsttrutors
	~Player();

	//functions
	void Look();
	void Help();


	//data 
	int health;
	int attackValue;
	std::string CurrentAreaName;
	std::string name;
	std::string description;
	int maxHealth;
	
};
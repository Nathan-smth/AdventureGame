#include "Player.h"
#include "Area.h"


Player::Player(int newHealth, int newAttackValue, std::string newCurrentAreaName)
	:	health			(newHealth)
	,	attackValue		(newAttackValue)
	,	CurrentAreaName	(newCurrentAreaName)

{
}

Player::~Player()
{
}

void Player::Go()
{
	std::string userInput;
	std::cout << "\n";
	std::cout << "Where do you want to go?";
	std::cin >> userInput;

	
}

void Player::Help()
{
	std::cout << "\n" << "Comands that you can type:";
	std::cout << "\n" << "Look";
	std::cout << "\n" << "Go";
}

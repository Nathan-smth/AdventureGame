#include "Player.h"
#include "Area.h"


Player::Player( std::string newName, std::string newDescription)
	:	health			(20)
	,	attackValue		(5)
	,	CurrentAreaName	("")
	,	name			(newName)
	,	description		(newDescription)
	,	maxHealth		(20)

{
}

Player::~Player()
{
}



void Player::Look()
{
	std::cout << "\n" << "You look at yorself, you're name is " << name<<". i still think thats a dumb name.";
	std::cout << std::endl;
	std::cout <<"You look like:"<< description << std::endl;
	std::cout << "You think on a scale from " << maxHealth << " to 0 you look about a " << health <<" healthy."<< std::endl;
	std::cout << "You think you could do at least " << attackValue <<" broken noeses worth of pain to someone."<< std::endl << std::endl;

}

void Player::Help()
{
	std::cout << "\n" << "So the camands that you can use are:";
	std::cout << std::endl;
	std::cout << "     look" << std::endl;
	std::cout << "     go" << std::endl;
	std::cout << "     exit" << std::endl;
	std::cout << "     help" << std::endl;

	std::cout << "Get it now?"<<std::endl;

	std::cout << std::endl;
}

#include "Area.h"
#include"Player.h"

Area::Area(std::string newAreaName, std::string newAreaDescription)
	:	areaName	      (newAreaName)
	,	areaDescription   (newAreaDescription)
	,	connectedArea	  ("")

{


}

Area::~Area()
{
}

void Area::Look()
{
	std::cout << "You look around at the " << areaName << "." << std::endl;
	std::cout << areaDescription << std::endl;
	std::cout << "There seems to be an exit:" << std::endl;
	std::cout << "     " << connectedArea << std::endl << std::endl;
}

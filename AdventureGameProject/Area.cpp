#include "Area.h"
#include"Player.h"

Area::Area(std::string newAreaName, std::string newAreaDescription, std::string newConnectedArea)
	:	areaName	      (newAreaName)
	,	areaDescription   (newAreaDescription)
	,	connectedArea	  (newConnectedArea)

{


}

Area::~Area()
{
}

void Area::Look()
{
}

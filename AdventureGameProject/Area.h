#pragma once
#include <iostream>

class Area
{
public:

	//constructors 
	Area(std::string newAreaName,std::string newAreaDescription,std::string newConnectedArea);
	


	//deconstructors
	~Area();


	//functions 
	void Look();

	//data
	std::string areaName;
	std::string areaDescription;
	std::string connectedArea;
};

#pragma once
#include <iostream>

class Area
{
public:

	//constructors 
	Area(std::string newAreaName,std::string newAreaDescription);
	


	//deconstructors
	~Area();


	//functions 
	void Look();

	//data
	std::string areaName;
	std::string areaDescription;
	std::string connectedArea;
};

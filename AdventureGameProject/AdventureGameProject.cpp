// AdventureGameProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Player.h"
#include "Area.h"



int main()
{
	
	Area MyRoom("My Room","You're in your room, its got a Bed and Desk. If i want i can leave out my door and go down stairs","Down Stairs");
	Area DoenStairs("Down Stairs", "Down stairs theres a shoe rack and my front door that leads to the outside world", "My Room");


	Player thePlayer(10,2,MyRoom.areaName);

	std::string playerName;
	std::string playerInput;


	std::cout << "Please type your name: ";
	std::cin >> playerName;
	std::cout << std::endl;
	std::cout << "Welcome "<<playerName<<std::endl;
	std::cout << "_ _ _ _ _ _ _ _ _ _";
	std::cout << "\n" << MyRoom.areaDescription;
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "What do you wish to do? You can type Help if you want to see what you can do."<<"\n";
	std::cin >> playerInput;

	if (playerInput == "Help")
	{
		thePlayer.Help();
	}
	else if (playerInput == "Look")
	{
		MyRoom.Look();
	}
	else if (playerInput == "Go")
	{
		thePlayer.Go();
	}





}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

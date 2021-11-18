// AdventureGameProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Player.h"
#include "Area.h"



int main()
{

	std::cout << "Welcome to the Adventure Game!?" << std::endl;
	std::cout << "_______________________________" << std::endl;


	Area MyRoom("MyRoom", "You're in your room, its got a Bed and Desk. If i want i can leave out my door and go down stairs");
	Area DownStairs("DownStairs", "Down stairs theres a shoe rack and my front door that leads to the outside world");
	Area Outside("Outside", "There a long street with cracks and pot holes throughoutt it, some lamp posts have fallen? And the houses are in ruin? You better check your friends house");

	MyRoom.connectedArea = DownStairs.areaName;
	DownStairs.connectedArea = Outside.areaName;




	std::cout << "Whats your name huh?: " << std::endl;
	std::string playerName;

	std::cin >> playerName;
	std::cout << "Welcome i guess, " << playerName << "." << std::endl << std::endl;



	std::cout << "Give me a short description(one sentance) of you, would you?: " << std::endl;
	std::string playerDescription;

	std::cin >> playerDescription;
	std::cout << "Cool cool" << std::endl << std::endl;


	Player thePlayer(playerName, playerDescription);
	thePlayer.CurrentAreaName = MyRoom.areaName;

	bool exit = false;

	while (exit == false)
	{
		std::cout << "You are in " << thePlayer.CurrentAreaName << std::endl;

		std::cout << "What would you like to do?" << std::endl;

		std::string playerInput;
		std::cin >> playerInput;

		if (playerInput == "look")
		{
			std::cout << "What is it that you're looking at? (secret tip: type something along the lines of 'area' or 'self' and you might get somewhere)" << std::endl << std::endl;

		
			std::cin >> playerInput;

			std::cout << std::endl;


			if (playerInput == "area")
			{

				if (thePlayer.CurrentAreaName == MyRoom.areaName)
				{
					MyRoom.Look();
				}
				else if (thePlayer.CurrentAreaName == DownStairs.areaName)
				{
					DownStairs.Look();
				}
				else if (thePlayer.CurrentAreaName == Outside.areaName)
				{
					Outside.Look();
				}
			}
			else if (playerInput == "self")
			{
				thePlayer.Look();
			}
			else
			{
				std::cout << "Sorry, i have no idea what  \"" << playerInput << "\"" << " is" << std::endl;
				std::cout << "Try entering a corret input please!" << std::endl << std::endl;
			}
		}

		else if (playerInput == "go")
		{
			std::cout << "where is it you want to go? (secret tip: Look at the area you are in there may or may not be exits (there is definitly exits)) " << std::endl << std::endl;


			std::cout << "Where do you want to go? (secret tip: Look at the area you are in to see exits or dont and try to guess)" << std::endl << std::endl;

			std::cin >> playerInput;


			if (thePlayer.CurrentAreaName == MyRoom.areaName)
			{
				if (playerInput == MyRoom.connectedArea)
				{
					std::cout << "You head on over to " << playerInput << std::endl << std::endl;
					thePlayer.CurrentAreaName = playerInput;
				}
				else
				{
					std::cout << "I didn't understand the target you have entered \"" << playerInput << "\"" << std::endl;
					std::cout << "Try looking at the area around you and going to one of the connected areas maybe that will work. Who knows?." << std::endl << std::endl;
				}
			}


			else if (thePlayer.CurrentAreaName == DownStairs.areaName)
			{
				if (playerInput == DownStairs.connectedArea)
				{
					std::cout << "You head on over to " << playerInput << std::endl << std::endl;
					thePlayer.CurrentAreaName = playerInput;
				}
				else
				{
					std::cout << "I didn't understand the target you have entered \"" << playerInput << "\"" << std::endl;
					std::cout << "Try looking at the area around you and going to one of the connected areas maybe that will work. Who knows?." << std::endl << std::endl;
				}
			}


			else if (thePlayer.CurrentAreaName == Outside.areaName)
			{
				if (playerInput == Outside.connectedArea)
				{
					std::cout << "You head on over to  " << playerInput << std::endl << std::endl;
					thePlayer.CurrentAreaName = playerInput;
				}
				else
				{
					std::cout << "I didn't understand the target you have entered \"" << playerInput << "\"" << std::endl;
					std::cout << "Try looking at the area around you and going to one of the connected areas maybe that will work. Who knows?." << std::endl << std::endl;
				}
			}
		}

		else if (playerInput == "exit")
		{
			std::cout << "finally they're leav.. i mean thank you for playing please play agian" << std::endl << std::endl;
			exit = true;
		}

		else if (playerInput == "help")
		{
			thePlayer.Help();
		}

		else
		{
			std::cout << "Sorry, please enter a correct command \"" << playerInput << "\"" <<" is not a correct command."<< std::endl;
			std::cout << "There is a help comand for a reason -_- ." << std::endl << std::endl;
		}


		
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

#include "StartScene.h"
#include <iostream>

void StartScene::draw()
{
	system("cls");
	std::cout << "Choose 1 or 2" << std::endl;
	std::cout << "1. Start Simulation" << std::endl;
	std::cout << "2. Quit Simulation" << std::endl;
}

void StartScene::update()
{
	int option;

	std::cin >> option;

	if (option == 1)
	{

	}
	else if (option == 2)
	{
		
	}
	else
	{

	}
}

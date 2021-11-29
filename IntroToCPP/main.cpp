#include <iostream>

int Add(int num1, int num2)
{
	return num1 + num2;
}

int test = 10;

/*Array*/
int numbers[] = { 1, 2, 3 };
/*2D array*/
int numbers2D[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

int main()
{
	int number;
	int health = 10;
	bool isAlive = health;
	int damage = 10;

	if (health == 0)
	{
		isAlive = false;
	}
	else if (health == 10) 
	{
		damage += 50;
	}
	else if (health == 5)
	{
		std::cout << "Danger! Health Low";
	}

	for (int i : numbers)
	{
		std::cout << i << std::endl;
	}

	char firstName[] = "Michael";

	std::cout << firstName << std::endl;
	std::cout << "22\n";
	std::cin >> number;
	std::cout << "The number is " << number;
	return 0;
}
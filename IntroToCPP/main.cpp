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

	char firstName[32] = "Michael";
	char lastName[32] = "";
	char fullName[64] = "";

	std::cout << firstName << std::endl;
	std::cin >> lastName;

	strcat_s(fullName, firstName);
	strcat_s(fullName, lastName);
	strcpy_s(firstName, lastName);

	std::cout << fullName << std::endl;

	system("pause");

	return 0;
}
#include <iostream>
#include "Character.h"

int add(int a, int b)
{
	return a + b;
}

void addAndPrint(int a, int b)
{
	std::cout << a + b << std::endl;
}

void countUpTo(int numba)
{
	for (int i = 0; i <= numba; i++)
		std::cout << i << std::endl;
}

void printOutArrayItems(int array[], int i)
{
	for (int j = 0; j < i;j++)
		std::cout << array[j] << std::endl;

}

int main()
{
	Character player;


	int numbers[3] = { 1,2,3 };
	int morenumbers[8] = { 3,4,62,3,5,7,74,4 };
	printOutArrayItems(morenumbers, 3);

	char name[] = { 'r','e','g' };
	char name2[] = { 'r','e','g' };
	//char name3[] = { "reginald" };

	//for (int i = 0; numbers[i] <= 2; i++)
		std::cout << name;
	int number = 2;
	float decimal = 0.5f;
	bool onOff = true;
	char letter = 'a';
	double bigDecimal = 0.9876542;

	letter = 5;
	//number = onOff;
	//decimal = number;

	float health = 100;

	if (!health)
	{
		std::cout << "you dead";
	}
	//std::cout << numbers[0] << std::endl;
	//std::cout << "Reginald"<<"Thompson" << std::endl;

	//std::cin >>/* number;
	//countUpTo(add(number, 5));*/
	//addAndPrint(number, 5);
	//std::cout << "your age is " << number << std::endl;
	return 0;
}
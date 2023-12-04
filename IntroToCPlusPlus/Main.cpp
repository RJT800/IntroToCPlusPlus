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
/// <summary>
/// create a function for a character creation menu.
/// the function should ask the player to input a health and damage value 
/// for a new character. It will then create a new character with the given stats and return it.
/// print the characters stats in the main function.
/// </summary>
/// <returns></returns>

//void createACharacter()
//{
//	std::cout << "input Health" << std::endl;
//	int health;
//	std::cin >> health;
//	std::cout << "input Damage" << std::endl;
//	int damage;
//	std::cin >> damage;
//	Character guy(health, damage);
//	int 
//	std::cout << "health: ";
//	std::cout << guy->health << std::endl;
//	std::cout << "damage: ";
//	std::cout << d << std::endl;
//	return;
//	
//}

float getFloatInput(const char prompt[])
{
	float value;
	std::cout << prompt << std::endl;

	std::cin >> value;
	return value;
}


Character* createACharacter()
{
	float health;
	float damage;

	std::cout << "give health" << std::endl;
	std::cin >> health;

	std::cout << "give damage" << std::endl;
	std::cin >> damage;

	Character* character = new Character(health, damage);


	return character;
}

//void printCharacterStats(Character* player)
//{
//	std::cout << "health" << player->getHealth() << std::endl;
//	std::cout << "damage" << player->getDamage() << std::endl;
//	return;
//}

int main()
{

	Character* player = createACharacter();
	player->printCharacterStats();

	//printCharacterStats(player);
	//std::cout << "health" << player->getHealth()<< std::endl;
	//std::cout << "damage" << player->getDamage()<< std::endl;






	/*Character player(100, 12);
	//Character player2(100,14);


	//Character* playerPt = &player;


	//int playerHealth = playerPt->getHealth();
	//std::cout << playerHealth;

	//player.attack(player2);
	//std::cout << player2.getHealth();

	//int numba = 30;
	//int* numbaPt = &numba;

	//std::cout << *numbaPt;

	//int numbers[3] = { 1,2,3 };
	//int morenumbers[8] = { 3,4,62,3,5,7,74,4 };
	//printOutArrayItems(morenumbers, 3);

	//char name[] = { 'r','e','g' };
	//char name2[] = { 'r','e','g' };
	//char name3[] = { "reginald" };

	//for (int i = 0; numbers[i] <= 2; i++)
	//	std::cout << name;
	//int number = 2;
	//float decimal = 0.5f;
	//bool onOff = true;
	//char letter = 'a';
	//double bigDecimal = 0.9876542;

	//letter = 5;
	//number = onOff;
	//decimal = number;

	//float health = 100;

	//if (!health)
	//{
	//	std::cout << "you dead";
	//}
	//std::cout << numbers[0] << std::endl;
	//std::cout << "Reginald"<<"Thompson" << std::endl;

	//std::cin >>/* number;
	//countUpTo(add(number, 5));
	//addAndPrint(number, 5);
	//std::cout << "your age is " << number << std::endl;*/
	return 0;
}
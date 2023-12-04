#include <iostream>
#include "Character.h"

/// <summary>
/// default constructor
/// </summary>
Character::Character()
{
	m_health = 0;
	m_damage = 0;
}



/// <param name="health">the amount of damage they can take before dying</param>
/// <param name="damage">the amount of damage they can deal to something's health by attacking</param>
Character::Character(float health, float damage)
{
	m_health = health;
	m_damage = damage;
}

void Character::attack(Character& opponent)
{
	opponent.takeDamage(getDamage());
}

void Character::takeDamage(float damage)
{
	m_health -= damage;
}


void Character::printCharacterStats()
{
	std::cout << "health" << this->getHealth() << std::endl;
	std::cout << "damage" << this->getDamage() << std::endl;
}


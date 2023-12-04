#pragma once

class Character
{
public:
	Character();
	Character(float health, float damage);


	void attack(Character& opponent);
	void takeDamage(float damage);
	void printCharacterStats();

	float getHealth() { return m_health; }
	float getDamage() { return m_damage; }
private:
	/// <summary>
	/// 
	/// </summary>
	float m_health;
	float m_damage;

};
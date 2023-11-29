#pragma once

class Character
{
public:
	void takeDamage(float damage);


	float getHealth() { return m_health; }
private:
	/// <summary>
	/// 
	/// </summary>
	float m_health;
	float m_damage;

};
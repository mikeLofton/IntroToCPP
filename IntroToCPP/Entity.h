#pragma once

class Entity
{
public:
    Entity();
    Entity(char icon, float health, float attackPower, float defensePower);

    char getIcon() { return m_icon; }
    float getHealth() { return m_health; }
    float getAttackPower() { return m_attackPower; }
    float getDefensePower() { return m_defensePower; }

    float takeDamage(float damageAmount);
    float attack(Entity* entity);
    void printStats();

private:
    char m_icon;
    float m_health;
    float m_attackPower;
    float m_defensePower;
};
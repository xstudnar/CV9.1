//
// Created by Martin Studňař on 15.01.2022.
//

#ifndef OPCV9_1_HERO_H
#define OPCV9_1_HERO_H


#include "Weapon.h"
#include "Armor.h"
#include <vector>
#include "Item.h"


class Hero {
int m_health;
int m_strength;
int m_agility;
int m_intelligence;
Weapon* m_weapon;
Armor* m_armor;
std::vector<Item*> m_items;
public:
    Hero();
    void setWeapon(Weapon* weapon);
    void setArmor(Armor* armor);
    void addItem(Item* item);
    void remItem(int position);
    int getAttackDamage();
    int getDefence();
    void printInfo();
    void setHealth(int health);
    void setStrength(int strength);
    void setAgility(int agility);
    void setIntelligence(int intelligence);
};


#endif //OPCV9_1_HERO_H

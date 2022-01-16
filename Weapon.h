//
// Created by Martin Studňař on 15.01.2022.
//

#ifndef OPCV9_1_WEAPON_H
#define OPCV9_1_WEAPON_H


#include <string>

class Weapon {
std::string m_name;
int m_damage;
public:
    Weapon(std::string name, int damage);
    std::string getName();
    int getDamage();
};


#endif //OPCV9_1_WEAPON_H

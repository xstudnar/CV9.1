//
// Created by Martin Studňař on 15.01.2022.
//

#ifndef OPCV9_1_ARMOR_H
#define OPCV9_1_ARMOR_H


#include <string>

class Armor {
std::string m_name;
int m_defencePoints;
public:
    Armor(std::string name, int defencePoints);
    std::string getName();
    int getDefencePoints();
};


#endif //OPCV9_1_ARMOR_H

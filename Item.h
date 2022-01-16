//
// Created by Martin Studňař on 15.01.2022.
//

#ifndef OPCV9_1_ITEM_H
#define OPCV9_1_ITEM_H


#include <string>

class Item {
std::string m_name;
int m_bonusType;
int m_bonusValue;
public:
    Item(std::string name, int bonusType, int bonusValue);
    std::string getName();
    int getBonusType();
    int getBonusValue();
};


#endif //OPCV9_1_ITEM_H

//
// Created by Martin Studňař on 15.01.2022.
//

#include "Item.h"

Item::Item(std::string name, int bonusType, int bonusValue) {
    m_name=name;
    m_bonusType=bonusType;
    m_bonusValue=bonusValue;
}

std::string Item::getName() {
    return m_name;
}

int Item::getBonusType() {
    return m_bonusType;
}

int Item::getBonusValue() {
    return m_bonusValue;
}

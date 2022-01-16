//
// Created by Martin Studňař on 15.01.2022.
//

#include "Armor.h"

Armor::Armor(std::string name, int defencePoints) {
    m_name=name;
    m_defencePoints=defencePoints;
}

std::string Armor::getName() {
    return m_name;
}

int Armor::getDefencePoints() {
    return m_defencePoints;
}

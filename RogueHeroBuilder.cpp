//
// Created by Martin Studňař on 15.01.2022.
//

#include "RogueHeroBuilder.h"

void RogueHeroBuilder::setAttributes() {
    m_hero->setHealth(100);
    m_hero->setStrength(30);
    m_hero->setAgility(20);
    m_hero->setIntelligence(10);
}

void RogueHeroBuilder::setWeapon() {
    m_hero->setWeapon(new Weapon("Rogue sword", 25));
}

void RogueHeroBuilder::setArmor() {
    m_hero->setArmor(new Armor("Rogue armor", 40));
}

void RogueHeroBuilder::setItems() {
    m_hero->addItem(new Item("Heal potion", 0, 20));
}

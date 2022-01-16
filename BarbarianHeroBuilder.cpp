//
// Created by Martin Studňař on 15.01.2022.
//

#include "BarbarianHeroBuilder.h"

void BarbarianHeroBuilder::setAttributes() {
    m_hero->setHealth(250);
    m_hero->setStrength(50);
    m_hero->setAgility(40);
    m_hero->setIntelligence(30);
}

void BarbarianHeroBuilder::setWeapon() {
    m_hero->setWeapon(new Weapon ("Barbarian sword", 50));
}

void BarbarianHeroBuilder::setArmor() {
    m_hero->setArmor(new Armor("Thorn armor", 80));
}

void BarbarianHeroBuilder::setItems() {
    m_hero->addItem(new Item("Health potion", 1, 50));
    m_hero->addItem(new Item("Armor potion", 2, 100));
    m_hero->addItem(new Item("Damage potion", 3, 100));
}

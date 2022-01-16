//
// Created by Martin Studňař on 15.01.2022.
//

#include <iostream>
#include "Hero.h"

Hero::Hero() {
    m_health=0;
    m_strength=0;
    m_agility=0;
    m_intelligence=0;
    m_weapon= nullptr;
    m_armor= nullptr;
    m_items={};
}

void Hero::setWeapon(Weapon *weapon) {
    m_weapon=weapon;
}

void Hero::setArmor(Armor *armor) {
    m_armor=armor;
}

void Hero::addItem(Item *item) {
    if(m_items.size() < 5){
        m_items.push_back(item);
    }else{
        std::cout << "Invetář je zaplněný" << std::endl;
    }
}

void Hero::remItem(int position) {
    if(0 <= position && position < m_items.size()){
        m_items.erase(m_items.begin() + position);
    }else{std::cout<< "Na tomhle místě nic není" <<std::endl;}
}

int Hero::getAttackDamage() {
    if(m_weapon!=nullptr){
        return m_weapon->getDamage();
    } else{return 0;}
}

int Hero::getDefence() {
    if(m_armor!=nullptr){
        return m_armor->getDefencePoints();
    }else{return 0;}
}

void Hero::printInfo() {
    std::cout<<"****Hero****" << std::endl;
    std::cout<<"Health: " << m_health << " HP" << std::endl;
    std::cout<< "Strength: "<< m_strength << std::endl;
    std::cout<< "Agility: "<< m_agility << std::endl;
    std::cout<< "Intelligence: "<< m_intelligence << std::endl;
    if(m_weapon!=nullptr){
        std::cout<< "Weapon: " << m_weapon->getName()<< std::endl;
        std::cout<< "Damage: " << m_weapon->getDamage() << std::endl;
    }
    if(m_armor!=nullptr){
        std::cout<< "Weapon: " << m_armor->getName()<< std::endl;
        std::cout<< "Defence points: " << m_armor->getDefencePoints() << std::endl;
    }
    for(int i=0; i < m_items.size(); i++){
        std::cout<< i << " - Item: " << m_items.at(i)->getName() << std::endl;
    }

}

void Hero::setHealth(int health) {
    m_health=health;
}

void Hero::setStrength(int strength) {
    m_strength=strength;
}

void Hero::setAgility(int agility) {
    m_agility=agility;
}

void Hero::setIntelligence(int intelligence) {
    m_intelligence= intelligence;
}

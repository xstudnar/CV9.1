//
// Created by Martin Studňař on 15.01.2022.
//

#include "HeroBuilder.h"

HeroBuilder::HeroBuilder() {
    m_hero= nullptr;
}

void HeroBuilder::createHero() {
    m_hero= new Hero();
}

Hero *HeroBuilder::getHero() {
    return m_hero;
}

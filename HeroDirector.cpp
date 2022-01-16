//
// Created by Martin Studňař on 15.01.2022.
//

#include "HeroDirector.h"

HeroDirector::HeroDirector(HeroBuilder *heroBuilder) {
    m_heroBuilder=heroBuilder;
}

void HeroDirector::setHeroBuilder(HeroBuilder *heroBuilder) {
    m_heroBuilder=heroBuilder;
}

Hero *HeroDirector::constructHero() {
    m_heroBuilder->createHero();
    m_heroBuilder->setArmor();
    m_heroBuilder->setItems();
    m_heroBuilder->setAttributes();
    m_heroBuilder->setWeapon();
    return m_heroBuilder->getHero();
}

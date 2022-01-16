//
// Created by Martin Studňař on 15.01.2022.
//

#ifndef OPCV9_1_HERODIRECTOR_H
#define OPCV9_1_HERODIRECTOR_H


#include "HeroBuilder.h"
#include "Hero.h"


class HeroDirector {
    HeroBuilder *m_heroBuilder;
public:
    HeroDirector(HeroBuilder* heroBuilder);
    void setHeroBuilder(HeroBuilder* heroBuilder);
    Hero* constructHero();
};
#endif //OPCV9_1_HERODIRECTOR_H

//
// Created by Martin Studňař on 15.01.2022.
//

#ifndef OPCV9_1_HEROBUILDER_H
#define OPCV9_1_HEROBUILDER_H


#include "Hero.h"

class HeroBuilder : Hero{
protected:
    Hero* m_hero;
public:
    HeroBuilder();
    void createHero();
    virtual void setAttributes()=0;
    virtual void setWeapon()=0;
    virtual void setArmor()=0;
    virtual void setItems()=0;
    Hero* getHero();
};


#endif //OPCV9_1_HEROBUILDER_H

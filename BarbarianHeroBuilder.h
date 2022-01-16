//
// Created by Martin Studňař on 15.01.2022.
//

#ifndef OPCV9_1_BARBARIANHEROBUILDER_H
#define OPCV9_1_BARBARIANHEROBUILDER_H


#include "HeroBuilder.h"

class BarbarianHeroBuilder : public HeroBuilder {
public:
    void setAttributes() override;
    void setWeapon() override;
    void setArmor() override;
    void setItems() override;

};


#endif //OPCV9_1_BARBARIANHEROBUILDER_H

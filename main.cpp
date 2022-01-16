#include "Hero.h"
#include "BarbarianHeroBuilder.h"
#include "HeroDirector.h"

int main() {
    HeroDirector* heroDirector= new HeroDirector(new BarbarianHeroBuilder);
    Hero* hero= heroDirector->constructHero();
    hero->printInfo();
    delete hero;
    return 0;
}

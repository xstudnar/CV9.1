cmake_minimum_required(VERSION 3.20)
project(OPCV9_1)

set(CMAKE_CXX_STANDARD 14)

add_executable(OPCV9_1 main.cpp Hero.cpp Hero.h Weapon.cpp Weapon.h Item.cpp Item.h Armor.cpp Armor.h HeroBuilder.cpp HeroBuilder.h HeroDirector.cpp HeroDirector.h BarbarianHeroBuilder.cpp BarbarianHeroBuilder.h RogueHeroBuilder.cpp RogueHeroBuilder.h)

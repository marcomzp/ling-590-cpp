#include "monster.h"
#include <iostream>
#include <string>


std::string getMonsterType(Monster monster){
    if (monster.type == MonsterType::OGRE)
        return "Ogre";
    if (monster.type == MonsterType::DRAGON)
        return "Dragon";
    if (monster.type == MonsterType::ORC)
        return "Orc";
    if (monster.type == MonsterType::GIANT_SPIDER)
        return "Giant Spider";
    if (monster.type == MonsterType::SLIME)
        return "Slime";
    
    return "Unknown";
}

void printMonster(Monster monster){
    std::cout << "This " <<  getMonsterType(monster) << " is a " << monster.name << " and has a " << monster.health << " health." << std::endl;
}

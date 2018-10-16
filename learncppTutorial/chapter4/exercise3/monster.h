#ifndef _MONSTER_H
#define _MONSTER_H
#include <string>

enum class MonsterType {
    OGRE,
    DRAGON,
    ORC,
    GIANT_SPIDER,
    SLIME
};


struct Monster {
    MonsterType type;
    std::string name;
    int health;
};

std::string getMonsterType(Monster monster);

void printMonster(Monster monster);

#endif

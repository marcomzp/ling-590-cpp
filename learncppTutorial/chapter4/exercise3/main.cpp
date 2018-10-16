#include <string>
#include <iostream>
#include "monster.h"


int main()
{
    Monster ogre = { MonsterType::OGRE, "Torg", 145 };
    Monster slime = { MonsterType::SLIME, "Blurp", 23 };
    Monster dragon = {MonsterType::DRAGON, "Ryuu", 1000};
    
    printMonster(ogre);
    printMonster(slime);
    printMonster(dragon);
    
    return 0;
}

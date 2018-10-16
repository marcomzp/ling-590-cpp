#include <string>
#include <iostream>
#include "animal.h"


int main()
{
    Animal chicken = {AnimalType::CHICKEN, 2};
    Animal cat = {AnimalType::CAT, 4 };
    
    std::cout << "A ";
    getAnimalType(chicken);
    std::cout << " has " << printNumberofLegs(chicken) << " legs. " << std::endl;
    

    std::cout << "A ";
    getAnimalType(cat);
    std::cout << " has " << printNumberofLegs(cat) << " legs. " << std::endl;
    
    return 0;
}

#include "animals.h"
#include <iostream>


int printLegs()
{
 //   int legsNumber[Animals::MAX_ANIMALS]; // allocate 6 integers
    int legsNumber[Animals::MAX_ANIMALS] = { 2, 4, 4, 4, 2, 0 };
    std::cout << "A chiken has " << legsNumber[0] << " legs." << std::endl;
    std::cout << "A dog has " << legsNumber[1] << " legs." << std::endl;
    std::cout << "A cat has " << legsNumber[2] << " legs." << std::endl;
    std::cout << "An elephant has " << legsNumber[3] << " legs." << std::endl;
    std::cout << "An duck has " << legsNumber[4] << " legs." << std::endl;
    std::cout << "An snake has " << legsNumber[5] << " legs." << std::endl;

    
    return 0;
}

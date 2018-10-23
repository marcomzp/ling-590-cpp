#include "count.h"
#include <iostream>
#include <string>


int count()
{
    char letter = 'a';
    while (letter <= 'z')
    {
        std::cout << letter << " " << static_cast<int>(letter) <<std::endl;
        ++letter;
    }
    std::cout << "done!" << std::endl;
    
    return 0;
}

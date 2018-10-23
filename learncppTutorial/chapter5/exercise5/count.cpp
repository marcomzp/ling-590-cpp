#include "count.h"
#include <iostream>
#include <string>


int count()
{
    int outer = 1;
    int a = 8;
    while (outer <= 5)
 //   std::string str = ;
    {
        // loop between 1 and outer
        int inner = 1;
        std::cout << std::string((a), ' ');
        while (inner <= outer)
            std::cout  << inner++ << ' ';
        
        // print a newline at the end of each row
        std::cout << "\n";
        ++outer;
        a = a - 2;
    }
    
    return 0;
}

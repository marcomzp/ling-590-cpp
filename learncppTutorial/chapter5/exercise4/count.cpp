#include "count.h"
#include <iostream>
#include <string>


int count()
{
    int outer = 5;
    while (outer >= 1)
    {
        // loop between 1 and outer
        int inner = outer;
        while (inner >= 1)
            std::cout << inner-- << " ";
        
        // print a newline at the end of each row
        std::cout << "\n";
        --outer;
        
    }
    
    
    return 0;
}

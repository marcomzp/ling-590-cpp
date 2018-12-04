#include "items.h"
#include <iostream>


 

int main()
{
   int items[MAX_ITEMS]{ 2, 5, 10 };
    
    std::cout << "The player has " << countTotalItems(items) << " items.\n";
}

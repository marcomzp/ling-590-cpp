#include "items.h"
#include <iostream>


int countTotalItems(int * items)
{
    int total = 0;
    for (int i = 0; i < MAX_ITEMS; ++i) {
        total = total + items[i];
    }
    return total;
}

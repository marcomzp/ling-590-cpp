#include "arrays.h"
#include <iostream>


int printArray()
{
    int array[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    const int arrayLen = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i <= arrayLen - 1; ++i) {
    std::cout << array[i] << '\n';
    }
    return 0;
}


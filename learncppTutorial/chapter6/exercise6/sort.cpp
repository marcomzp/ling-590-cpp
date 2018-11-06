#include "sort.h"
#include <iostream>


void bubbleSort()
{
    const int length(9);
    int array[length] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    
    for (int i = 0; i < length; ++i) { //looping through each element of the array
        for (int j = i; j < length; ++j) {
            if (array[i] > array[j]) {
                std::swap(array[i], array[j]);
                // array[j] = array[i]
            }
        }
    }

    
for (int index = 0; index < length; ++index)
    std::cout << array[index] << ' ';
}



#include <iostream>
#include "gravity.h"
 

 
int main()
{
    const double initialHeight = getInitialHeight();
    
    int seconds = 0;
    double height;
    
    do
    {
        height = calculateHeight(initialHeight, seconds);
        printHeight(height, seconds);
        ++seconds;
    } while (height > 0.0);
    
    return 0;
}

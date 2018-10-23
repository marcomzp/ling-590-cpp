#include <iostream>
#include "gravity.h"
 

 
int main()
{
	const double towerHeight = getTowerHeight();
    for (int i = 0; i <= towerHeight; i++) {
        calculateAndPrintHeight(towerHeight, i);
    }
    std::cout << "At the next second, the ball is on the floor.\n";
	return 0;
}

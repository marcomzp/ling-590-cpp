#include <iostream>
#include "gravity.h"
 

 
int main()
{
	const double towerHeight = getTowerHeight();
 
	calculateAndPrintHeight(towerHeight, 0);
	calculateAndPrintHeight(towerHeight, 1);
	calculateAndPrintHeight(towerHeight, 2);
	calculateAndPrintHeight(towerHeight, 3);
	calculateAndPrintHeight(towerHeight, 4);
	calculateAndPrintHeight(towerHeight, 5);
 
	return 0;
}

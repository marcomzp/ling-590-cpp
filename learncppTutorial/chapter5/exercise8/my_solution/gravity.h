#ifndef _GRAVITY_H
#define _GRAVITY_H


constexpr double gravity(9.2);
double getTowerHeight();
double calculateHeight(double towerHeight, int seconds);
void printHeight(double height, int seconds);
void calculateAndPrintHeight(double towerHeight, int seconds);


#endif

#include <iostream>
#include "gravity.h"



// gets height from user and returns it
double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight;
    std::cin >> towerHeight;
    return towerHeight;
}

// Returns height from ground after "seconds" seconds
double calculateHeight(double towerHeight, int seconds)
{
    // Using formula: [ s = u * t + (a * t^2) / 2 ], here u(initial velocity) = 0
    double distanceFallen = (gravity * (seconds * seconds)) / 2;
    double currentHeight = towerHeight - distanceFallen;
    
    return currentHeight;
}

// Prints height every second till ball has reached the ground
void printHeight(double height, int seconds)
{
      for (int i = 0; i <= height; i++) {
          if (height > 0.0){
              std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
              break;
          }
      }
}

void calculateAndPrintHeight(double towerHeight, int seconds)
{
    double height = calculateHeight(towerHeight, seconds);
    printHeight(height, seconds);
}





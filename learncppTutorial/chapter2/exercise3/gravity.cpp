#include "g.h"
#include <iostream>

using namespace std;

//reads number from the user
double readNumber() { //reads number from the user
    cout << "Enter the height of the tower in meters: "; //ask user for a number
    double n;
    cin >> n;
    return n;
    }


double height = readNumber();

// gets two integers and depending on the symbol that the user provided, makes a calculation
double calculateFallenHeight(double myGravity, double s) {
    double result = 0.0;
        return height - (myGravity * (s * s))/2;
        return result;
    }


